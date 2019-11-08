#include "core/FlexLayout/flexitem.h"

FlexItem::FlexItem() {
  this->node = YGNodeNew();
  // YGConfigSetUseWebDefaults(this->node->getConfig(),true);
}

YGNodeRef FlexItem::getFlexNode() const { return this->node; }

FlexItem::~FlexItem() { YGNodeFree(this->node); }
