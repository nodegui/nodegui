#include "QtGui/QEvent/QKeyEvent/qkeyevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QKeyEventWrap::constructor;

Napi::Object QKeyEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QKeyEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("text", &QKeyEventWrap::text),
       InstanceMethod("key", &QKeyEventWrap::key),
       InstanceMethod("modifiers", &QKeyEventWrap::modifiers),
       InstanceMethod("count", &QKeyEventWrap::count),
       InstanceMethod("isAutoRepeat", &QKeyEventWrap::isAutoRepeat),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QKeyEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QKeyEventWrap)
               QINPUTEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QKeyEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QKeyEvent* QKeyEventWrap::getInternalInstance() { return this->instance; }

QKeyEventWrap::QKeyEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QKeyEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QKeyEvent> eventObject =
        info[0].As<Napi::External<QKeyEvent>>();
    this->instance = static_cast<QKeyEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
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

Napi::Value QKeyEventWrap::key(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int key = static_cast<int>(this->instance->key());
  return Napi::Number::From(env, key);
}

Napi::Value QKeyEventWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = static_cast<int>(this->instance->count());
  return Napi::Number::From(env, count);
}

Napi::Value QKeyEventWrap::isAutoRepeat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool isAutoRepeat = static_cast<bool>(this->instance->isAutoRepeat());
  return Napi::Boolean::From(env, isAutoRepeat);
}