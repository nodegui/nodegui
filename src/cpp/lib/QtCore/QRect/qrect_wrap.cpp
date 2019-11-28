#include "QtCore/QRect/qrect_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QRectWrap::constructor;

Napi::Object QRectWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRect";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setHeight", &QRectWrap::setHeight),
       InstanceMethod("setWidth", &QRectWrap::setWidth),
       InstanceMethod("height", &QRectWrap::height),
       InstanceMethod("width", &QRectWrap::width),
       StaticMethod("fromQVariant", &StaticQRectWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QRectWrap::QRectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRectWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QRect>(info[0].As<Napi::External<QRect>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QRect>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QRectWrap::~QRectWrap() { this->instance.reset(); }

QRect* QRectWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QRectWrap::setHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int height = info[0].As<Napi::Number>().Int32Value();
  this->instance->setHeight(height);
  return env.Null();
}
Napi::Value QRectWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int width = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWidth(width);
  return env.Null();
}
Napi::Value QRectWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QRectWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->width());
}

Napi::Value StaticQRectWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QRect rect = variant->value<QRect>();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}
