#include "QtCore/QTime/qtime_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QTimeWrap::constructor;

Napi::Object QTimeWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTime";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addMSecs", &QTimeWrap::addMSecs),
       InstanceMethod("addSecs", &QTimeWrap::addSecs),
       InstanceMethod("elapsed", &QTimeWrap::elapsed),
       InstanceMethod("hour", &QTimeWrap::hour),
       InstanceMethod("isNull", &QTimeWrap::isNull),
       InstanceMethod("isValid", &QTimeWrap::isValid),
       InstanceMethod("minute", &QTimeWrap::minute),
       InstanceMethod("msec", &QTimeWrap::msec),
       InstanceMethod("msecsSinceStartOfDay", &QTimeWrap::msecsSinceStartOfDay),
       InstanceMethod("msecsTo", &QTimeWrap::msecsTo),
       InstanceMethod("restart", &QTimeWrap::restart),
       InstanceMethod("second", &QTimeWrap::second),
       InstanceMethod("secsTo", &QTimeWrap::secsTo),
       InstanceMethod("setHMS", &QTimeWrap::setHMS),
       InstanceMethod("start", &QTimeWrap::start),
       InstanceMethod("toString$", &QTimeWrap::toString),
       StaticMethod("currentTime", &StaticTimeWrapMethods::currentTime),
       StaticMethod("fromMSecsSinceStartOfDay",
                    &StaticTimeWrapMethods::fromMSecsSinceStartOfDay),
       StaticMethod("isValid", &StaticTimeWrapMethods::isValid),
       StaticMethod("fromString", &StaticTimeWrapMethods::fromString),
       StaticMethod("fromQVariant", &StaticTimeWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTimeWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTimeWrap::QTimeWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTimeWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 4) {
    int h = info[0].As<Napi::Number>().Int32Value();
    int m = info[1].As<Napi::Number>().Int32Value();
    int s = info[2].As<Napi::Number>().Int32Value();
    int ms = info[3].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QTime>(h, m, s, ms);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QTime>(info[0].As<Napi::External<QTime>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QTime>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QTimeWrap::~QTimeWrap() { this->instance.reset(); }

QTime* QTimeWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QTimeWrap::addMSecs(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int ms = info[0].As<Napi::Number>().Int32Value();
  QTime time = this->instance->addMSecs(ms);
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value QTimeWrap::addSecs(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int s = info[0].As<Napi::Number>().Int32Value();
  QTime time = this->instance->addSecs(s);
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value QTimeWrap::elapsed(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->elapsed());
}

Napi::Value QTimeWrap::hour(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->hour());
}

Napi::Value QTimeWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isNull());
}

Napi::Value QTimeWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isValid());
}

Napi::Value QTimeWrap::minute(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->minute());
}

Napi::Value QTimeWrap::msec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->msec());
}

Napi::Value QTimeWrap::msecsSinceStartOfDay(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->msecsSinceStartOfDay());
}

Napi::Value QTimeWrap::msecsTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object tObject = info[0].As<Napi::Object>();
  QTimeWrap* tWrap = Napi::ObjectWrap<QTimeWrap>::Unwrap(tObject);
  int result = this->instance->msecsTo(*tWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QTimeWrap::restart(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->restart();
  return Napi::Value::From(env, result);
}

Napi::Value QTimeWrap::second(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->second());
}

Napi::Value QTimeWrap::secsTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object tObject = info[0].As<Napi::Object>();
  QTimeWrap* tWrap = Napi::ObjectWrap<QTimeWrap>::Unwrap(tObject);
  int result = this->instance->secsTo(*tWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QTimeWrap::setHMS(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int h = info[0].As<Napi::Number>().Int32Value();
  int m = info[1].As<Napi::Number>().Int32Value();
  int s = info[2].As<Napi::Number>().Int32Value();
  int ms = info[3].As<Napi::Number>().Int32Value();
  bool result = this->instance->setHMS(h, m, s, ms);
  return Napi::Value::From(env, result);
}

Napi::Value QTimeWrap::start(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->start();
  return env.Null();
}

Napi::Value QTimeWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QString result;
  if (info[0].IsString()) {
    std::string format = info[0].As<Napi::String>().Utf8Value();
    result = this->instance->toString(QString::fromUtf8(format.c_str()));
  } else {
    int format = info[0].As<Napi::Number>().Int32Value();
    result = this->instance->toString(static_cast<Qt::DateFormat>(format));
  }

  return Napi::String::New(env, result.toStdString());
}

Napi::Value StaticTimeWrapMethods::currentTime(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QTime time = QTime::currentTime();
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value StaticTimeWrapMethods::fromMSecsSinceStartOfDay(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int msecs = info[0].As<Napi::Number>().Int32Value();
  QTime time = QTime::fromMSecsSinceStartOfDay(msecs);
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value StaticTimeWrapMethods::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int h = info[0].As<Napi::Number>().Int32Value();
  int m = info[1].As<Napi::Number>().Int32Value();
  int s = info[2].As<Napi::Number>().Int32Value();
  int ms = info[3].As<Napi::Number>().Int32Value();

  return Napi::Value::From(env, QTime::isValid(h, m, s, ms));
}

Napi::Value StaticTimeWrapMethods::fromString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string timeString = info[0].As<Napi::String>().Utf8Value();

  QTime time;
  if (info[1].IsString()) {
    std::string format = info[1].As<Napi::String>().Utf8Value();
    time = QTime::fromString(QString::fromUtf8(timeString.c_str()),
                             QString::fromUtf8(format.c_str()));
  } else {
    int format = info[1].As<Napi::Number>().Int32Value();
    time = QTime::fromString(QString::fromUtf8(timeString.c_str()),
                             static_cast<Qt::DateFormat>(format));
  }
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value StaticTimeWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QTime time = variant->value<QTime>();
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}
