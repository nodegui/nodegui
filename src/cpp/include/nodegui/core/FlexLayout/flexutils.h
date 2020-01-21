#pragma once

#include <QLayoutItem>
#include <QWidget>
#include "Extras/Utils/nutils.h"
#include "deps/yoga/YGNode.h"

class DLL_EXPORT FlexNodeContext {
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
QRect getFlexNodeGeometry(YGNodeRef node);
void setFlexNodeGeometry(YGNodeRef node, const QRect& geometry);
FlexNodeContext* getFlexNodeContext(YGNodeRef node);
bool isFlexNodeSizeControlled(YGNodeRef node);
void configureFlexNode(QWidget* widget, YGNodeRef node,
                       bool isLeafNode = false);

}  // namespace flexutils