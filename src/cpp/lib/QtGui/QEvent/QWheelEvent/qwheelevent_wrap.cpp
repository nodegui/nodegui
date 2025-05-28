#include "QtGui/QEvent/QWheelEvent/qwheelevent_wrap.h"

#include <QPoint>
#include <QPointF>
#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QWheelEventWrap::constructor;

Napi::Object QWheelEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWheelEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("angleDelta", &QWheelEventWrap::angleDelta),
       InstanceMethod("inverted", &QWheelEventWrap::inverted),
       InstanceMethod("phase", &QWheelEventWrap::phase),
       InstanceMethod("pixelDelta", &QWheelEventWrap::pixelDelta),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QWheelEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QWheelEventWrap)
               QINPUTEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QWheelEventWrap)
                   QSINGLEPOINTEVENT_WRAPPED_METHODS_EXPORT_DEFINE(
                       QWheelEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QWheelEvent* QWheelEventWrap::getInternalInstance() { return this->instance; }

QWheelEventWrap::QWheelEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QWheelEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QWheelEvent> eventObject =
        info[0].As<Napi::External<QWheelEvent>>();
    this->instance = static_cast<QWheelEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QWheelEventWrap::~QWheelEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QWheelEventWrap::angleDelta(const Napi::CallbackInfo& info) {
  // Uses QPoint, not QPointF
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->angleDelta());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QWheelEventWrap::inverted(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool b = static_cast<bool>(this->instance->inverted());
  return Napi::Boolean::From(env, b);
}

Napi::Value QWheelEventWrap::phase(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int p = static_cast<int>(this->instance->phase());
  return Napi::Number::From(env, p);
}

Napi::Value QWheelEventWrap::pixelDelta(const Napi::CallbackInfo& info) {
  // Uses QPoint
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->pixelDelta());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}
