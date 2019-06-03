#ifndef FLEX_ITEM_H
#define FLEX_ITEM_H

#include "deps/yoga/YGNode.h"

class FlexItem
{
    YGNodeRef node;
public:
     FlexItem();
     YGNodeRef getFlexNode() const;
     ~FlexItem();
};

#endif // FLEX_ITEM_H
