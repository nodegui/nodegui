#include "QtCore/QRectF/qrectf_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPointF/qpointf_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"

Napi::FunctionReference QRectFWrap::constructor;

Napi::Object QRectFWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRectF";
  Napi::Function func = DefineClass(
      env, CLASSNAME,

      {InstanceMethod("adjust", &QRectFWrap::adjust),
       InstanceMethod("adjusted", &QRectFWrap::adjusted),
       InstanceMethod("bottom", &QRectFWrap::bottom),
       InstanceMethod("bottomLeft", &QRectFWrap::bottomLeft),
       InstanceMethod("bottomRight", &QRectFWrap::bottomRight),
       InstanceMethod("center", &QRectFWrap::center),
       InstanceMethod("contains", &QRectFWrap::contains),
       InstanceMethod("contains_QRect", &QRectFWrap::contains_QRect),
       InstanceMethod("contains_QPoint", &QRectFWrap::contains_QPoint),
       InstanceMethod("height", &QRectFWrap::height),
       InstanceMethod("intersected", &QRectFWrap::intersected),
       InstanceMethod("intersects", &QRectFWrap::intersects),
       InstanceMethod("isEmpty", &QRectFWrap::isEmpty),
       InstanceMethod("isNull", &QRectFWrap::isNull),
       InstanceMethod("isValid", &QRectFWrap::isValid),
       InstanceMethod("left", &QRectFWrap::left),
       InstanceMethod("moveBottom", &QRectFWrap::moveBottom),
       InstanceMethod("moveBottomLeft", &QRectFWrap::moveBottomLeft),
       InstanceMethod("moveBottomRight", &QRectFWrap::moveBottomRight),
       InstanceMethod("moveCenter", &QRectFWrap::moveCenter),
       InstanceMethod("moveLeft", &QRectFWrap::moveLeft),
       InstanceMethod("moveRight", &QRectFWrap::moveRight),
       InstanceMethod("moveTo", &QRectFWrap::moveTo),
       InstanceMethod("moveTo_QPoint", &QRectFWrap::moveTo_QPoint),
       InstanceMethod("moveTop", &QRectFWrap::moveTop),
       InstanceMethod("moveTopLeft", &QRectFWrap::moveTopLeft),
       InstanceMethod("moveTopRight", &QRectFWrap::moveTopRight),
       InstanceMethod("normalized", &QRectFWrap::normalized),
       InstanceMethod("right", &QRectFWrap::right),
       InstanceMethod("setBottom", &QRectFWrap::setBottom),
       InstanceMethod("setBottomLeft", &QRectFWrap::setBottomLeft),
       InstanceMethod("setBottomRight", &QRectFWrap::setBottomRight),
       InstanceMethod("setCoords", &QRectFWrap::setCoords),
       InstanceMethod("setHeight", &QRectFWrap::setHeight),
       InstanceMethod("setLeft", &QRectFWrap::setLeft),
       InstanceMethod("setRect", &QRectFWrap::setRect),
       InstanceMethod("setRight", &QRectFWrap::setRight),
       InstanceMethod("setTop", &QRectFWrap::setTop),
       InstanceMethod("setTopLeft", &QRectFWrap::setTopLeft),
       InstanceMethod("setTopRight", &QRectFWrap::setTopRight),
       InstanceMethod("setWidth", &QRectFWrap::setWidth),
       InstanceMethod("setX", &QRectFWrap::setX),
       InstanceMethod("setY", &QRectFWrap::setY),
       InstanceMethod("toAlignedRect", &QRectFWrap::toAlignedRect),
       InstanceMethod("toRect", &QRectFWrap::toRect),
       InstanceMethod("top", &QRectFWrap::top),
       InstanceMethod("topLeft", &QRectFWrap::topLeft),
       InstanceMethod("topRight", &QRectFWrap::topRight),
       InstanceMethod("translate", &QRectFWrap::translate),
       InstanceMethod("translate_QPoint", &QRectFWrap::translate_QPoint),
       InstanceMethod("translated", &QRectFWrap::translated),
       InstanceMethod("translated_QPoint", &QRectFWrap::translated_QPoint),
       InstanceMethod("transposed", &QRectFWrap::transposed),
       InstanceMethod("united", &QRectFWrap::united),
       InstanceMethod("width", &QRectFWrap::width),
       InstanceMethod("x", &QRectFWrap::x),
       InstanceMethod("y", &QRectFWrap::y),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QRectFWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QRectF* QRectFWrap::getInternalInstance() { return this->instance.get(); }

QRectFWrap::~QRectFWrap() { this->instance.reset(); }

QRectFWrap::QRectFWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRectFWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 4) {
    qreal x = info[0].As<Napi::Number>().DoubleValue();
    qreal y = info[1].As<Napi::Number>().DoubleValue();
    qreal width = info[2].As<Napi::Number>().DoubleValue();
    qreal height = info[3].As<Napi::Number>().DoubleValue();
    this->instance = std::make_unique<QRectF>(x, y, width, height);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QRectF>(info[0].As<Napi::External<QRectF>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QRectF>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

// Instance Methods Here

Napi::Value QRectFWrap::adjust(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  qreal input2 = info[2].As<Napi::Number>().DoubleValue();
  qreal input3 = info[3].As<Napi::Number>().DoubleValue();
  this->instance->adjust(input0, input1, input2, input3);
  return env.Null();
}

Napi::Value QRectFWrap::adjusted(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  qreal input2 = info[2].As<Napi::Number>().DoubleValue();
  qreal input3 = info[3].As<Napi::Number>().DoubleValue();

  QRectF ret = this->instance->adjusted(input0, input1, input2, input3);
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::bottom(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->bottom());
}

Napi::Value QRectFWrap::bottomLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPointF ret = this->instance->bottomLeft();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QRectFWrap::bottomRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPointF ret = this->instance->bottomRight();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QRectFWrap::center(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPointF ret = this->instance->center();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QRectFWrap::contains_QPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  return Napi::Boolean::New(env, this->instance->contains(*input0));
}

Napi::Value QRectFWrap::contains_QRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QRectFWrap* wrap0_1 = Napi::ObjectWrap<QRectFWrap>::Unwrap(wrap0_0);
  QRectF* input0 = wrap0_1->getInternalInstance();
  return Napi::Boolean::New(env, this->instance->contains(*input0));
}

Napi::Value QRectFWrap::contains(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  return Napi::Boolean::New(env, this->instance->contains(input0, input1));
}

Napi::Value QRectFWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->height());
}

Napi::Value QRectFWrap::intersected(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QRectFWrap* wrap0_1 = Napi::ObjectWrap<QRectFWrap>::Unwrap(wrap0_0);
  QRectF* input0 = wrap0_1->getInternalInstance();

  QRectF ret = this->instance->intersected(*input0);
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::intersects(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QRectFWrap* wrap0_1 = Napi::ObjectWrap<QRectFWrap>::Unwrap(wrap0_0);
  QRectF* input0 = wrap0_1->getInternalInstance();
  return Napi::Boolean::New(env, this->instance->intersects(*input0));
}

Napi::Value QRectFWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isEmpty());
}

Napi::Value QRectFWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QRectFWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isValid());
}

Napi::Value QRectFWrap::left(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->left());
}

Napi::Value QRectFWrap::moveBottom(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->moveBottom(input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveBottomLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveBottomLeft(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveBottomRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveBottomRight(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveCenter(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveCenter(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->moveLeft(input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->moveRight(input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  this->instance->moveTo(input0, input1);
  return env.Null();
}

Napi::Value QRectFWrap::moveTo_QPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveTo(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveTop(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->moveTop(input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveTopLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveTopLeft(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::moveTopRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->moveTopRight(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::normalized(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRectF ret = this->instance->normalized();
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::right(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->right());
}

Napi::Value QRectFWrap::setBottom(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setBottom(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setBottomLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->setBottomLeft(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::setBottomRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->setBottomRight(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::setCoords(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  qreal input2 = info[2].As<Napi::Number>().DoubleValue();
  qreal input3 = info[3].As<Napi::Number>().DoubleValue();
  this->instance->setCoords(input0, input1, input2, input3);
  return env.Null();
}

Napi::Value QRectFWrap::setHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setHeight(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setLeft(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  qreal input2 = info[2].As<Napi::Number>().DoubleValue();
  qreal input3 = info[3].As<Napi::Number>().DoubleValue();
  this->instance->setRect(input0, input1, input2, input3);
  return env.Null();
}

Napi::Value QRectFWrap::setRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setRight(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setTop(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setTop(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setTopLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->setTopLeft(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::setTopRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->setTopRight(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setWidth(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setX(input0);
  return env.Null();
}

Napi::Value QRectFWrap::setY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setY(input0);
  return env.Null();
}

Napi::Value QRectFWrap::toAlignedRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRect ret = this->instance->toAlignedRect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(ret))});
  return instance;
}

Napi::Value QRectFWrap::toRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRect ret = this->instance->toRect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(ret))});
  return instance;
}

Napi::Value QRectFWrap::top(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->top());
}

Napi::Value QRectFWrap::topLeft(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPointF ret = this->instance->topLeft();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QRectFWrap::topRight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPointF ret = this->instance->topRight();
  auto instance = QPointFWrap::constructor.New(
      {Napi::External<QPointF>::New(env, new QPointF(ret))});
  return instance;
}

Napi::Value QRectFWrap::translate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();
  this->instance->translate(input0, input1);
  return env.Null();
}

Napi::Value QRectFWrap::translate_QPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();
  this->instance->translate(*input0);
  return env.Null();
}

Napi::Value QRectFWrap::translated(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qreal input0 = info[0].As<Napi::Number>().DoubleValue();
  qreal input1 = info[1].As<Napi::Number>().DoubleValue();

  QRectF ret = this->instance->translated(input0, input1);
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::translated_QPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointFWrap* wrap0_1 = Napi::ObjectWrap<QPointFWrap>::Unwrap(wrap0_0);
  QPointF* input0 = wrap0_1->getInternalInstance();

  QRectF ret = this->instance->translated(*input0);
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::transposed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRectF ret = this->instance->transposed();
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::united(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QRectFWrap* wrap0_1 = Napi::ObjectWrap<QRectFWrap>::Unwrap(wrap0_0);
  QRectF* input0 = wrap0_1->getInternalInstance();

  QRectF ret = this->instance->united(*input0);
  auto instance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(ret))});
  return instance;
}

Napi::Value QRectFWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->width());
}

Napi::Value QRectFWrap::x(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->x());
}

Napi::Value QRectFWrap::y(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->y());
}
