
#include "QtWidgets/QProgressBar/qprogressbar_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QProgressBarWrap::constructor;

Napi::Object QProgressBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QProgressBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setValue", &QProgressBarWrap::setValue),
       InstanceMethod("setMaximum", &QProgressBarWrap::setMaximum),
       InstanceMethod("setMinimum", &QProgressBarWrap::setMinimum),
       InstanceMethod("setOrientation", &QProgressBarWrap::setOrientation),
       InstanceMethod("value", &QProgressBarWrap::value),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QProgressBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NProgressBar* QProgressBarWrap::getInternalInstance() { return this->instance; }

QProgressBarWrap::QProgressBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QProgressBarWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NProgressBar(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NProgressBar();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its own size.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QProgressBarWrap::~QProgressBarWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QProgressBarWrap::setValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number value = info[0].As<Napi::Number>();
  this->instance->setValue(value.Int32Value());
  return env.Null();
}

Napi::Value QProgressBarWrap::setMaximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number value = info[0].As<Napi::Number>();
  this->instance->setMaximum(value.Int32Value());
  return env.Null();
}

Napi::Value QProgressBarWrap::setMinimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number value = info[0].As<Napi::Number>();
  this->instance->setMinimum(value.Int32Value());
  return env.Null();
}

Napi::Value QProgressBarWrap::setOrientation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number value = info[0].As<Napi::Number>();
  this->instance->setOrientation(
      static_cast<Qt::Orientation>(value.Int32Value()));
  return env.Null();
}

Napi::Value QProgressBarWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->value();
  return Napi::Number::New(env, value);
}
