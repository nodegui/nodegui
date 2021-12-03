#include "QtCore/QPoint/qpoint_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QPointWrap::constructor;

Napi::Object QPointWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPoint";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setX", &QPointWrap::setX),
       InstanceMethod("x", &QPointWrap::x),
       InstanceMethod("setY", &QPointWrap::setY),
       InstanceMethod("y", &QPointWrap::y),
       InstanceMethod("isNull", &QPointWrap::isNull),
       InstanceMethod("manhattanLength", &QPointWrap::manhattanLength),
       InstanceMethod("transposed", &QPointWrap::transposed),
       StaticMethod("fromQVariant", &StaticQPointWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPointWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPointWrap::QPointWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPointWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 2) {
    int xpos = info[0].As<Napi::Number>().Int32Value();
    int ypos = info[1].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QPoint>(xpos, ypos);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QPoint>(info[0].As<Napi::External<QPoint>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QPoint>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPointWrap::~QPointWrap() { this->instance.reset(); }

QPoint* QPointWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QPointWrap::setX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 int x = info[0].As<Napi::Number>().Int32Value();
  this->instance->setX(x);
  return env.Null();
}
Napi::Value QPointWrap::setY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 int y = info[0].As<Napi::Number>().Int32Value();
  this->instance->setY(y);
  return env.Null();
}
Napi::Value QPointWrap::x(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 return Napi::Value::From(env, this->instance->x());
}
Napi::Value QPointWrap::y(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 return Napi::Value::From(env, this->instance->y());
}

Napi::Value StaticQPointWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QPoint point = variant->value<QPoint>();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(point))});
  return instance;
}

Napi::Value QPointWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QPointWrap::manhattanLength(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->manhattanLength());
}

Napi::Value QPointWrap::transposed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
 QPoint ret = this->instance->transposed();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(ret))});
  return instance;
}
