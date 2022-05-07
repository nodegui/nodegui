#include "QtWidgets/QProgressDialog/qprogressdialog_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QProgressDialogWrap::constructor;

Napi::Object QProgressDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QProgressDialog";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("cancel", &QProgressDialogWrap::cancel),
                   InstanceMethod("reset", &QProgressDialogWrap::reset),
                   InstanceMethod("setCancelButtonText",
                                  &QProgressDialogWrap::setCancelButtonText),
                   InstanceMethod("setRange", &QProgressDialogWrap::setRange),
                   QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QProgressDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QProgressDialog, QProgressDialogWrap);
  return exports;
}

QProgressDialog* QProgressDialogWrap::getInternalInstance() {
  return this->instance;
}

QProgressDialogWrap::~QProgressDialogWrap() {
  extrautils::safeDelete(this->instance);
}

QProgressDialogWrap::QProgressDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QProgressDialogWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NProgressDialog();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QProgressDialog>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NProgressDialog(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(env,
                         "NodeGui: QProgressDialogWrap: Wrong number of "
                         "arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QProgressDialogWrap::cancel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->cancel();
  return env.Null();
}

Napi::Value QProgressDialogWrap::reset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->reset();
  return env.Null();
}

Napi::Value QProgressDialogWrap::setCancelButtonText(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string napiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  this->instance->setCancelButtonText(text);
  return env.Null();
}

Napi::Value QProgressDialogWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int minimum = info[0].As<Napi::Number>().Int32Value();
  int maximum = info[1].As<Napi::Number>().Int32Value();
  this->instance->setRange(minimum, maximum);
  return env.Null();
}
