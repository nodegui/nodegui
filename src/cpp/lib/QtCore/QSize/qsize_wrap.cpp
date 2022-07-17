#include "QtCore/QSize/qsize_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSizeWrap::constructor;

Napi::Object QSizeWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSize";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("boundedTo", &QSizeWrap::boundedTo),
       InstanceMethod("expandedTo", &QSizeWrap::expandedTo),
       InstanceMethod("isEmpty", &QSizeWrap::isEmpty),
       InstanceMethod("isNull", &QSizeWrap::isNull),
       InstanceMethod("isValid", &QSizeWrap::isValid),
       InstanceMethod("height", &QSizeWrap::height),
       InstanceMethod("scale", &QSizeWrap::scale),
       InstanceMethod("scaled", &QSizeWrap::scaled),
       InstanceMethod("setHeight", &QSizeWrap::setHeight),
       InstanceMethod("setWidth", &QSizeWrap::setWidth),
       InstanceMethod("transpose", &QSizeWrap::transpose),
       InstanceMethod("transposed", &QSizeWrap::transposed),
       InstanceMethod("width", &QSizeWrap::width),
       StaticMethod("fromQVariant", &StaticQSizeWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QSizeWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QSizeWrap::QSizeWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSizeWrap>(info) {
  Napi::Env env = info.Env();
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
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QSizeWrap::~QSizeWrap() { this->instance.reset(); }

QSize* QSizeWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QSizeWrap::setHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int height = info[0].As<Napi::Number>().Int32Value();
  this->instance->setHeight(height);
  return env.Null();
}
Napi::Value QSizeWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int width = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWidth(width);
  return env.Null();
}
Napi::Value QSizeWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QSizeWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->width());
}
Napi::Value StaticQSizeWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QSize size = variant->value<QSize>();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}
Napi::Value QSizeWrap::boundedTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeWrap* otherSizeWrap =
      Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>());
  QSize* otherSize = otherSizeWrap->getInternalInstance();
  QSize result = this->instance->boundedTo(*otherSize);
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}
Napi::Value QSizeWrap::expandedTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeWrap* otherSizeWrap =
      Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>());
  QSize* otherSize = otherSizeWrap->getInternalInstance();
  QSize result = this->instance->expandedTo(*otherSize);
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}
Napi::Value QSizeWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isEmpty();
  return Napi::Boolean::New(env, result);
}
Napi::Value QSizeWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isNull();
  return Napi::Boolean::New(env, result);
}
Napi::Value QSizeWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isValid();
  return Napi::Boolean::New(env, result);
}
Napi::Value QSizeWrap::scale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int width = info[0].As<Napi::Number>().Int32Value();
  int height = info[1].As<Napi::Number>().Int32Value();
  Qt::AspectRatioMode mode =
      static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  this->instance->scale(width, height, mode);
  return env.Null();
}
Napi::Value QSizeWrap::scaled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int width = info[0].As<Napi::Number>().Int32Value();
  int height = info[1].As<Napi::Number>().Int32Value();
  Qt::AspectRatioMode mode =
      static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  QSize result = this->instance->scaled(width, height, mode);
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}
Napi::Value QSizeWrap::transpose(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->transpose();
  return env.Null();
}
Napi::Value QSizeWrap::transposed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSize result = this->instance->transposed();
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}
