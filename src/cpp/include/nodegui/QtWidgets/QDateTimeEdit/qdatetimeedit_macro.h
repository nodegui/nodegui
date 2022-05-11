#pragma once

#include "QtCore/QDate/qdate_wrap.h"
#include "QtCore/QDateTime/qdatetime_wrap.h"
#include "QtCore/QTime/qtime_wrap.h"
#include "QtWidgets/QAbstractSpinBox/qabstractspinbox_macro.h"
#include "QtWidgets/QCalendarWidget/qcalendarwidget_wrap.h"

/*

    This macro adds common QDateTimeEdit exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
#define QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION                            \
  QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION                               \
  Napi::Value setCalendarWidget(const Napi::CallbackInfo &info) {            \
    Napi::Env env = info.Env();                                              \
    Napi::Object calendarWidgetObject = info[0].As<Napi::Object>();          \
    QCalendarWidgetWrap *calendarWidgetWrap =                                \
        Napi::ObjectWrap<QCalendarWidgetWrap>::Unwrap(calendarWidgetObject); \
    this->instance->setCalendarWidget(                                       \
        calendarWidgetWrap->getInternalInstance());                          \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value calendarWidget(const Napi::CallbackInfo &info) {               \
    Napi::Env env = info.Env();                                              \
    QObject *calendarWidget = this->instance->calendarWidget();              \
    if (calendarWidget) {                                                    \
      return WrapperCache::instance.getWrapper(env, calendarWidget);         \
    } else {                                                                 \
      return env.Null();                                                     \
    }                                                                        \
  }

#endif  // QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION

#ifndef QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE
#define QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)        \
  QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)           \
  InstanceMethod("setCalendarWidget", &WidgetWrapName::setCalendarWidget), \
      InstanceMethod("calendarWidget", &WidgetWrapName::calendarWidget),

#endif  // QDATETIMEEDIT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QDATETIMEEDIT_SIGNALS
#define QDATETIMEEDIT_SIGNALS                                                  \
  QABSTRACTSPINBOX_SIGNALS                                                     \
  QObject::connect(this, &QDateTimeEdit::dateChanged, [=](const QDate &date) { \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(    \
        env, new QDate(date.year(), date.month(), date.day()))});              \
    this->emitOnNode.Call({Napi::String::New(env, "dateChanged"), instance});  \
  });                                                                          \
  QObject::connect(                                                            \
      this, &QDateTimeEdit::dateTimeChanged, [=](const QDateTime &datetime) {  \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto instance = QDateTimeWrap::constructor.New(                        \
            {Napi::External<QDateTime>::New(env, new QDateTime(datetime))});   \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "dateTimeChanged"), instance});            \
      });                                                                      \
  QObject::connect(this, &QDateTimeEdit::timeChanged, [=](const QTime &time) { \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    auto instance = QTimeWrap::constructor.New({Napi::External<QTime>::New(    \
        env,                                                                   \
        new QTime(time.hour(), time.minute(), time.second(), time.msec()))});  \
    this->emitOnNode.Call({Napi::String::New(env, "timeChanged"), instance});  \
  });

#endif  // QDATETIMEEDIT_SIGNALS
