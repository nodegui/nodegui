#include "QtWidgets/QPainter/qpainter_wrap.h"

#include "Extras/Utils/nutils.h"
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
