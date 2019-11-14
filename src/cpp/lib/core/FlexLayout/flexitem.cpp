#include "core/FlexLayout/flexitem.h"

#include <QWidget>

FlexItem::FlexItem() {
  this->node = YGNodeNew();
  YGConfigSetUseWebDefaults(this->node->getConfig(), true);
  YGNodeStyleSetDisplay(this->node, YGDisplayFlex);
  YGNodeStyleSetFlex(this->node, 1);
  YGNodeStyleSetMinHeight(this->node, 0);
  YGNodeStyleSetMinWidth(this->node, 0);
}

YGNodeRef FlexItem::getFlexNode() const { return this->node; }

FlexItem::~FlexItem() { YGNodeFree(this->node); }
