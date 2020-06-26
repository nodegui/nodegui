#include "QtGui/QEvent/QTabletEvent/qtabletevent_wrap.h"

#include <QPoint>
#include <QPointF>
#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QTabletEventWrap::constructor;

Napi::Object QTabletEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTabletEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("button", &QTabletEventWrap::button),
       InstanceMethod("buttons", &QTabletEventWrap::buttons),
       //  InstanceMethod("deviceType", &QTabletEventWrap::deviceType),
       InstanceMethod("globalPos", &QTabletEventWrap::globalPos),
       InstanceMethod("globalPosF", &QTabletEventWrap::globalPosF),
       InstanceMethod("globalX", &QTabletEventWrap::globalX),
       InstanceMethod("globalY", &QTabletEventWrap::globalY),
       InstanceMethod("pointerType", &QTabletEventWrap::pointerType),
       InstanceMethod("pos", &QTabletEventWrap::pos),
       InstanceMethod("posF", &QTabletEventWrap::posF),
       InstanceMethod("pressure", &QTabletEventWrap::pressure),
       InstanceMethod("rotation", &QTabletEventWrap::rotation),
       InstanceMethod("tangentialPressure",
                      &QTabletEventWrap::tangentialPressure),
       InstanceMethod("uniqueId", &QTabletEventWrap::uniqueId),
       InstanceMethod("x", &QTabletEventWrap::x),
       InstanceMethod("xTilt", &QTabletEventWrap::xTilt),
       InstanceMethod("y", &QTabletEventWrap::y),
       InstanceMethod("yTilt", &QTabletEventWrap::yTilt),
       InstanceMethod("z", &QTabletEventWrap::z),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTabletEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTabletEvent* QTabletEventWrap::getInternalInstance() { return this->instance; }

QTabletEventWrap::QTabletEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTabletEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QTabletEvent> eventObject =
        info[0].As<Napi::External<QTabletEvent>>();
    this->instance = static_cast<QTabletEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QTabletEventWrap::~QTabletEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QTabletEventWrap::button(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int b = static_cast<int>(this->instance->button());
  return Napi::Number::From(env, b);
}
Napi::Value QTabletEventWrap::buttons(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int b = static_cast<int>(this->instance->buttons());
  return Napi::Number::From(env, b);
}
// Napi::Value QTabletEventWrap::deviceType(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   int f = static_cast<int>(this->instance->deviceType());
//   return Napi::Number::From(env, f);
// }
Napi::Value QTabletEventWrap::globalPos(const Napi::CallbackInfo& info) {
  // Uses QPoint
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->globalPos());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}
Napi::Value QTabletEventWrap::globalPosF(const Napi::CallbackInfo& info) {
  // Uses QPointF
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->globalPosF());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}
Napi::Value QTabletEventWrap::globalX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->globalX());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::globalY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->globalY());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::pointerType(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int f = static_cast<int>(this->instance->pointerType());
  return Napi::Number::From(env, f);
}
Napi::Value QTabletEventWrap::pos(const Napi::CallbackInfo& info) {
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
Napi::Value QTabletEventWrap::posF(const Napi::CallbackInfo& info) {
  // Uses QPointF
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->posF());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}
Napi::Value QTabletEventWrap::pressure(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->pressure());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::rotation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->rotation());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::tangentialPressure(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->tangentialPressure());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::uniqueId(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qint64 v = static_cast<qint64>(this->instance->uniqueId());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::x(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->x());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::xTilt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->xTilt());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::y(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->y());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::yTilt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->yTilt());
  return Napi::Number::From(env, v);
}
Napi::Value QTabletEventWrap::z(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->z());
  return Napi::Number::From(env, v);
}