#pragma once

#include <QLayoutItem>
#include <QWidget>

#include "Extras/Export/export.h"
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
DLL_EXPORT YGSize measureQtWidget(YGNodeRef node, float width,
                                  YGMeasureMode widthMode, float height,
                                  YGMeasureMode heightMode);
DLL_EXPORT QRect getFlexNodeGeometry(YGNodeRef node);
DLL_EXPORT void setFlexNodeGeometry(YGNodeRef node, const QRect& geometry);
DLL_EXPORT FlexNodeContext* getFlexNodeContext(YGNodeRef node);
DLL_EXPORT bool isFlexNodeSizeControlled(YGNodeRef node);
DLL_EXPORT void configureFlexNode(QWidget* widget, YGNodeRef node,
                                  bool isLeafNode = false);

}  // namespace flexutils