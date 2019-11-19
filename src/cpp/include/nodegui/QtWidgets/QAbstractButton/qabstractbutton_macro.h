
#pragma once
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractScrollArea exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
#define QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION                        \
  QWIDGET_WRAPPED_METHODS_DECLARATION                                      \
  Napi::Value setText(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
                                                                           \
    Napi::String napiText = info[0].As<Napi::String>();                    \
    std::string text = napiText.Utf8Value();                               \
    this->instance->setText(text.c_str());                                 \
    return env.Null();                                                     \
  }                                                                        \
                                                                           \
  Napi::Value setIcon(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
                                                                           \
    Napi::Object iconObject = info[0].As<Napi::Object>();                  \
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject); \
    this->instance->setIcon(*iconWrap->getInternalInstance());             \
    return env.Null();                                                     \
  }

#endif  // QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)               \
  InstanceMethod("setText", &WidgetWrapName::setText),                \
      InstanceMethod("setIcon", &WidgetWrapName::setIcon),

#endif  // QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE
