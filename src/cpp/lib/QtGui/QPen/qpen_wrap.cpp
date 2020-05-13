#include "QtGui/QPen/qpen_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QBrush/qbrush_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QPenWrap::constructor;

Napi::Object QPenWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPen";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setColor", &QPenWrap::setColor),
                   InstanceMethod("color", &QPenWrap::color),
                   InstanceMethod("setStyle", &QPenWrap::setStyle),
                   InstanceMethod("style", &QPenWrap::style),
                   InstanceMethod("setCapStyle", &QPenWrap::setCapStyle),
                   InstanceMethod("setWidth", &QPenWrap::setWidth),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPenWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPenWrap::QPenWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPenWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = std::make_unique<QPen>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPenWrap::~QPenWrap() { this->instance.reset(); }

QPen* QPenWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QPenWrap::setColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info[0].IsNumber()) {
    Qt::GlobalColor color =
        (Qt::GlobalColor)info[0].As<Napi::Number>().Int32Value();
    this->instance->setColor(color);
  } else {
    Napi::Object colorObject = info[0].As<Napi::Object>();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
    this->instance->setColor(*colorWrap->getInternalInstance());
  }
  return env.Null();
}

Napi::Value QPenWrap::color(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QColor color = this->instance->color();
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QPenWrap::setStyle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::PenStyle style = (Qt::PenStyle)info[0].As<Napi::Number>().Int32Value();
  this->instance->setStyle(style);
  return env.Null();
}

Napi::Value QPenWrap::style(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::PenStyle style = this->instance->style();
  return Napi::Number::New(env, static_cast<int>(style));
}

Napi::Value QPenWrap::setCapStyle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::PenCapStyle style =
      (Qt::PenCapStyle)info[0].As<Napi::Number>().Int32Value();
  this->instance->setCapStyle(style);
  return env.Null();
}

Napi::Value QPenWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int width = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWidth(width);
  return env.Null();
}
