#include "qkeyevent_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"
#include <QString>
#include "deps/spdlog/spdlog.h"


Napi::FunctionReference QKeyEventWrap::constructor;

Napi::Object QKeyEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QKeyEvent";
  Napi::Function func = DefineClass(env, CLASSNAME, {
        InstanceMethod("text", &QKeyEventWrap::text),
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QKeyEvent* QKeyEventWrap::getInternalInstance() {
  return this->instance;
}

QKeyEventWrap::QKeyEventWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QKeyEventWrap>(info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    if(info.Length() == 1) {
        Napi::External<QKeyEvent> eventObject = info[0].As<Napi::External<QKeyEvent>>();
        this->instance  = eventObject.Data();
    } else {
        extrautils::throwTypeError(env, "Wrong number of arguments");
    }
}

QKeyEventWrap::~QKeyEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QKeyEventWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int keyText = this->instance->key();
  Napi::String keyValue = Napi::String::New(env, std::to_string(keyText));
  return keyValue;
}