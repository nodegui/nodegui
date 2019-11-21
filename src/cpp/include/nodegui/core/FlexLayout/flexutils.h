#pragma once

#include <QLayoutItem>
#include <QWidget>

#include "deps/yoga/YGNode.h"

class FlexNodeContext {
  void* _widget;
  QLayoutItem* _layoutItem;

 public:
  bool isSizeControlled;
  FlexNodeContext(void* widget);
  QWidget* widget();
  QLayoutItem* layoutItem();
  void setLayoutItem(QLayoutItem* item);
};
namespace flexutils {
YGSize measureQtWidget(YGNodeRef node, float width, YGMeasureMode widthMode,
                       float height, YGMeasureMode heightMode);
const QRect getFlexNodeGeometry(YGNodeRef node);
void setFlexNodeGeometry(YGNodeRef node, const QRect& geometry);
FlexNodeContext* getFlexNodeContext(YGNodeRef node);
void configureFlexNode(QWidget* widget, YGNodeRef node,
                       bool isLeafNode = false);

}  // namespace flexutils