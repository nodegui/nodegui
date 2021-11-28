
#pragma once
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractButton exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
#define QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION          \
  QWIDGET_WRAPPED_METHODS_DECLARATION                        \
  Napi::Value animateClick(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                              \
    int msec = info[0].As<Napi::Number>().Int32Value();      \
    this->instance->animateClick(msec);                      \
    return env.Null();                                       \
  }                                                          \
  Napi::Value click(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                              \
    this->instance->click();                                 \
    return env.Null();                                       \
  }                                                          \
  Napi::Value toggle(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                              \
    this->instance->toggle();                                \
    return env.Null();                                       \
  }

#endif  // QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)               \
  InstanceMethod("animateClick", &WidgetWrapName::animateClick),      \
      InstanceMethod("click", &WidgetWrapName::click),                \
      InstanceMethod("toggle", &WidgetWrapName::toggle),

#endif  // QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACT_BUTTON_SIGNALS
#define QABSTRACT_BUTTON_SIGNALS                                               \
  QWIDGET_SIGNALS                                                              \
  QObject::connect(this, &QAbstractButton::clicked, [=](bool checked) {        \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call(                                                     \
        {Napi::String::New(env, "clicked"), Napi::Value::From(env, checked)}); \
  });                                                                          \
  QObject::connect(this, &QAbstractButton::pressed, [=]() {                    \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call({Napi::String::New(env, "pressed")});                \
  });                                                                          \
  QObject::connect(this, &QAbstractButton::released, [=]() {                   \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call({Napi::String::New(env, "released")});               \
  });                                                                          \
  QObject::connect(this, &QAbstractButton::toggled, [=](bool checked) {        \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call(                                                     \
        {Napi::String::New(env, "toggled"), Napi::Value::From(env, checked)}); \
  });

#endif
