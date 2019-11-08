#pragma once

/*

    This macro adds common YogaWidget's exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef YOGAWIDGET_WRAPPED_METHODS_DECLARATION
#define YOGAWIDGET_WRAPPED_METHODS_DECLARATION                               \
                                                                             \
  Napi::Value getFlexNode(const Napi::CallbackInfo& info) {                  \
    YGNodeRef node = this->instance->getFlexNode();                          \
    Napi::Value yogaNodeRef = Napi::External<YGNode>::New(info.Env(), node); \
    return yogaNodeRef;                                                      \
  }

#endif  // YOGAWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                                 \
  InstanceMethod("getFlexNode", &WidgetWrapName::getFlexNode),

#endif  // YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
