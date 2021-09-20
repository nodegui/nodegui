#include "QtCore/QSizeF/qsizef_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSizeFWrap::constructor;

Napi::Object QSizeFWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSizeF";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setHeight", &QSizeFWrap::setHeight),
       InstanceMethod("setWidth", &QSizeFWrap::setWidth),
       InstanceMethod("height", &QSizeFWrap::height),
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
  Napi::HandleScope scope(env);

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
  Napi::HandleScope scope(env);
  qreal height = info[0].As<Napi::Number>().FloatValue();
  this->instance->setHeight(height);
  return env.Null();
}
Napi::Value QSizeFWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  qreal width = info[0].As<Napi::Number>().FloatValue();
  this->instance->setWidth(width);
  return env.Null();
}
Napi::Value QSizeFWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QSizeFWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->width());
}

Napi::Value StaticQSizeFWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QSizeF size = variant->value<QSizeF>();
  auto instance = QSizeFWrap::constructor.New({Napi::External<QSizeF>::New(
      env, new QSizeF(size.width(), size.height()))});
  return instance;
}
