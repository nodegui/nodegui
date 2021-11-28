
#pragma once
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
/*

    This macro adds common QAbstractSlider exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
#define QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION           \
  QWIDGET_WRAPPED_METHODS_DECLARATION                         \
  Napi::Value triggerAction(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                               \
    int action = info[0].As<Napi::Number>().Int32Value();     \
    this->instance->triggerAction(                            \
        static_cast<QAbstractSlider::SliderAction>(action));  \
    return env.Null();                                        \
  }                                                           \
  Napi::Value setRange(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                               \
    int min = info[0].As<Napi::Number>().Int32Value();        \
    int max = info[1].As<Napi::Number>().Int32Value();        \
    this->instance->setRange(min, max);                       \
    return env.Null();                                        \
  }

#endif  // QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)               \
  InstanceMethod("triggerAction", &WidgetWrapName::triggerAction),    \
      InstanceMethod("setRange", &WidgetWrapName::setRange),

#endif  // QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACT_SLIDER_SIGNALS
#define QABSTRACT_SLIDER_SIGNALS                                              \
  QWIDGET_SIGNALS                                                             \
  QObject::connect(this, &QAbstractSlider::actionTriggered, [=](int action) { \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "actionTriggered"),         \
                           Napi::Value::From(env, action)});                  \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderPressed, [=]() {             \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderPressed")});         \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderReleased, [=]() {            \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderReleased")});        \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::valueChanged, [=](int value) {     \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),            \
                           Napi::Value::From(env, value)});                   \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderMoved, [=](int value) {      \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderMoved"),             \
                           Napi::Value::From(env, value)});                   \
  });                                                                         \
  QObject::connect(                                                           \
      this, &QAbstractSlider::rangeChanged, [=](int min, int max) {           \
        Napi::Env env = this->emitOnNode.Env();                               \
        Napi::HandleScope scope(env);                                         \
        this->emitOnNode.Call({Napi::String::New(env, "rangeChanged"),        \
                               Napi::Value::From(env, min),                   \
                               Napi::Value::From(env, max)});                 \
      });

#endif
