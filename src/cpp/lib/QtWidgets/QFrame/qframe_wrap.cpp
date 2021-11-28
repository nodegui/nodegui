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
  return exports;
}

NFrame* QFrameWrap::getInternalInstance() { return this->instance; }

QFrameWrap::~QFrameWrap() { extrautils::safeDelete(this->instance); }

QFrameWrap::QFrameWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFrameWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NFrame(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NFrame();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}
