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
  return exports;
}

NErrorMessage* QErrorMessageWrap::getInternalInstance() {
  return this->instance;
}

QErrorMessageWrap::~QErrorMessageWrap() {
  extrautils::safeDelete(this->instance);
}

QErrorMessageWrap::QErrorMessageWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QErrorMessageWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    QWidget* parent = parentWidgetWrap->getInternalInstance();
    this->instance = new NErrorMessage(parent);
  } else if (info.Length() == 0) {
    this->instance = new NErrorMessage();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QErrorMessageWrap::showMessage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string napiMessage = info[0].As<Napi::String>().Utf8Value();
  QString message = QString::fromUtf8(napiMessage.c_str());
  this->instance->showMessage(message);
  return env.Null();
}
