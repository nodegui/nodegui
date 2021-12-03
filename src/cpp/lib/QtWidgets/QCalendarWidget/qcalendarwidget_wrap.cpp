#include "QtWidgets/QCalendarWidget/qcalendarwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QCalendarWidgetWrap::constructor;

Napi::Object QCalendarWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCalendarWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("monthShown", &QCalendarWidgetWrap::monthShown),
       InstanceMethod("yearShown", &QCalendarWidgetWrap::yearShown),
       InstanceMethod("setCurrentPage", &QCalendarWidgetWrap::setCurrentPage),
       InstanceMethod("showNextMonth", &QCalendarWidgetWrap::showNextMonth),
       InstanceMethod("showNextYear", &QCalendarWidgetWrap::showNextYear),
       InstanceMethod("showPreviousMonth",
                      &QCalendarWidgetWrap::showPreviousMonth),
       InstanceMethod("showPreviousYear",
                      &QCalendarWidgetWrap::showPreviousYear),
       InstanceMethod("showSelectedDate",
                      &QCalendarWidgetWrap::showSelectedDate),
       InstanceMethod("showToday", &QCalendarWidgetWrap::showToday),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QCalendarWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NCalendarWidget *QCalendarWidgetWrap::getInternalInstance() {
  return this->instance;
}

QCalendarWidgetWrap::~QCalendarWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

QCalendarWidgetWrap::QCalendarWidgetWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QCalendarWidgetWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap *parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NCalendarWidget(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NCalendarWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QCalendarWidgetWrap::monthShown(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->monthShown());
}

Napi::Value QCalendarWidgetWrap::yearShown(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->yearShown());
}

Napi::Value QCalendarWidgetWrap::setCurrentPage(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();

  int year = info[0].As<Napi::Number>().Int32Value();
  int month = info[1].As<Napi::Number>().Int32Value();
  this->instance->setCurrentPage(year, month);
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showNextMonth(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showNextMonth();
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showNextYear(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showNextYear();
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showPreviousMonth(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showPreviousMonth();
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showPreviousYear(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showPreviousYear();
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showSelectedDate(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showSelectedDate();
  return env.Null();
}

Napi::Value QCalendarWidgetWrap::showToday(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->showToday();
  return env.Null();
}