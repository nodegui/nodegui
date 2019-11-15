#include "core/FlexLayout/flexlayout.h"

#include <QDebug>
#include <QWidget>

#include "core/FlexLayout/flexitem.h"
#include "core/FlexLayout/flexutils.h"
#include "core/YogaWidget/yogawidget.h"

FlexLayout::FlexLayout(QWidget* parentWidget, YGNodeRef parentNode)
    : QLayout(parentWidget) {
  this->node = parentNode;
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

QSize FlexLayout::sizeHint() const {
  if (!this->node) {
    return QSize(0, 0);
  }
  int width = static_cast<uint>(YGNodeLayoutGetWidth(this->node));
  int height = static_cast<uint>(YGNodeLayoutGetHeight(this->node));
  return QSize(width, height);
}

void FlexLayout::addItem(QLayoutItem* item) {
  // Noop: We already have addWidget doing all the hard work.
}

QLayoutItem* FlexLayout::itemAt(int index) const {
  if (!this->node || index >= YGNodeGetChildCount(this->node)) {
    return nullptr;
  }
  YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
  FlexNodeContext* childCtx = flexutils::getFlexNodeContext(childNode);
  return childCtx->layoutItem();
}

QLayoutItem* FlexLayout::takeAt(int index) {
  if (!this->node || index >= YGNodeGetChildCount(this->node)) {
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
  return static_cast<uint>(childCount);
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
  childCtx->setLayoutItem(new QWidgetItem(childWidget));
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

YGNodeRef FlexLayout::getRootNode(YGNodeRef node) {
  YGNodeRef parent = node->getOwner();
  if (!parent) {
    return node;
  } else {
    return getRootNode(parent);
  }
}

void FlexLayout::setGeometry(const QRect& rect) {
  if (!this->node) {
    return;
  }
  if (rect.isValid()) {
    flexutils::setFlexNodeGeometry(this->node, rect);
  }
  if (rect != geometry()) {
    YGNodeRef rootNode = getRootNode(this->node);
    YGDirection direction = YGNodeStyleGetDirection(rootNode);
    YGNodeCalculateLayout(rootNode, QWIDGETSIZE_MAX, QWIDGETSIZE_MAX,
                          direction);
    uint count = YGNodeGetChildCount(this->node);

    for (uint i = 0; i < count; ++i) {
      YGNode* childNode = YGNodeGetChild(this->node, i);
      QRect childRect = flexutils::getFlexNodeGeometry(childNode);

      FlexNodeContext* childCtx = flexutils::getFlexNodeContext(childNode);
      QLayoutItem* childLayoutItem = childCtx->layoutItem();
      if (childLayoutItem) {
        childLayoutItem->setGeometry(childRect);
      }
    }
    QLayout::setGeometry(rect);
  }
}

void FlexLayout::setFlexNode(YGNodeRef parentNode) { this->node = parentNode; }
