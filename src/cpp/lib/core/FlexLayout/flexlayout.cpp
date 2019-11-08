#include "core/FlexLayout/flexlayout.h"

#include <QWidget>

#include "core/YogaWidget/yogawidget.h"
#include "spdlog/spdlog.h"

FlexLayout::NodeContext* FlexLayout::getNodeContext(YGNodeRef node) {
  if (!node) {
    return nullptr;
  }
  void* childContext = YGNodeGetContext(node);
  NodeContext* ctx = static_cast<NodeContext*>(
      childContext);  // because we are managing this at all times
  return ctx;
}

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
    NodeContext* ctx = getNodeContext(oldChild);
    if (ctx) {
      delete ctx->item;
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
  if (!this->node) {
    return nullptr;
  }
  // spdlog::info("flexlayout: itemAt {}",index);
  YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
  NodeContext* ctx = getNodeContext(childNode);
  if (!ctx) {
    return nullptr;
  }
  return ctx->item;
}

QLayoutItem* FlexLayout::takeAt(int index) {
  YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
  NodeContext* ctx = getNodeContext(childNode);
  QLayoutItem* childLayoutItem = ctx->item;
  YGNodeRemoveChild(this->node, childNode);
  spdlog::info("flexlayout: takeAt ", index);
  delete ctx;
  return childLayoutItem;
}

int FlexLayout::count() const {
  if (!this->node) {
    return 0;
  }
  float childCount = YGNodeGetChildCount(this->node);
  spdlog::info("flexlayout: count {}", childCount);
  return static_cast<uint>(childCount);
}

void FlexLayout::addWidget(QWidget* childWidget, YGNodeRef childNode) {
  if (!this->node) {
    spdlog::warn(
        "Flex layout's parent yoga node not set yet. Set it using setFlexNode. "
        "Child widget will not be added to Flex Layout");
    return;
  }
  uint count = YGNodeGetChildCount(this->node);
  YGNodeInsertChild(this->node, childNode, count);
  QLayoutItem* layoutItem = new QWidgetItem(childWidget);
  NodeContext* childContext = new NodeContext(layoutItem);
  YGNodeSetContext(childNode, static_cast<void*>(childContext));
  QLayout::addWidget(childWidget);
  this->invalidate();
}

void FlexLayout::removeWidget(QWidget* childWidget, YGNodeRef childNode) {
  if (!this->node) {
    spdlog::warn(
        "Flex layout's parent yoga node not set yet. Set it using setFlexNode. "
        "childwidget cant be removed");
    return;
  }

  NodeContext* ctx = getNodeContext(childNode);
  if (ctx) {
    delete ctx->item;
  }
  YGNodeRemoveChild(this->node, childNode);
  QLayout::removeWidget(childWidget);
  this->invalidate();
}

void FlexLayout::insertChildBefore(QWidget* childWidget,
                                   YGNodeRef beforeChildNode,
                                   YGNodeRef childNode) {
  if (!this->node) {
    spdlog::warn(
        "Flex layout's parent yoga node not set yet. Set it using setFlexNode. "
        "childwidget cant be inserted");
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
  QLayoutItem* layoutItem = new QWidgetItem(childWidget);
  NodeContext* childContext = new NodeContext(layoutItem);
  YGNodeSetContext(childNode, static_cast<void*>(childContext));
  QLayout::addWidget(childWidget);
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
  YGNodeRef rootNode = getRootNode(this->node);
  QWidget* parentWidget = this->parentWidget();
  QWidget* window = parentWidget->window();
  YGDirection direction = YGNodeStyleGetDirection(rootNode);
  YGNodeCalculateLayout(rootNode, window->width(), window->height(), direction);
  uint count = YGNodeGetChildCount(this->node);

  for (uint i = 0; i < count; ++i) {
    YGNode* childNode = YGNodeGetChild(this->node, i);
    int width = static_cast<uint>(YGNodeLayoutGetWidth(childNode));
    int height = static_cast<uint>(YGNodeLayoutGetHeight(childNode));
    int left = static_cast<uint>(YGNodeLayoutGetLeft(childNode));
    int top = static_cast<uint>(YGNodeLayoutGetTop(childNode));

    QRect childRect(left, top, width, height);
    NodeContext* ctx = getNodeContext(childNode);
    if (ctx) {
      QLayoutItem* childLayoutItem = ctx->item;
      QWidget* childWidget = childLayoutItem->widget();
      if (childWidget) {
        childWidget->setGeometry(childRect);
      } else {
        childLayoutItem->setGeometry(childRect);
      }
    }
  }
  QLayout::setGeometry(rect);
}

void FlexLayout::setFlexNode(YGNodeRef parentNode) { this->node = parentNode; }
