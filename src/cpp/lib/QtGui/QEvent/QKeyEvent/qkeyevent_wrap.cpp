#include "QtGui/QEvent/QKeyEvent/qkeyevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_macro.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QKeyEventWrap::constructor;

Napi::Object QKeyEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QKeyEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("text", &QKeyEventWrap::text),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QKeyEvent* QKeyEventWrap::getInternalInstance() { return this->instance; }

QKeyEventWrap::QKeyEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QKeyEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QKeyEvent> eventObject =
        info[0].As<Napi::External<QKeyEvent>>();
    this->instance = static_cast<QKeyEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QKeyEventWrap::~QKeyEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QKeyEventWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString text = this->instance->text();
  Napi::String keyValue = Napi::String::New(env, text.toStdString());
  return keyValue;
}