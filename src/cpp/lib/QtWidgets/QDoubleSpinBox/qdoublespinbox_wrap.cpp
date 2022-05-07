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
  QOBJECT_REGISTER_WRAPPER(QDoubleSpinBox, QDoubleSpinBoxWrap);
  return exports;
}

QDoubleSpinBox* QDoubleSpinBoxWrap::getInternalInstance() {
  return this->instance;
}

QDoubleSpinBoxWrap::QDoubleSpinBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDoubleSpinBoxWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NDoubleSpinBox();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QDoubleSpinBox>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NDoubleSpinBox(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QDoubleSpinBoxWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

QDoubleSpinBoxWrap::~QDoubleSpinBoxWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QDoubleSpinBoxWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  double minimum = info[0].As<Napi::Number>().DoubleValue();
  double maximum = info[1].As<Napi::Number>().DoubleValue();
  this->instance->setRange(minimum, maximum);
  return env.Null();
}

Napi::Value QDoubleSpinBoxWrap::textFromValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  double value = info[0].As<Napi::Number>().DoubleValue();
  QString text = this->instance->textFromValue(value);
  return Napi::String::New(env, text.toStdString());
}

Napi::Value QDoubleSpinBoxWrap::valueFromText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string napiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  double value = this->instance->valueFromText(text);
  return Napi::Number::New(env, value);
}
