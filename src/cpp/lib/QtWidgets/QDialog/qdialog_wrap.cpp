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
  QOBJECT_REGISTER_WRAPPER(QDialog, QDialogWrap);
  return exports;
}

QDialog *QDialogWrap::getInternalInstance() { return this->instance; }

QDialogWrap::~QDialogWrap() { extrautils::safeDelete(this->instance); }

QDialogWrap::QDialogWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QDialogWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NDialog();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QDialog>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap *parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NDialog(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QDialogWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}
