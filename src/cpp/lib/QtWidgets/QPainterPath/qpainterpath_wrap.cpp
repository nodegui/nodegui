#include "QtWidgets/QPainterPath/qpainterpath_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"

Napi::FunctionReference QPainterPathWrap::constructor;

Napi::Object QPainterPathWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPainterPath";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("moveTo", &QPainterPathWrap::moveTo),
       InstanceMethod("addRect", &QPainterPathWrap::addRect),
       InstanceMethod("lineTo", &QPainterPathWrap::lineTo),
       InstanceMethod("cubicTo", &QPainterPathWrap::cubicTo),
       InstanceMethod("quadTo", &QPainterPathWrap::quadTo),
       InstanceMethod("closeSubpath", &QPainterPathWrap::closeSubpath),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPainterPathWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPainterPath* QPainterPathWrap::getInternalInstance() { return this->instance.get(); }
QPainterPathWrap::~QPainterPathWrap() { this->instance.reset(); }

QPainterPathWrap::QPainterPathWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPainterPathWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = std::make_unique<QPainterPath>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
Napi::Value QPainterPathWrap::moveTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->moveTo(x, y);
  return env.Null();
}
Napi::Value QPainterPathWrap::addRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->addRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterPathWrap::lineTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->lineTo(x, y);
  return env.Null();
}
Napi::Value QPainterPathWrap::cubicTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int c1X = info[0].As<Napi::Number>().Int32Value();
  int c1Y = info[1].As<Napi::Number>().Int32Value();
  int c2X = info[2].As<Napi::Number>().Int32Value();
  int c2Y = info[3].As<Napi::Number>().Int32Value();
  int endPointX = info[4].As<Napi::Number>().Int32Value();
  int endPointY = info[5].As<Napi::Number>().Int32Value();
  this->instance->cubicTo(c1X, c1Y, c2X, c2Y, endPointX, endPointY);
  return env.Null();
}
Napi::Value QPainterPathWrap::quadTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int cx = info[0].As<Napi::Number>().Int32Value();
  int cy = info[1].As<Napi::Number>().Int32Value();
  int endPointX = info[2].As<Napi::Number>().Int32Value();
  int endPointY = info[3].As<Napi::Number>().Int32Value();
  this->instance->quadTo(cx, cy, endPointX, endPointY);
  return env.Null();
}
Napi::Value QPainterPathWrap::closeSubpath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->closeSubpath();
  return env.Null();
}
