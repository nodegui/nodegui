#include "core/FlexLayout/flexitem.h"

#include <QWidget>

#include "core/FlexLayout/flexutils.h"

FlexItem::FlexItem() {
  this->node = YGNodeNew();
  YGConfigSetUseWebDefaults(this->node->getConfig(), true);
}

YGNodeRef FlexItem::getFlexNode() const { return this->node; }

FlexItem::~FlexItem() {
  FlexNodeContext* ctx = flexutils::getFlexNodeContext(this->node);
  if (ctx != nullptr) {
    delete ctx;
  };
  YGNodeFree(this->node);
}
