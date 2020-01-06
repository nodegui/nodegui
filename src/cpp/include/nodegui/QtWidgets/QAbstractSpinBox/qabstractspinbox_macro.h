#pragma once

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractSpinBox exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION
#define QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION      \
  QWIDGET_WRAPPED_METHODS_DECLARATION                     \
  Napi::Value selectAll(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    this->instance->selectAll();                          \
    return env.Null();                                    \
  }                                                       \
  Napi::Value stepDown(const Napi::CallbackInfo& info) {  \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    this->instance->stepDown();                           \
    return env.Null();                                    \
  }                                                       \
  Napi::Value stepUp(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    this->instance->stepUp();                             \
    return env.Null();                                    \
  }

#endif  // QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                \
  InstanceMethod("selectAll", &WidgetWrapName::selectAll),             \
      InstanceMethod("stepDown", &WidgetWrapName::stepDown),           \
      InstanceMethod("stepUp", &WidgetWrapName::stepUp),

#endif  // QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACTSPINBOX_SIGNALS
#define QABSTRACTSPINBOX_SIGNALS                                        \
  QWIDGET_SIGNALS                                                       \
  QObject::connect(this, &QAbstractSpinBox::editingFinished, [=]() {    \
    Napi::Env env = this->emitOnNode.Env();                             \
    Napi::HandleScope scope(env);                                       \
    this->emitOnNode.Call({Napi::String::New(env, "editingFinished")}); \
  });

#endif  // QABSTRACTSPINBOX_SIGNALS
