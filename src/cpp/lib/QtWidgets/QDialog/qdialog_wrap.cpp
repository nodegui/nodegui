#include "QtWidgets/QDialog/qdialog_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDialogWrap::constructor;

Napi::Object QDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDialog *QDialogWrap::getInternalInstance() { return this->instance; }

QDialogWrap::~QDialogWrap() { extrautils::safeDelete(this->instance); }

QDialogWrap::QDialogWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QDialogWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          new NDialog(info[0].As<Napi::External<NDialog>>().Data());
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QDialogWrap *parentWidgetWrap =
          Napi::ObjectWrap<QDialogWrap>::Unwrap(parentObject);
      this->instance = new NDialog(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}
