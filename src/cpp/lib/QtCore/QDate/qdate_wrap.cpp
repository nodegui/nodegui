#include "QtCore/QDate/qdate_wrap.h"

#include <QDate>

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QDateWrap::constructor;

Napi::Object QDateWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDate";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addDays", &QDateWrap::addDays),
       InstanceMethod("addMonths", &QDateWrap::addMonths),
       InstanceMethod("addYears", &QDateWrap::addYears),
       InstanceMethod("day", &QDateWrap::day),
       InstanceMethod("dayOfWeek", &QDateWrap::dayOfWeek),
       InstanceMethod("dayOfYear", &QDateWrap::dayOfYear),
       InstanceMethod("daysInMonth", &QDateWrap::daysInMonth),
       InstanceMethod("daysInYear", &QDateWrap::daysInYear),
       InstanceMethod("daysTo", &QDateWrap::daysTo),
       InstanceMethod("isNull", &QDateWrap::isNull),
       InstanceMethod("isValid", &QDateWrap::isValid),
       InstanceMethod("month", &QDateWrap::month),
       InstanceMethod("setDate", &QDateWrap::setDate),
       InstanceMethod("toJulianDay", &QDateWrap::toJulianDay),
       InstanceMethod("toString$", &QDateWrap::toString),
       InstanceMethod("year", &QDateWrap::year),
       StaticMethod("currentDate", &StaticDateWrapMethods::currentDate),
       StaticMethod("fromJulianDay", &StaticDateWrapMethods::fromJulianDay),
       StaticMethod("isLeapYear", &StaticDateWrapMethods::isLeapYear),
       StaticMethod("isValid", &StaticDateWrapMethods::isValid),
       StaticMethod("fromQVariant", &StaticDateWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDateWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDateWrap::QDateWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDateWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 3) {
    int y = info[0].As<Napi::Number>().Int32Value();
    int m = info[1].As<Napi::Number>().Int32Value();
    int d = info[2].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QDate>(y, m, d);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QDate>(info[0].As<Napi::External<QDate>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QDate>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDateWrap::~QDateWrap() { this->instance.reset(); }

QDate* QDateWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QDateWrap::addDays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 ndays = info[0].As<Napi::Number>().Int64Value();
  QDate date = this->instance->addDays(ndays);
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value QDateWrap::addMonths(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int nmonths = info[0].As<Napi::Number>().Int32Value();
  QDate date = this->instance->addMonths(nmonths);
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value QDateWrap::addYears(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int nyears = info[0].As<Napi::Number>().Int32Value();
  QDate date = this->instance->addYears(nyears);
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value QDateWrap::day(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->day());
}

Napi::Value QDateWrap::dayOfWeek(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->dayOfWeek());
}

Napi::Value QDateWrap::dayOfYear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->dayOfYear());
}

Napi::Value QDateWrap::daysInMonth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->daysInMonth());
}

Napi::Value QDateWrap::daysInYear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->daysInYear());
}

Napi::Value QDateWrap::daysTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object dObject = info[0].As<Napi::Object>();
  QDateWrap* dWrap = Napi::ObjectWrap<QDateWrap>::Unwrap(dObject);
  qint64 result = this->instance->daysTo(*dWrap->getInternalInstance());
  return Napi::Value::From(env, result);
}

Napi::Value QDateWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isNull());
}

Napi::Value QDateWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->isValid());
}

Napi::Value QDateWrap::month(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->month());
}

Napi::Value QDateWrap::setDate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int year = info[0].As<Napi::Number>().Int32Value();
  int month = info[1].As<Napi::Number>().Int32Value();
  int day = info[2].As<Napi::Number>().Int32Value();
  bool result = this->instance->setDate(year, month, day);
  return Napi::Value::From(env, result);
}

Napi::Value QDateWrap::toJulianDay(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->toJulianDay());
}

Napi::Value QDateWrap::toString(const Napi::CallbackInfo& info) {
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

Napi::Value QDateWrap::year(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->year());
}

Napi::Value StaticDateWrapMethods::currentDate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QDate date = QDate::currentDate();
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value StaticDateWrapMethods::fromJulianDay(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  qint64 jd = info[0].As<Napi::Number>().Int64Value();
  QDate date = QDate::fromJulianDay(jd);
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}

Napi::Value StaticDateWrapMethods::isLeapYear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int year = info[0].As<Napi::Number>().Int32Value();
  return Napi::Value::From(env, QDate::isLeapYear(year));
}

Napi::Value StaticDateWrapMethods::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int year = info[0].As<Napi::Number>().Int32Value();
  int month = info[1].As<Napi::Number>().Int32Value();
  int day = info[2].As<Napi::Number>().Int32Value();

  return Napi::Value::From(env, QDate::isValid(year, month, day));
}

Napi::Value StaticDateWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QDate date = variant->value<QDate>();
  auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
      env, new QDate(date.year(), date.month(), date.day()))});
  return instance;
}
