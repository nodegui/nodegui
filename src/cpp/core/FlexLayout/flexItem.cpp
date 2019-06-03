#include "flexitem.h"

FlexItem::FlexItem()
{
    this->node = YGNodeNew();
}

YGNodeRef FlexItem::getFlexNode() const
{
    return this->node;
}

FlexItem::~FlexItem()
{
    YGNodeFree(this->node);
}
