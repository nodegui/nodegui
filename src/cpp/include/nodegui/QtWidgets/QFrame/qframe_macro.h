#pragma once

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QFrame exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QFRAME_WRAPPED_METHODS_DECLARATION
#define QFRAME_WRAPPED_METHODS_DECLARATION                       \
                                                                 \
  QWIDGET_WRAPPED_METHODS_DECLARATION                            \
                                                                 \
  Napi::Value frameStyle(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                  \
    return Napi::Number::New(env, this->instance->frameStyle()); \
  }                                                              \
  Napi::Value setFrameStyle(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                  \
    int style = info[0].As<Napi::Number>().Int32Value();         \
    this->instance->setFrameStyle(style);                        \
    return env.Null();                                           \
  }

#endif  // QFRAME_WRAPPED_METHODS_DECLARATION

#ifndef QFRAME_WRAPPED_METHODS_EXPORT_DEFINE
#define QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                             \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)      \
                                                             \
  InstanceMethod("frameStyle", &WidgetWrapName::frameStyle), \
      InstanceMethod("setFrameStyle", &WidgetWrapName::setFrameStyle),

#endif  // QFRAME_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QFRAME_SIGNALS
#define QFRAME_SIGNALS QWIDGET_SIGNALS

#endif  // QFRAME_SIGNALS
