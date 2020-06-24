#include "QtCore/QPointF/qpointf_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"

Napi::FunctionReference QPointFWrap::constructor;

Napi::Object QPointFWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPointF";
  Napi::Function func = DefineClass(
      env, CLASSNAME,

      {// Methods inherited from QDropEvent
       InstanceMethod("isNull", &QPointFWrap::isNull),
       InstanceMethod("manhattanLength", &QPointFWrap::manhattanLength),
       InstanceMethod("setX", &QPointFWrap::setX),
       InstanceMethod("setY", &QPointFWrap::setY),
       InstanceMethod("toPoint", &QPointFWrap::toPoint),
       InstanceMethod("transposed", &QPointFWrap::transposed),
       InstanceMethod("x", &QPointFWrap::x),
       InstanceMethod("y", &QPointFWrap::y),
       StaticMethod("dotProduct", &StaticQPointFWrapMethods::dotProduct),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPointFWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPointFWrap::~QPointFWrap() { this->instance.reset(); }

QPointF* QPointFWrap::getInternalInstance() { return this->instance.get(); }

QPointFWrap::QPointFWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPointFWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    qreal xpos = info[0].As<Napi::Number>().DoubleValue();
    qreal ypos = info[1].As<Napi::Number>().DoubleValue();
    this->instance = std::make_unique<QPointF>(xpos, ypos);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QPointF>(info[0].As<Napi::External<QPointF>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QPointF>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

// Instance Methods Here

Napi::Value StaticQPointFWrapMethods::dotProduct(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  Napi::Object wrap1_0 = info[1].As<Napi::Object>();
  QPointFWrap* wrap1_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap1_0);
  QPointF* input1 = wrap1_1->getInternalInstance();
  return Napi::Number::New(env, QPointF::dotProduct(*input0, *input1));
}

Napi::Value QPointFWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QPointFWrap::manhattanLength(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->manhattanLength());
}

Napi::Value QPointFWrap::setX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setX(input0);
  return env.Null();
}

Napi::Value QPointFWrap::setY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setY(input0);
  return env.Null();
}

Napi::Value QPointFWrap::toPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPoint ret = this->instance->toPoint();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(ret))});
  return instance;
}

Napi::Value QPointFWrap::transposed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPointF ret = this->instance->transposed();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QPointFWrap::x(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->x());
}

Napi::Value QPointFWrap::y(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, this->instance->y());
}
