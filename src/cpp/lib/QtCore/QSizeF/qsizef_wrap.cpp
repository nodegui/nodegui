#include "QtCore/QSizeF/qsizef_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSizeFWrap::constructor;

Napi::Object QSizeFWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSizeF";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("boundedTo", &QSizeFWrap::boundedTo),
       InstanceMethod("expandedTo", &QSizeFWrap::expandedTo),
       InstanceMethod("height", &QSizeFWrap::height),
       InstanceMethod("isEmpty", &QSizeFWrap::isEmpty),
       InstanceMethod("isNull", &QSizeFWrap::isNull),
       InstanceMethod("isValid", &QSizeFWrap::isValid),
       InstanceMethod("scale", &QSizeFWrap::scale),
       InstanceMethod("scaled", &QSizeFWrap::scaled),
       InstanceMethod("setHeight", &QSizeFWrap::setHeight),
       InstanceMethod("setWidth", &QSizeFWrap::setWidth),
       InstanceMethod("toSize", &QSizeFWrap::toSize),
       InstanceMethod("transpose", &QSizeFWrap::transpose),
       InstanceMethod("transposed", &QSizeFWrap::transposed),
       InstanceMethod("width", &QSizeFWrap::width),
       StaticMethod("fromQVariant", &StaticQSizeFWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QSizeFWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QSizeFWrap::QSizeFWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSizeFWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 2) {
    int width = info[0].As<Napi::Number>().Int32Value();
    int height = info[1].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QSizeF>(width, height);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QSizeF>(info[0].As<Napi::External<QSizeF>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QSizeF>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QSizeFWrap::~QSizeFWrap() { this->instance.reset(); }

QSizeF* QSizeFWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QSizeFWrap::setHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal height = info[0].As<Napi::Number>().FloatValue();
  this->instance->setHeight(height);
  return env.Null();
}
Napi::Value QSizeFWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal width = info[0].As<Napi::Number>().FloatValue();
  this->instance->setWidth(width);
  return env.Null();
}
Napi::Value QSizeFWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QSizeFWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->width());
}

Napi::Value StaticQSizeFWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QSizeF size = variant->value<QSizeF>();
  auto instance = QSizeFWrap::constructor.New({Napi::External<QSizeF>::New(
      env, new QSizeF(size.width(), size.height()))});
  return instance;
}
Napi::Value QSizeFWrap::boundedTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeFWrap* otherSizeWrap =
      Napi::ObjectWrap<QSizeFWrap>::Unwrap(info[0].As<Napi::Object>());
  QSizeF* otherSize = otherSizeWrap->getInternalInstance();
  QSizeF result = this->instance->boundedTo(*otherSize);
  auto resultInstance = QSizeFWrap::constructor.New(
      {Napi::External<QSizeF>::New(env, new QSizeF(result))});
  return resultInstance;
}

Napi::Value QSizeFWrap::expandedTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeFWrap* otherSizeWrap =
      Napi::ObjectWrap<QSizeFWrap>::Unwrap(info[0].As<Napi::Object>());
  QSizeF* otherSize = otherSizeWrap->getInternalInstance();
  QSizeF result = this->instance->expandedTo(*otherSize);
  auto resultInstance = QSizeFWrap::constructor.New(
      {Napi::External<QSizeF>::New(env, new QSizeF(result))});
  return resultInstance;
}
Napi::Value QSizeFWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isEmpty();
  return Napi::Boolean::New(env, result);
}

Napi::Value QSizeFWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isNull();
  return Napi::Boolean::New(env, result);
}

Napi::Value QSizeFWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isValid();
  return Napi::Boolean::New(env, result);
}

Napi::Value QSizeFWrap::scale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal width = info[0].As<Napi::Number>().FloatValue();
  qreal height = info[1].As<Napi::Number>().FloatValue();
  Qt::AspectRatioMode mode =
      static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  this->instance->scale(width, height, mode);
  return env.Null();
}

Napi::Value QSizeFWrap::scaled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal width = info[0].As<Napi::Number>().FloatValue();
  qreal height = info[1].As<Napi::Number>().FloatValue();
  Qt::AspectRatioMode mode =
      static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  QSizeF result = this->instance->scaled(width, height, mode);
  auto resultInstance = QSizeFWrap::constructor.New(
      {Napi::External<QSizeF>::New(env, new QSizeF(result))});
  return resultInstance;
}
Napi::Value QSizeFWrap::toSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSize result = this->instance->toSize();
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}

Napi::Value QSizeFWrap::transpose(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->transpose();
  return env.Null();
}

Napi::Value QSizeFWrap::transposed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeF result = this->instance->transposed();
  auto resultInstance = QSizeFWrap::constructor.New(
      {Napi::External<QSizeF>::New(env, new QSizeF(result))});
  return resultInstance;
}
