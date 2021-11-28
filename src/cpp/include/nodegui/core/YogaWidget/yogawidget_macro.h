#pragma once

/*

    This macro adds common YogaWidget's exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef YOGAWIDGET_WRAPPED_METHODS_DECLARATION
#define YOGAWIDGET_WRAPPED_METHODS_DECLARATION                                 \
                                                                               \
  Napi::Value getFlexNode(const Napi::CallbackInfo& info) {                    \
    FlexItem* item = dynamic_cast<FlexItem*>(this->instance.data());           \
    if (item) {                                                                \
      YGNodeRef node = item->getFlexNode();                                    \
      Napi::Value yogaNodeRef = Napi::External<YGNode>::New(info.Env(), node); \
      return yogaNodeRef;                                                      \
    } else {                                                                   \
      Napi::Env env = info.Env();                                              \
      return env.Null();                                                       \
    }                                                                          \
  }                                                                            \
  Napi::Value setFlexNodeSizeControlled(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                                \
    FlexItem* item = dynamic_cast<FlexItem*>(this->instance.data());           \
    if (item) {                                                                \
      Napi::Boolean isSizeControlled = info[0].As<Napi::Boolean>();            \
      YGNodeRef node = item->getFlexNode();                                    \
      FlexNodeContext* ctx = flexutils::getFlexNodeContext(node);              \
      ctx->isSizeControlled = isSizeControlled.Value();                        \
    }                                                                          \
    return env.Null();                                                         \
  }

#endif  // YOGAWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                                 \
  InstanceMethod("getFlexNode", &WidgetWrapName::getFlexNode),   \
      InstanceMethod("setFlexNodeSizeControlled",                \
                     &WidgetWrapName::setFlexNodeSizeControlled),

#endif  // YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
