#pragma once

#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"

/*

    This macro adds common QScrollArea exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QSCROLLAREA_WRAPPED_METHODS_DECLARATION
#define QSCROLLAREA_WRAPPED_METHODS_DECLARATION                          \
                                                                         \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION                        \
                                                                         \
  Napi::Value ensureVisible(const Napi::CallbackInfo& info) {            \
    Napi::Env env = info.Env();                                          \
    int x = info[0].As<Napi::Number>().Int32Value();                     \
    int y = info[1].As<Napi::Number>().Int32Value();                     \
    int xmargin = info[2].As<Napi::Number>().Int32Value();               \
    int ymargin = info[3].As<Napi::Number>().Int32Value();               \
    this->instance->ensureVisible(x, y, xmargin, ymargin);               \
    return env.Null();                                                   \
  }                                                                      \
  Napi::Value ensureWidgetVisible(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                          \
    Napi::Object childWidgetObject = info[0].As<Napi::Object>();         \
    NodeWidgetWrap* childWidgetWrap =                                    \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(childWidgetObject);     \
    int xmargin = info[1].As<Napi::Number>().Int32Value();               \
    int ymargin = info[2].As<Napi::Number>().Int32Value();               \
    this->instance->ensureWidgetVisible(                                 \
        childWidgetWrap->getInternalInstance(), xmargin, ymargin);       \
    return env.Null();                                                   \
  }                                                                      \
  Napi::Value setWidget(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                          \
    Napi::Object contentWidgetObject = info[0].As<Napi::Object>();       \
    NodeWidgetWrap* contentWidgetWrap =                                  \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(contentWidgetObject);   \
    this->instance->setWidget(contentWidgetWrap->getInternalInstance()); \
    return env.Null();                                                   \
  }                                                                      \
  Napi::Value widget(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                          \
    QObject* widget = this->instance->widget();                          \
    if (widget) {                                                        \
      return WrapperCache::instance.getWrapper(env, widget);             \
    } else {                                                             \
      return env.Null();                                                 \
    }                                                                    \
  }                                                                      \
  Napi::Value takeWidget(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                          \
    QObject* widget = this->instance->takeWidget();                      \
    if (widget) {                                                        \
      return WrapperCache::instance.getWrapper(env, widget);             \
    } else {                                                             \
      return env.Null();                                                 \
    }                                                                    \
  }                                                                      \
  Napi::Value setViewportMargins(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                          \
    NScrollArea* nScrollArea =                                           \
        dynamic_cast<NScrollArea*>(this->instance.data());               \
    if (nScrollArea) {                                                   \
      int left = info[0].As<Napi::Number>().Int32Value();                \
      int top = info[1].As<Napi::Number>().Int32Value();                 \
      int right = info[2].As<Napi::Number>().Int32Value();               \
      int bottom = info[3].As<Napi::Number>().Int32Value();              \
      nScrollArea->setViewportMargins(left, top, right, bottom);         \
    }                                                                    \
    return env.Null();                                                   \
  }                                                                      \
  Napi::Value viewportMargins(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                          \
    NScrollArea* nScrollArea =                                           \
        dynamic_cast<NScrollArea*>(this->instance.data());               \
    if (nScrollArea) {                                                   \
      QMargins margins = nScrollArea->viewportMargins();                 \
      Napi::Array resultNapi = Napi::Array::New(env, 4);                 \
      resultNapi[uint32_t(0)] = Napi::Number::From(env, margins.left()); \
      resultNapi[1] = Napi::Value::From(env, margins.top());             \
      resultNapi[2] = Napi::Value::From(env, margins.right());           \
      resultNapi[3] = Napi::Value::From(env, margins.bottom());          \
      return resultNapi;                                                 \
    } else {                                                             \
      return env.Null();                                                 \
    }                                                                    \
  }

#endif  // QSCROLLAREA_WRAPPED_METHODS_DECLARATION

#ifndef QSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE
#define QSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)   \
                                                                    \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                                    \
  InstanceMethod("ensureVisible", &WidgetWrapName::ensureVisible),  \
      InstanceMethod("ensureWidgetVisible",                         \
                     &WidgetWrapName::ensureWidgetVisible),         \
      InstanceMethod("setWidget", &WidgetWrapName::setWidget),      \
      InstanceMethod("widget", &WidgetWrapName::widget),            \
      InstanceMethod("takeWidget", &WidgetWrapName::takeWidget),    \
      InstanceMethod("setViewportMargins",                          \
                     &WidgetWrapName::setViewportMargins),          \
      InstanceMethod("viewportMargins", &WidgetWrapName::viewportMargins),

#endif  // QSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QSCROLLAREA_SIGNALS
#define QSCROLLAREA_SIGNALS QABSTRACTSCROLLAREA_SIGNALS

#endif  // QSCROLLAREA_SIGNALS
