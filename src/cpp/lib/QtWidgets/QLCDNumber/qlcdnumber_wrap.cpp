#include "QtWidgets/QLCDNumber/qlcdnumber_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QLCDNumberWrap::constructor;

Napi::Object QLCDNumberWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLCDNumber";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("checkOverflow", &QLCDNumberWrap::checkOverflow),
       InstanceMethod("display", &QLCDNumberWrap::display),
       InstanceMethod("setBinMode", &QLCDNumberWrap::setBinMode),
       InstanceMethod("setDecMode", &QLCDNumberWrap::setDecMode),
       InstanceMethod("setHexMode", &QLCDNumberWrap::setHexMode),
       InstanceMethod("setOctMode", &QLCDNumberWrap::setOctMode),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLCDNumberWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLCDNumber* QLCDNumberWrap::getInternalInstance() { return this->instance; }

QLCDNumberWrap::~QLCDNumberWrap() { extrautils::safeDelete(this->instance); }

QLCDNumberWrap::QLCDNumberWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLCDNumberWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NLCDNumber(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NLCDNumber();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QLCDNumberWrap::checkOverflow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Value value = info[0];
  bool result;
  if (extrautils::isNapiValueInt(env, value)) {
    int num = value.As<Napi::Number>().Int32Value();
    result = this->instance->checkOverflow(num);
  } else {
    double num = value.As<Napi::Number>().DoubleValue();
    result = this->instance->checkOverflow(num);
  }
  return Napi::Boolean::New(env, result);
}

Napi::Value QLCDNumberWrap::display(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Value value = info[0];
  if (value.IsString()) {
    std::string napis = value.As<Napi::String>().Utf8Value();
    QString s = QString::fromUtf8(napis.c_str());
    this->instance->display(s);
  } else if (extrautils::isNapiValueInt(env, value)) {
    int num = value.As<Napi::Number>().Int32Value();
    this->instance->display(num);
  } else {
    double num = value.As<Napi::Number>().DoubleValue();
    this->instance->display(num);
  }
  return env.Null();
}

Napi::Value QLCDNumberWrap::setBinMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->setBinMode();
  return env.Null();
}

Napi::Value QLCDNumberWrap::setDecMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->setDecMode();
  return env.Null();
}

Napi::Value QLCDNumberWrap::setHexMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->setHexMode();
  return env.Null();
}

Napi::Value QLCDNumberWrap::setOctMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->setOctMode();
  return env.Null();
}
