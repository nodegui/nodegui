#include "QtGui/QEvent/QMouseEvent/qmouseevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QMouseEventWrap::constructor;

Napi::Object QMouseEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMouseEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("button", &QMouseEventWrap::button),
                   InstanceMethod("x", &QMouseEventWrap::x),
                   InstanceMethod("y", &QMouseEventWrap::y),
                  //  InstanceMethod("key", &QMouseEventWrap::key),
                  //  InstanceMethod("modifiers", &QMouseEventWrap::modifiers),
                  //  InstanceMethod("count", &QMouseEventWrap::count),
                  //  InstanceMethod("isAutoRepeat", &QMouseEventWrap::isAutoRepeat),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QMouseEvent* QMouseEventWrap::getInternalInstance() { return this->instance; }

QMouseEventWrap::QMouseEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMouseEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QMouseEvent> eventObject =
        info[0].As<Napi::External<QMouseEvent>>();
    this->instance = static_cast<QMouseEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = this->getInternalInstance();
}

QMouseEventWrap::~QMouseEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

// Napi::Value QMouseEventWrap::button(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   QString button = this->instance->button();
//   Napi::String keyValue = Napi::String::New(env, text.toStdString());
//   return keyValue;
// }

Napi::Value QMouseEventWrap::button(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int button = static_cast<int>(this->instance->button());
  return Napi::Number::From(env, button);
}

Napi::Value QMouseEventWrap::x(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = static_cast<int>(this->instance->x());
  return Napi::Number::From(env, x);
}

Napi::Value QMouseEventWrap::y(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int y = static_cast<int>(this->instance->y());
  return Napi::Number::From(env, y);
}

// Napi::Value QKeyEventWrap::modifiers(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   int key = static_cast<int>(this->instance->modifiers());
//   return Napi::Number::From(env, key);
// }

// Napi::Value QKeyEventWrap::count(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   int count = static_cast<int>(this->instance->count());
//   return Napi::Number::From(env, count);
// }

// Napi::Value QKeyEventWrap::isAutoRepeat(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   bool isAutoRepeat = static_cast<bool>(this->instance->isAutoRepeat());
//   return Napi::Boolean::From(env, isAutoRepeat);
// }