#include "Extras/Utils/nutils.h"
#include "QtCore/QColor/qcolor_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QColorWrap::constructor;

Napi::Object QColorWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QColor";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setRed", &QColorWrap::setRed),
       InstanceMethod("red", &QColorWrap::red),
       InstanceMethod("setGreen", &QColorWrap::setGreen),
       InstanceMethod("green", &QColorWrap::green),
       InstanceMethod("setBlue", &QColorWrap::setBlue),
       InstanceMethod("blue", &QColorWrap::blue),
       InstanceMethod("setAlpha", &QColorWrap::setAlpha),
       InstanceMethod("alpha", &QColorWrap::alpha),
       StaticMethod("fromQVariant", &StaticQColorWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QColorWrap::QColorWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QColorWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 4) {
    int r = info[0].As<Napi::Number>().Int32Value();
    int g = info[1].As<Napi::Number>().Int32Value();
    int b = info[2].As<Napi::Number>().Int32Value();
    int a = info[3].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QColor>(r, g, b, a);
  } else if (info.Length() == 3) {
    int r = info[0].As<Napi::Number>().Int32Value();
    int g = info[1].As<Napi::Number>().Int32Value();
    int b = info[2].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QColor>(r, g, b);
  } else if (info.Length() == 1) {
    if (info[0].IsString()) {
      QString color =
          QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
      this->instance = std::make_unique<QColor>(color);
    } else if (info[0].IsNumber()) {
      Qt::GlobalColor color =
          (Qt::GlobalColor)info[0].As<Napi::Number>().Int32Value();
      this->instance = std::make_unique<QColor>(color);
    } else {
      this->instance =
          std::unique_ptr<QColor>(info[0].As<Napi::External<QColor>>().Data());
    }
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QColor>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QColorWrap::~QColorWrap() { this->instance.reset(); }

QColor* QColorWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QColorWrap::setRed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int red = info[0].As<Napi::Number>().Int32Value();
  this->instance->setRed(red);
  return env.Null();
}
Napi::Value QColorWrap::red(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->red());
}
Napi::Value QColorWrap::setGreen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setGreen(value);
  return env.Null();
}
Napi::Value QColorWrap::green(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->green());
}
Napi::Value QColorWrap::setBlue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setBlue(value);
  return env.Null();
}
Napi::Value QColorWrap::blue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->blue());
}
Napi::Value QColorWrap::setAlpha(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setAlpha(value);
  return env.Null();
}
Napi::Value QColorWrap::alpha(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->alpha());
}

Napi::Value StaticQColorWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QColor color = variant->value<QColor>();
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}