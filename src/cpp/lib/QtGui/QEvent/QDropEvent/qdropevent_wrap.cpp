#include "QtGui/QEvent/QDropEvent/qdropevent_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDropEventWrap::constructor;

Napi::Object QDropEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDropEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("acceptProposedAction",
                      &QDropEventWrap::acceptProposedAction),
       InstanceMethod("dropAction", &QDropEventWrap::dropAction),
       InstanceMethod("keyboardModifiers", &QDropEventWrap::keyboardModifiers),
       //    InstanceMethod("mimeData", &QDropEventWrap::mimeData),
       InstanceMethod("mouseButtons", &QDropEventWrap::mouseButtons),
       InstanceMethod("pos", &QDropEventWrap::pos),
       InstanceMethod("possibleActions", &QDropEventWrap::possibleActions),
       InstanceMethod("proposedAction", &QDropEventWrap::proposedAction),
       //    InstanceMethod("source", &QDropEventWrap::source),

       // Methods inherited from QEvent
       QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDropEventWrap)

           COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDropEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDropEvent* QDropEventWrap::getInternalInstance() { return this->instance; }

QDropEventWrap::QDropEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDropEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QDropEvent> eventObject =
        info[0].As<Napi::External<QDropEvent>>();
    this->instance = static_cast<QDropEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDropEventWrap::~QDropEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QDropEventWrap::acceptProposedAction(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->acceptProposedAction();
  return env.Null();
}

Napi::Value QDropEventWrap::dropAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int action = static_cast<int>(this->instance->dropAction());
  return Napi::Number::From(env, action);
}

Napi::Value QDropEventWrap::keyboardModifiers(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int modifierFlags = static_cast<int>(this->instance->keyboardModifiers());
  return Napi::Number::From(env, modifierFlags);
}

Napi::Value QDropEventWrap::mouseButtons(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int m = static_cast<int>(this->instance->mouseButtons());
  return Napi::Number::From(env, m);
}

// TODO: Implement MimeData to do this...
// Napi::Value QDropEventWrap::mimeData(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   int modifierFlags = static_cast<int>(this->instance->keyboardModifiers());
//   return Napi::Number::From(env, modifierFlags);
// }

Napi::Value QDropEventWrap::pos(const Napi::CallbackInfo& info) {
  // Uses QPoint
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->pos());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QDropEventWrap::possibleActions(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->possibleActions());
  return Napi::Number::From(env, v);
}

Napi::Value QDropEventWrap::proposedAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->possibleActions());
  return Napi::Number::From(env, v);
}

Napi::Value QDropEventWrap::setDropAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int dropFlags;
  if (info.Length() < 1) {
    dropFlags = 1;  // Default to copy operation
    return env.Null();
  } else {
    Napi::Number num = info[0].ToNumber();
    dropFlags = static_cast<int>(num.Int32Value());
  }
  this->instance->setDropAction(static_cast<Qt::DropAction>(dropFlags));
  return env.Null();
}

// Needs QWidget references... should I ?
// Napi::Value QDropEventWrap::source(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   return env.Null();
// }

// Methods from QEvent defined in Macro already
