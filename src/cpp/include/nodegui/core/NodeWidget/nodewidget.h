#pragma once
#include "core/Events/eventwidget_macro.h"
#include "core/YogaWidget/yogawidget.h"
#include "deps/yoga/YGMacros.h"

// class to unify all the custom features + add extra features if needed
class WIN_EXPORT NodeWidget : public YogaWidget, public EventWidget {};

#ifndef NODEWIDGET_IMPLEMENTATIONS
#define NODEWIDGET_IMPLEMENTATIONS(BaseWidgetName) \
                                                   \
 public:                                           \
  SET_YOGA_WIDGET_Q_PROPERTIES                     \
  EVENTWIDGET_IMPLEMENTATIONS(BaseWidgetName)

#endif  // NODEWIDGET_IMPLEMENTATIONS
