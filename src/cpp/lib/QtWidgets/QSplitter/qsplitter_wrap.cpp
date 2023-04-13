#include "QtWidgets/QSplitter/qsplitter_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QSplitterWrap::constructor;

Napi::Object QSplitterWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSplitter";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QSPLITTER_WRAPPED_METHODS_EXPORT_DEFINE(QSplitterWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QSplitter, QSplitterWrap);
  return exports;
}

QSplitter* QSplitterWrap::getInternalInstance() { return this->instance; }

QSplitterWrap::~QSplitterWrap() { extrautils::safeDelete(this->instance); }

QSplitterWrap::QSplitterWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSplitterWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NSplitter();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QSplitter>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NSplitter(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QSplitterWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}
