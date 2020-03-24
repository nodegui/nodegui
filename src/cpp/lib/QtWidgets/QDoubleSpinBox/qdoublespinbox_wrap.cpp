#include "QtWidgets/QDoubleSpinBox/qdoublespinbox_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QDoubleSpinBoxWrap::constructor;

Napi::Object QDoubleSpinBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDoubleSpinBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setRange", &QDoubleSpinBoxWrap::setRange),
       InstanceMethod("textFromValue", &QDoubleSpinBoxWrap::textFromValue),
       InstanceMethod("valueFromText", &QDoubleSpinBoxWrap::valueFromText),
       QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE(QDoubleSpinBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDoubleSpinBox* QDoubleSpinBoxWrap::getInternalInstance() {
  return this->instance;
}

QDoubleSpinBoxWrap::QDoubleSpinBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDoubleSpinBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance =
        new NDoubleSpinBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NDoubleSpinBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QDoubleSpinBoxWrap::~QDoubleSpinBoxWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QDoubleSpinBoxWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  double minimum = info[0].As<Napi::Number>().DoubleValue();
  double maximum = info[1].As<Napi::Number>().DoubleValue();
  this->instance->setRange(minimum, maximum);
  return env.Null();
}

Napi::Value QDoubleSpinBoxWrap::textFromValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  double value = info[0].As<Napi::Number>().DoubleValue();
  QString text = this->instance->textFromValue(value);
  return Napi::String::New(env, text.toStdString());
}

Napi::Value QDoubleSpinBoxWrap::valueFromText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string napiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  double value = this->instance->valueFromText(text);
  return Napi::Number::New(env, value);
}
