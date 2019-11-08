#pragma once

#include "deps/yoga/YGNode.h"

/*
    FlexItem class is used to extend regular QWidget Classes to include
   Yoga/Flex Node in them. In most cases you will use YogaWidget class instead
   of this one since it inherits from FlexItem.
 */

class FlexItem {
  YGNodeRef node;

 public:
  FlexItem();
  YGNodeRef getFlexNode() const;
  ~FlexItem();
};
