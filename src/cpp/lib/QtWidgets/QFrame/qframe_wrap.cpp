#include "QtWidgets/QFrame/qframe_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QFrameWrap::constructor;

Napi::Object QFrameWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFrame";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(QFrameWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QFrame, QFrameWrap);
  return exports;
}

QFrame* QFrameWrap::getInternalInstance() { return this->instance; }

QFrameWrap::~QFrameWrap() { extrautils::safeDelete(this->instance); }

QFrameWrap::QFrameWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFrameWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NFrame();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QFrame>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NFrame(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QFrameWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}
