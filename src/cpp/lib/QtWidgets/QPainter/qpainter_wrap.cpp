#include "QtWidgets/QPainter/qpainter_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QPainterWrap::constructor;

Napi::Object QPainterWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPainter";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("drawText", &QPainterWrap::drawText),
       InstanceMethod("begin", &QPainterWrap::begin),
       InstanceMethod("end", &QPainterWrap::end),
       InstanceMethod("rotate", &QPainterWrap::rotate),
       InstanceMethod("setPen", &QPainterWrap::setPen),
       InstanceMethod("setBrush", &QPainterWrap::setBrush),
       InstanceMethod("drawLine", &QPainterWrap::drawLine),
       InstanceMethod("scale", &QPainterWrap::scale),
       InstanceMethod("translate", &QPainterWrap::translate),
       InstanceMethod("setRenderHint", &QPainterWrap::setRenderHint),
       InstanceMethod("drawConvexPolygon", &QPainterWrap::drawConvexPolygon),
       InstanceMethod("save", &QPainterWrap::save),
       InstanceMethod("restore", &QPainterWrap::restore),
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
  bool ret = this->instance->end();
  return Napi::Value::From(env, ret);
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
  Napi::String napiType = info[1].As<Napi::String>();
  std::string type = napiType.Utf8Value();

  if (type == "color") {
    Napi::Object colorObject = info[0].As<Napi::Object>();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
    QColor* color = colorWrap->getInternalInstance();
    this->instance->setPen(*color);
  } else if (type == "style") {
    Qt::PenStyle style = (Qt::PenStyle)info[0].As<Napi::Number>().Int32Value();
    this->instance->setPen(style);
  }
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
  QPolygon polygon;
  for (int i = 0; i < pointsNapi.Length(); i++) {
    Napi::Object pointObject = pointsNapi.Get(i).As<Napi::Object>();
    QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);
    QPoint* point = pointWrap->getInternalInstance();
    polygon << *point;
  }
  this->instance->drawConvexPolygon(polygon);
  return env.Null();
}
Napi::Value QPainterWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->save();
  return env.Null();
}
Napi::Value QPainterWrap::restore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->restore();
  return env.Null();
}
Napi::Value QPainterWrap::setBrush(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object colorObject = info[0].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColor* color = colorWrap->getInternalInstance();
  QBrush* brush = new QBrush(*color);
  this->instance->setBrush(*brush);
  return env.Null();
}
Napi::Value QPainterWrap::setRenderHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPainter::RenderHint hint =
      (QPainter::RenderHint)info[0].As<Napi::Number>().Int32Value();

  this->instance->setRenderHint(hint, true);
  return env.Null();
}
