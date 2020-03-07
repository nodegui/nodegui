#include "core/FlexLayout/flexlayout.hpp"

#include <QDebug>
#include <QWidget>

#include "core/FlexLayout/flexitem.h"
#include "core/FlexLayout/flexutils.h"
#include "core/YogaWidget/yogawidget.h"

FlexLayout::FlexLayout(QWidget* parentWidget, YGNodeRef parentNode)
    : QLayout(parentWidget) {
  this->node = parentNode;
  // Throttle the setGeometry calls that may happen when dealing with huge
  // lists.
  this->throttleTimer.setTimerType(Qt::PreciseTimer);
  this->throttleTimer.setSingleShot(true);
  QObject::connect(&this->throttleTimer, &QTimer::timeout, this,
                   &FlexLayout::performLayout);
}

FlexLayout::~FlexLayout() {
  if (!this->node) {
    return;
  }
  const uint32_t childCount = YGNodeGetChildCount(this->node);
  for (uint32_t i = 0; i < childCount; i++) {
    const YGNodeRef oldChild = YGNodeGetChild(this->node, i);
    FlexNodeContext* childCtx = flexutils::getFlexNodeContext(oldChild);

    if (childCtx->layoutItem()) {
      delete childCtx->layoutItem();
      childCtx->setLayoutItem(nullptr);
    }
  }
  YGNodeRemoveAllChildren(this->node);
}

void FlexLayout::addItem(QLayoutItem* item) {
  // Noop: We already have addWidget doing all the hard work.
  return;
}

void FlexLayout::addWidget(QWidget* childWidget, YGNodeRef childNode) {
  if (!this->node) {
    qWarning() << "Flex layout's parent yoga node not set yet. Set it using "
                  "setFlexNode. \n"
               << "Child widget will not be added to Flex Layout";
    return;
  }
  uint count = YGNodeGetChildCount(this->node);
  YGNodeInsertChild(this->node, childNode, count);
  FlexNodeContext* childCtx = flexutils::getFlexNodeContext(childNode);
  auto layoutitem = new QWidgetItem(childWidget);
  childCtx->setLayoutItem(layoutitem);
  QLayout::addWidget(childWidget);
  this->invalidate();
}

void FlexLayout::insertChildBefore(QWidget* childWidget,
                                   YGNodeRef beforeChildNode,
                                   YGNodeRef childNode) {
  if (!this->node) {
    qWarning() << "Flex layout's parent yoga node not set yet. Set it using "
                  "setFlexNode. \n"
               << "childwidget cant be inserted";
    return;
  }
  uint count = YGNodeGetChildCount(this->node);
  uint indexToInsert = 0;
  for (uint i = 0; i < count; i += 1) {
    if (beforeChildNode == YGNodeGetChild(this->node, i)) {
      indexToInsert = i;
      break;
    }
  }
  YGNodeInsertChild(this->node, childNode, indexToInsert);
  FlexNodeContext* ctx = flexutils::getFlexNodeContext(childNode);
  ctx->setLayoutItem(new QWidgetItem(childWidget));
  QLayout::addWidget(childWidget);
  this->invalidate();
}

QLayoutItem* FlexLayout::itemAt(int index) const {
  if (!this->node ||
      index >= static_cast<int>(YGNodeGetChildCount(this->node))) {
    return nullptr;
  }
  YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
  FlexNodeContext* childCtx = flexutils::getFlexNodeContext(childNode);
  return childCtx->layoutItem();
}

QLayoutItem* FlexLayout::takeAt(int index) {
  if (!this->node ||
      index >= static_cast<int>(YGNodeGetChildCount(this->node))) {
    return nullptr;
  }
  YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
  FlexNodeContext* ctx = flexutils::getFlexNodeContext(childNode);
  QLayoutItem* childLayoutItem = ctx->layoutItem();
  ctx->setLayoutItem(nullptr);
  YGNodeRemoveChild(this->node, childNode);
  return childLayoutItem;
}

int FlexLayout::count() const {
  if (!this->node) {
    return 0;
  }
  float childCount = YGNodeGetChildCount(this->node);
  return static_cast<int>(childCount);
}

void FlexLayout::removeWidget(QWidget* childWidget, YGNodeRef childNode) {
  if (!this->node) {
    qWarning() << "Flex layout's parent yoga node not set yet. Set it using "
                  "setFlexNode. "
               << "childwidget cant be removed";
    return;
  }
  FlexNodeContext* ctx = flexutils::getFlexNodeContext(childNode);
  if (ctx->layoutItem()) {
    delete ctx->layoutItem();
    ctx->setLayoutItem(nullptr);
  }
  YGNodeRemoveChild(this->node, childNode);
  QLayout::removeWidget(childWidget);
  this->invalidate();
}

YGNodeRef FlexLayout::getRootNode(YGNodeRef node) const {
  YGNodeRef parent = node->getOwner();
  if (!parent) {
    return node;
  } else {
    return getRootNode(parent);
  }
}

bool FlexLayout::hasHeightForWidth() const { return false; }

QSize FlexLayout::sizeHint() const {
  calculateLayout();
  return QSize(YGNodeLayoutGetWidth(this->node),
               YGNodeLayoutGetHeight(this->node));
}

QSize FlexLayout::minimumSize() const {
  calculateLayout();
  QSize minSize = QSize(YGNodeLayoutGetWidth(this->node),
                        YGNodeLayoutGetHeight(this->node));
  return minSize;
}

void FlexLayout::setGeometry(const QRect& rect) {
  this->cachedRect = rect;
  if (this->throttleTimer.isActive()) {
    return;
  }
  this->throttleTimer.start(10);
  // This will call performLayout and throttle requests between 10ms.
}

void FlexLayout::performLayout() {
  if (!this->node) {
    return;
  }
  QRect rect = this->cachedRect;
  if (!rect.isValid() || rect != geometry()) {
    bool isSizeControlled = flexutils::isFlexNodeSizeControlled(this->node);
    YGValue prevStyleMinWidth = YGNodeStyleGetMinWidth(this->node);
    YGValue prevStyleMinHeight = YGNodeStyleGetMinHeight(this->node);
    if (isSizeControlled) {
      YGNodeMarkDirtyAndPropogateToDescendants(this->node);
      YGNodeStyleSetMinHeight(this->node, rect.height());
      YGNodeStyleSetMinWidth(this->node, rect.width());
    }

    calculateLayout();

    uint count = YGNodeGetChildCount(this->node);
    for (uint i = 0; i < count; ++i) {
      YGNode* childNode = YGNodeGetChild(this->node, i);
      QRect childRect = flexutils::getFlexNodeGeometry(childNode);
      FlexNodeContext* ctx = flexutils::getFlexNodeContext(childNode);
      QLayoutItem* childItem = ctx->layoutItem();
      childItem->setGeometry(childRect);
    }
    if (isSizeControlled) {
      restoreNodeMinStyle(prevStyleMinWidth, prevStyleMinHeight);
    }
  }
  QLayout::setGeometry(rect);
}

void FlexLayout::setFlexNode(YGNodeRef parentNode) { this->node = parentNode; }

void FlexLayout::calculateLayout() const {
  if (YGNodeIsDirty(this->node)) {
    YGNodeRef rootNode = getRootNode(this->node);
    YGDirection rootDirection = YGNodeStyleGetDirection(rootNode);
    YGNodeCalculateLayout(rootNode, YGUndefined, YGUndefined, rootDirection);
  }
}

void FlexLayout::restoreNodeMinStyle(YGValue& previousMinWidth,
                                     YGValue& previousMinHeight) {
  if (previousMinHeight.unit == YGUnitPercent) {
    YGNodeStyleSetMinHeightPercent(this->node, previousMinHeight.value);
  } else {
    YGNodeStyleSetMinHeight(this->node, previousMinHeight.value);
  }
  if (previousMinWidth.unit == YGUnitPercent) {
    YGNodeStyleSetMinWidthPercent(this->node, previousMinWidth.value);
  } else {
    YGNodeStyleSetMinWidth(this->node, previousMinWidth.value);
  }
}

void FlexLayout::connectSignalsToEventEmitter() { QLAYOUT_SIGNALS }
