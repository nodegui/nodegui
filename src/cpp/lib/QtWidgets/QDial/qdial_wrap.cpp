
#include "QtWidgets/QDial/qdial_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QDialWrap::constructor;

Napi::Object QDialWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDial";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setNotchesVisible", &QDialWrap::setNotchesVisible),
       InstanceMethod("setWrapping", &QDialWrap::setWrapping),
       InstanceMethod("setNotchTarget", &QDialWrap::setNotchTarget),
       InstanceMethod("notchTarget", &QDialWrap::notchTarget),
       InstanceMethod("notchesVisible", &QDialWrap::notchesVisible),
       InstanceMethod("wrapping", &QDialWrap::wrapping),
       QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(QDialWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDial* QDialWrap::getInternalInstance() { return this->instance; }

QDialWrap::QDialWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDialWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NDial(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NDial();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its own size.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QDialWrap::~QDialWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QDialWrap::setNotchesVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean visible = info[0].As<Napi::Boolean>();
  this->instance->setNotchesVisible(visible.Value());
  return env.Null();
}

Napi::Value QDialWrap::setWrapping(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean on = info[0].As<Napi::Boolean>();
  this->instance->setWrapping(on.Value());
  return env.Null();
}

Napi::Value QDialWrap::setNotchTarget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number target = info[0].As<Napi::Number>();
  this->instance->setNotchTarget(target.FloatValue());
  return env.Null();
}

Napi::Value QDialWrap::notchTarget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  float target = this->instance->notchTarget();
  return Napi::Value::From(env, target);
}

Napi::Value QDialWrap::notchesVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool notchesVisible = this->instance->notchesVisible();
  return Napi::Value::From(env, notchesVisible);
}

Napi::Value QDialWrap::wrapping(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool wrapping = this->instance->wrapping();
  return Napi::Value::From(env, wrapping);
}
