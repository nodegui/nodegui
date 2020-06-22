#include "QtGui/QEvent/QNativeGestureEvent/qnativegestureevent_wrap.h"

#include <QPoint>
#include <QPointF>
#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QNativeGestureEventWrap::constructor;

Napi::Object QNativeGestureEventWrap::init(Napi::Env env,
                                           Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QNativeGestureEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("gestureType", &QNativeGestureEventWrap::gestureType),
       InstanceMethod("globalPos", &QNativeGestureEventWrap::globalPos),
       InstanceMethod("localPos", &QNativeGestureEventWrap::localPos),
       InstanceMethod("pos", &QNativeGestureEventWrap::pos),
       InstanceMethod("screenPos", &QNativeGestureEventWrap::screenPos),
       InstanceMethod("windowPos", &QNativeGestureEventWrap::windowPos),
       InstanceMethod("value", &QNativeGestureEventWrap::value),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QNativeGestureEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QNativeGestureEvent* QNativeGestureEventWrap::getInternalInstance() {
  return this->instance;
}

QNativeGestureEventWrap::QNativeGestureEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QNativeGestureEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QNativeGestureEvent> eventObject =
        info[0].As<Napi::External<QNativeGestureEvent>>();
    this->instance = static_cast<QNativeGestureEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QNativeGestureEventWrap::~QNativeGestureEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QNativeGestureEventWrap::gestureType(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int t = static_cast<int>(this->instance->gestureType());
  return Napi::Number::From(env, t);
}

Napi::Value QNativeGestureEventWrap::globalPos(const Napi::CallbackInfo& info) {
  // Uses QPoint, not QPointF
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->globalPos());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QNativeGestureEventWrap::localPos(const Napi::CallbackInfo& info) {
  // Uses QPointF, not QPoint
  // qreal is typedef double unless configued with -qreal float option
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->localPos());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QNativeGestureEventWrap::pos(const Napi::CallbackInfo& info) {
  // Uses QPoint, not QPointF
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->pos());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QNativeGestureEventWrap::screenPos(const Napi::CallbackInfo& info) {
  // Uses QPointF, not QPoint
  // qreal is typedef double unless configued with -qreal float option
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->screenPos());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QNativeGestureEventWrap::windowPos(const Napi::CallbackInfo& info) {
  // Uses QPointF, not QPoint
  // qreal is typedef double unless configued with -qreal float option
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->windowPos());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QNativeGestureEventWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->value());
  return Napi::Number::From(env, v);
}