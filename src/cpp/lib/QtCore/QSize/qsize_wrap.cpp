#include "QtCore/QSize/qsize_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSizeWrap::constructor;

Napi::Object QSizeWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSize";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setHeight", &QSizeWrap::setHeight),
       InstanceMethod("setWidth", &QSizeWrap::setWidth),
       InstanceMethod("height", &QSizeWrap::height),
       InstanceMethod("width", &QSizeWrap::width),
       StaticMethod("fromQVariant", &StaticQSizeWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QSizeWrap::QSizeWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSizeWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    int width = info[0].As<Napi::Number>().Int32Value();
    int height = info[1].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QSize>(width, height);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QSize>(info[0].As<Napi::External<QSize>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QSize>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = this->getInternalInstance();
}

QSizeWrap::~QSizeWrap() { this->instance.reset(); }

QSize* QSizeWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QSizeWrap::setHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int height = info[0].As<Napi::Number>().Int32Value();
  this->instance->setHeight(height);
  return env.Null();
}
Napi::Value QSizeWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int width = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWidth(width);
  return env.Null();
}
Napi::Value QSizeWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QSizeWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->width());
}

Napi::Value StaticQSizeWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QSize size = variant->value<QSize>();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}
