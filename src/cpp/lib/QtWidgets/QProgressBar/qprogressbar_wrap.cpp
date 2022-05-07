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
      {InstanceMethod("resetFormat", &QProgressBarWrap::resetFormat),
       InstanceMethod("reset", &QProgressBarWrap::reset),
       InstanceMethod("setRange", &QProgressBarWrap::setRange),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QProgressBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QProgressBar, QProgressBarWrap);
  return exports;
}

QProgressBar* QProgressBarWrap::getInternalInstance() { return this->instance; }

QProgressBarWrap::~QProgressBarWrap() {
  extrautils::safeDelete(this->instance);
}

QProgressBarWrap::QProgressBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QProgressBarWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NProgressBar();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QProgressBar>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NProgressBar(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QProgressBarWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QProgressBarWrap::resetFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->resetFormat();
  return env.Null();
}

Napi::Value QProgressBarWrap::reset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->reset();
  return env.Null();
}

Napi::Value QProgressBarWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int minimum = info[0].As<Napi::Number>().Int32Value();
  int maximum = info[1].As<Napi::Number>().Int32Value();
  this->instance->setRange(minimum, maximum);
  return env.Null();
}
