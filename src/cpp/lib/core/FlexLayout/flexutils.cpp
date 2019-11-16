#include "core/FlexLayout/flexutils.h"

FlexNodeContext::FlexNodeContext(void* widget) {
  this->_widget = widget;
  this->_layoutItem = nullptr;
}

QWidget* FlexNodeContext::widget() {
  QWidget* flexNodeWidget = static_cast<QWidget*>(this->_widget);
  return flexNodeWidget;
}

QLayoutItem* FlexNodeContext::layoutItem() { return this->_layoutItem; }

void FlexNodeContext::setLayoutItem(QLayoutItem* item) {
  this->_layoutItem = item;
}

const QRect flexutils::getFlexNodeGeometry(YGNodeRef node) {
  int width = static_cast<uint>(YGNodeLayoutGetWidth(node));
  int height = static_cast<uint>(YGNodeLayoutGetHeight(node));
  int left = static_cast<uint>(YGNodeLayoutGetLeft(node));
  int top = static_cast<uint>(YGNodeLayoutGetTop(node));
  const QRect geometry(left, top, width, height);
  return geometry;
}

void flexutils::setFlexNodeGeometry(YGNodeRef node, const QRect& geometry) {
  int width = geometry.width();
  int height = geometry.height();
  int left = geometry.left();
  int top = geometry.top();

  YGNodeStyleSetWidth(node, width);
  YGNodeStyleSetHeight(node, height);
  YGNodeStyleSetPosition(node, YGEdgeTop, top);
  YGNodeStyleSetPosition(node, YGEdgeLeft, left);
}

FlexNodeContext* flexutils::getFlexNodeContext(YGNodeRef node) {
  if (!node) {
    return nullptr;
  }
  void* rawCtx = YGNodeGetContext(node);
  FlexNodeContext* ctx = static_cast<FlexNodeContext*>(rawCtx);
  return ctx;
}

YGSize flexutils::measureQtWidget(YGNodeRef node, float _width,
                                  YGMeasureMode widthMode, float _height,
                                  YGMeasureMode heightMode) {
  FlexNodeContext* ctx = getFlexNodeContext(node);
  QWidget* widget = ctx->widget();
  QSize size = widget->sizeHint();
  float width = static_cast<float>(size.width());
  float height = static_cast<float>(size.height());
  return YGSize{
      width,
      height,
  };
}

void flexutils::configureFlexNode(QWidget* widget, YGNodeRef node,
                                  bool isLeafNode) {
  FlexNodeContext* ctx = new FlexNodeContext(widget);
  YGNodeSetContext(node, ctx);
  if (isLeafNode) {
    YGNodeSetMeasureFunc(node, &flexutils::measureQtWidget);
  }
}