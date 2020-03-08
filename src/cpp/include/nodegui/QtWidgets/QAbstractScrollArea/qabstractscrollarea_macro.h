#pragma once

#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractScrollArea exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
#define QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION            \
                                                                   \
  QFRAME_WRAPPED_METHODS_DECLARATION                               \
                                                                   \
  Napi::Value setViewport(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                                    \
    Napi::HandleScope scope(env);                                  \
    Napi::Object viewPortObject = info[0].As<Napi::Object>();      \
    NodeWidgetWrap* viewPortWidgetWrap =                           \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(viewPortObject);  \
    QWidget* viewPort = viewPortWidgetWrap->getInternalInstance(); \
    this->instance->setViewport(viewPort);                         \
    return env.Null();                                             \
  }                                                                \
                                                                   \
  Napi::Value viewport(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                    \
    Napi::HandleScope scope(env);                                  \
    QWidget* viewPort = this->instance->viewport();                \
    NWidget* nviewPort = reinterpret_cast<NWidget*>(viewPort);     \
    auto instance = QWidgetWrap::constructor.New(                  \
        {Napi::External<NWidget>::New(env, nviewPort)});           \
    return instance;                                               \
  }

#endif  // QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                                          \
  QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                    \
                                                                          \
  InstanceMethod("setViewport", &WidgetWrapName::setViewport),            \
      InstanceMethod("viewport", &WidgetWrapName::viewport),

#endif  // QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACTSCROLLAREA_SIGNALS
#define QABSTRACTSCROLLAREA_SIGNALS QFRAME_SIGNALS

#endif
