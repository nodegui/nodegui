#include "QtWidgets/QSpinBox/qspinbox_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSpinBoxWrap::constructor;

Napi::Object QSpinBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSpinBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setPrefix", &QSpinBoxWrap::setPrefix),
       InstanceMethod("setSingleStep", &QSpinBoxWrap::setSingleStep),
       InstanceMethod("setSuffix", &QSpinBoxWrap::setSuffix),
       InstanceMethod("setRange", &QSpinBoxWrap::setRange),
       InstanceMethod("setValue", &QSpinBoxWrap::setValue),
       InstanceMethod("cleanText", &QSpinBoxWrap::cleanText),
       InstanceMethod("maximum", &QSpinBoxWrap::maximum),
       InstanceMethod("minimum", &QSpinBoxWrap::minimum),
       InstanceMethod("value", &QSpinBoxWrap::value),

       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QSpinBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NSpinBox* QSpinBoxWrap::getInternalInstance() { return this->instance; }

QSpinBoxWrap::QSpinBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSpinBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NSpinBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NSpinBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QSpinBoxWrap::~QSpinBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QSpinBoxWrap::setPrefix(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiPrefix = info[0].As<Napi::String>();
  std::string prefix = napiPrefix.Utf8Value();
  this->instance->setPrefix(prefix.c_str());
  return env.Null();
}

Napi::Value QSpinBoxWrap::setSingleStep(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number val = info[0].As<Napi::Number>();
  this->instance->setSingleStep(val.Int32Value());
  return env.Null();
}

Napi::Value QSpinBoxWrap::setSuffix(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiSuffix = info[0].As<Napi::String>();
  std::string suffix = napiSuffix.Utf8Value();
  this->instance->setSuffix(suffix.c_str());
  return env.Null();
}

Napi::Value QSpinBoxWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number minimum = info[0].As<Napi::Number>();
  Napi::Number maximum = info[1].As<Napi::Number>();
  this->instance->setRange(minimum.Int32Value(), maximum.Int32Value());
  return env.Null();
}

Napi::Value QSpinBoxWrap::setValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number val = info[0].As<Napi::Number>();
  this->instance->setValue(val.Int32Value());
  return env.Null();
}

Napi::Value QSpinBoxWrap::cleanText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString cleanText = this->instance->cleanText();
  return Napi::String::New(env, cleanText.toStdString().c_str());
}

Napi::Value QSpinBoxWrap::maximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int maximum = this->instance->maximum();
  return Napi::Number::New(env, maximum);
}

Napi::Value QSpinBoxWrap::minimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int minimum = this->instance->minimum();
  return Napi::Number::New(env, minimum);
}

Napi::Value QSpinBoxWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->value();
  return Napi::Number::New(env, value);
}