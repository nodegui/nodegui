#include "QtWidgets/QPainter/qpainter_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QPainterWrap::constructor;

Napi::Object QPainterWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPainter";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("drawText", &QPainterWrap::drawText),
                   InstanceMethod("begin", &QPainterWrap::begin),
                   InstanceMethod("end", &QPainterWrap::end),
                   InstanceMethod("rotate", &QPainterWrap::rotate),
                   InstanceMethod("setPen", &QPainterWrap::setPen),
                   InstanceMethod("drawLine", &QPainterWrap::drawLine),
                   InstanceMethod("scale", &QPainterWrap::scale),
                   InstanceMethod("translate", &QPainterWrap::translate),
                   InstanceMethod("drawConvexPolygon", &QPainterWrap::drawConvexPolygon),
COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPainter* QPainterWrap::getInternalInstance() { return this->instance; }
QPainterWrap::~QPainterWrap() { delete this->instance; }

QPainterWrap::QPainterWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPainterWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object deviceObject = info[0].As<Napi::Object>();
    QWidgetWrap* deviceWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(deviceObject);
    this->instance = new QPainter(deviceWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new QPainter();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
Napi::Value QPainterWrap::drawText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  Napi::String napiText = info[2].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->drawText(x, y, QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QPainterWrap::begin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object deviceObject = info[0].As<Napi::Object>();
  QWidgetWrap* deviceWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(deviceObject);
  QWidget* device = deviceWrap->getInternalInstance();
  bool ret = this->instance->begin(device);
  return Napi::Value::From(env, ret);
}
Napi::Value QPainterWrap::end(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->end();
  return env.Null();
}
Napi::Value QPainterWrap::rotate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int angle = info[0].As<Napi::Number>().Int32Value();
  this->instance->rotate(angle);
  return env.Null();
}
Napi::Value QPainterWrap::setPen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int color = info[0].As<Napi::Number>().Int32Value();
  this->instance->setPen(color);
  return env.Null();
}
Napi::Value QPainterWrap::drawLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x1 = info[0].As<Napi::Number>().Int32Value();
  int y1 = info[1].As<Napi::Number>().Int32Value();
  int x2 = info[2].As<Napi::Number>().Int32Value();
  int y2 = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawLine(x1, y1, x2, y2);
  return env.Null();
}
Napi::Value QPainterWrap::scale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int sx = info[0].As<Napi::Number>().Int32Value();
  int sy = info[1].As<Napi::Number>().Int32Value();
  this->instance->scale(sx, sy);
  return env.Null();
}
Napi::Value QPainterWrap::translate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int dx = info[0].As<Napi::Number>().Int32Value();
  int dy = info[1].As<Napi::Number>().Int32Value();
  this->instance->translate(dx, dy);
  return env.Null();
}
Napi::Value QPainterWrap::drawConvexPolygon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Array pointsNapi = info[0].As<Napi::Array>();
  QList<QPoint*> list;
  for (int i = 0; i < pointsNapi.Length(); i++) {
    Napi::Object itemObject = pointsNapi[i].As<Napi::Object>();
    QPointWrap* itemWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(itemObject);
    QPoint* item = itemWrap->getInternalInstance();
    list.append(item);
  }
  int count = info[1].As<Napi::Number>().Int32Value();
  this->instance->drawConvexPolygon(list, count);
  return env.Null();
}
