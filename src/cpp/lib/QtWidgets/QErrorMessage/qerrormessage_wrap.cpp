#include "QtWidgets/QErrorMessage/qerrormessage_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QErrorMessageWrap::constructor;

Napi::Object QErrorMessageWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QErrorMessage";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("showMessage", &QErrorMessageWrap::showMessage),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QErrorMessageWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QErrorMessage, QErrorMessageWrap);
  return exports;
}

QErrorMessage* QErrorMessageWrap::getInternalInstance() {
  return this->instance;
}

QErrorMessageWrap::~QErrorMessageWrap() {
  extrautils::safeDelete(this->instance);
}

QErrorMessageWrap::QErrorMessageWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QErrorMessageWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NErrorMessage();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QErrorMessage>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NErrorMessage(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QErrorMessageWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QErrorMessageWrap::showMessage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string napiMessage = info[0].As<Napi::String>().Utf8Value();
  QString message = QString::fromUtf8(napiMessage.c_str());
  this->instance->showMessage(message);
  return env.Null();
}
