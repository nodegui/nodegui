#include "core/FlexLayout/flexitem.h"

#include <QWidget>

#include "core/FlexLayout/flexutils.h"

FlexItem::FlexItem() {
  this->node = YGNodeNew();
  YGConfigSetUseWebDefaults(this->node->getConfig(), true);
  YGNodeStyleSetDisplay(this->node, YGDisplayFlex);
  YGNodeStyleSetFlex(this->node, 1);
  YGNodeStyleSetMinHeight(this->node, 0);
  YGNodeStyleSetMinWidth(this->node, 0);
}

YGNodeRef FlexItem::getFlexNode() const { return this->node; }

FlexItem::~FlexItem() {
  FlexNodeContext* ctx = flexutils::getFlexNodeContext(this->node);
  if (ctx != nullptr) {
    delete ctx;
  };
  YGNodeFree(this->node);
}
