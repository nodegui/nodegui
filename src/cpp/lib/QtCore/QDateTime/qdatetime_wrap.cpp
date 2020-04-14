#include "QtCore/QDateTime/qdatetime_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QDate/qdate_wrap.h"
#include "QtCore/QTime/qtime_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QDateTimeWrap::constructor;

Napi::Object QDateTimeWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDateTime";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addDays", &QDateTimeWrap::addDays),
       InstanceMethod("addMSecs", &QDateTimeWrap::addMSecs),
       InstanceMethod("addMonths", &QDateTimeWrap::addMonths),
       InstanceMethod("addSecs", &QDateTimeWrap::addSecs),
       InstanceMethod("addYears", &QDateTimeWrap::addYears),
       InstanceMethod("date", &QDateTimeWrap::date),
       InstanceMethod("daysTo", &QDateTimeWrap::daysTo),
       InstanceMethod("isDaylightTime", &QDateTimeWrap::isDaylightTime),
       InstanceMethod("isNull", &QDateTimeWrap::isNull),
       InstanceMethod("isValid", &QDateTimeWrap::isValid),
       InstanceMethod("msecsTo", &QDateTimeWrap::msecsTo),
       InstanceMethod("offsetFromUtc", &QDateTimeWrap::offsetFromUtc),
       InstanceMethod("secsTo", &QDateTimeWrap::secsTo),
       InstanceMethod("setDate", &QDateTimeWrap::setDate),
       InstanceMethod("setMSecsSinceEpoch", &QDateTimeWrap::setMSecsSinceEpoch),
       InstanceMethod("setOffsetFromUtc", &QDateTimeWrap::setOffsetFromUtc),
       InstanceMethod("setSecsSinceEpoch", &QDateTimeWrap::setSecsSinceEpoch),
       InstanceMethod("setTime", &QDateTimeWrap::setTime),
       InstanceMethod("setTimeSpec", &QDateTimeWrap::setTimeSpec),
       InstanceMethod("time", &QDateTimeWrap::time),
       InstanceMethod("timeSpec", &QDateTimeWrap::timeSpec),
       InstanceMethod("toLocalTime", &QDateTimeWrap::toLocalTime),
       InstanceMethod("toMSecsSinceEpoch", &QDateTimeWrap::toMSecsSinceEpoch),
       InstanceMethod("toOffsetFromUtc", &QDateTimeWrap::toOffsetFromUtc),
       InstanceMethod("toSecsSinceEpoch", &QDateTimeWrap::toSecsSinceEpoch),
       InstanceMethod("toString$", &QDateTimeWrap::toString),
       InstanceMethod("toTimeSpec", &QDateTimeWrap::toTimeSpec),
       InstanceMethod("toUTC", &QDateTimeWrap::toUTC),
       StaticMethod("currentDateTime",
                    &StaticDateTimeWrapMethods::currentDateTime),
       StaticMethod("currentDateTimeUtc",
                    &StaticDateTimeWrapMethods::currentDateTimeUtc),
       StaticMethod("currentMSecsSinceEpoch",
                    &StaticDateTimeWrapMethods::currentMSecsSinceEpoch),
       StaticMethod("currentSecsSinceEpoch",
                    &StaticDateTimeWrapMethods::currentSecsSinceEpoch),
       StaticMethod("fromString", &StaticDateTimeWrapMethods::fromString),
       StaticMethod("fromQVariant", &StaticDateTimeWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDateTimeWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDateTimeWrap::QDateTimeWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDateTimeWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    Napi::Object dateObject = info[0].As<Napi::Object>();
    Napi::Object timeObject = info[1].As<Napi::Object>();
    QDateWrap* dateWrap = Napi::ObjectWrap<QDateWrap>::Unwrap(dateObject);
    QTimeWrap* timeWrap = Napi::ObjectWrap<QTimeWrap>::Unwrap(timeObject);
    this->instance = std::make_unique<QDateTime>(
        *dateWrap->getInternalInstance(), *timeWrap->getInternalInstance());
  } else if (info.Length() == 1) {
    this->instance = std::unique_ptr<QDateTime>(
        info[0].As<Napi::External<QDateTime>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QDateTime>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDateTimeWrap::~QDateTimeWrap() { this->instance.reset(); }

QDateTime* QDateTimeWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QDateTimeWrap::addDays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 ndays = info[0].As<Napi::Number>().Int64Value();
  QDateTime result = this->instance->addDays(ndays);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::addMSecs(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 msecs = info[0].As<Napi::Number>().Int64Value();
  QDateTime result = this->instance->addMSecs(msecs);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::addMonths(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int nmonths = info[0].As<Napi::Number>().Int32Value();
  QDateTime result = this->instance->addMonths(nmonths);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::addSecs(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 s = info[0].As<Napi::Number>().Int64Value();
  QDateTime result = this->instance->addSecs(s);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::addYears(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int nyears = info[0].As<Napi::Number>().Int32Value();
  QDateTime result = this->instance->addYears(nyears);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::date(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDate date = this->instance->date();
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value QDateTimeWrap::daysTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object otherObject = info[0].As<Napi::Object>();
  QDateTimeWrap* otherWrap =
      Napi::ObjectWrap<QDateTimeWrap>::Unwrap(otherObject);
  qint64 result = this->instance->daysTo(*otherWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QDateTimeWrap::isDaylightTime(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isDaylightTime());
}

Napi::Value QDateTimeWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isNull());
}

Napi::Value QDateTimeWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isValid());
}

Napi::Value QDateTimeWrap::msecsTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object otherObject = info[0].As<Napi::Object>();
  QDateTimeWrap* otherWrap =
      Napi::ObjectWrap<QDateTimeWrap>::Unwrap(otherObject);
  qint64 result = this->instance->msecsTo(*otherWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QDateTimeWrap::offsetFromUtc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->offsetFromUtc());
}

Napi::Value QDateTimeWrap::secsTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object otherObject = info[0].As<Napi::Object>();
  QDateTimeWrap* otherWrap =
      Napi::ObjectWrap<QDateTimeWrap>::Unwrap(otherObject);
  qint64 result = this->instance->secsTo(*otherWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QDateTimeWrap::setDate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object dateObject = info[0].As<Napi::Object>();
  QDateWrap* dateWrap = Napi::ObjectWrap<QDateWrap>::Unwrap(dateObject);
  this->instance->setDate(*dateWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QDateTimeWrap::setMSecsSinceEpoch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 msecs = info[0].As<Napi::Number>().Int64Value();
  this->instance->setMSecsSinceEpoch(msecs);
  return env.Null();
}

Napi::Value QDateTimeWrap::setOffsetFromUtc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int offsetSeconds = info[0].As<Napi::Number>().Int32Value();
  this->instance->setOffsetFromUtc(offsetSeconds);
  return env.Null();
}

Napi::Value QDateTimeWrap::setSecsSinceEpoch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 secs = info[0].As<Napi::Number>().Int64Value();
  this->instance->setSecsSinceEpoch(secs);
  return env.Null();
}

Napi::Value QDateTimeWrap::setTime(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object timeObject = info[0].As<Napi::Object>();
  QTimeWrap* timeWrap = Napi::ObjectWrap<QTimeWrap>::Unwrap(timeObject);
  this->instance->setTime(*timeWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QDateTimeWrap::setTimeSpec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int spec = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
  return env.Null();
}

Napi::Value QDateTimeWrap::time(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QTime time = this->instance->time();
  auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(
      env, new QTime(time.hour(), time.minute(), time.second(), time.msec()))});
  return instance;
}

Napi::Value QDateTimeWrap::timeSpec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::TimeSpec spec = this->instance->timeSpec();
  return Napi::Value::From(env, static_cast<int>(spec));
}

Napi::Value QDateTimeWrap::toLocalTime(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDateTime local = this->instance->toLocalTime();
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(local))});
  return instance;
}

Napi::Value QDateTimeWrap::toMSecsSinceEpoch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->toMSecsSinceEpoch());
}

Napi::Value QDateTimeWrap::toOffsetFromUtc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int offsetSeconds = info[0].As<Napi::Number>().Int32Value();
  QDateTime result = this->instance->toOffsetFromUtc(offsetSeconds);
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::toSecsSinceEpoch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->toSecsSinceEpoch());
}

Napi::Value QDateTimeWrap::toString(const Napi::CallbackInfo& info) {
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

Napi::Value QDateTimeWrap::toTimeSpec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int spec = info[0].As<Napi::Number>().Int32Value();
  QDateTime result =
      this->instance->toTimeSpec(static_cast<Qt::TimeSpec>(spec));
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value QDateTimeWrap::toUTC(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDateTime result = this->instance->toUTC();
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value StaticDateTimeWrapMethods::currentDateTime(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDateTime result = QDateTime::currentDateTime();
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value StaticDateTimeWrapMethods::currentDateTimeUtc(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDateTime result = QDateTime::currentDateTimeUtc();
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(result))});
  return instance;
}

Napi::Value StaticDateTimeWrapMethods::currentMSecsSinceEpoch(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, QDateTime::currentMSecsSinceEpoch());
}

Napi::Value StaticDateTimeWrapMethods::currentSecsSinceEpoch(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, QDateTime::currentSecsSinceEpoch());
}

Napi::Value StaticDateTimeWrapMethods::fromString(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string dateTimeString = info[0].As<Napi::String>().Utf8Value();

  QDateTime dateTime;
  if (info[1].IsString()) {
    std::string format = info[1].As<Napi::String>().Utf8Value();
    dateTime = QDateTime::fromString(QString::fromUtf8(dateTimeString.c_str()),
                                     QString::fromUtf8(format.c_str()));
  } else {
    int format = info[1].As<Napi::Number>().Int32Value();
    dateTime = QDateTime::fromString(QString::fromUtf8(dateTimeString.c_str()),
                                     static_cast<Qt::DateFormat>(format));
  }
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(dateTime))});
  return instance;
}

Napi::Value StaticDateTimeWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QDateTime datetime = variant->value<QDateTime>();
  auto instance = QDateTimeWrap::constructor.New(
      {Napi::External<QDateTime>::New(env, new QDateTime(datetime))});
  return instance;
}
