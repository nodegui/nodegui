#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QCalendarWidget/ncalendarwidget.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QCalendarWidgetWrap
    : public Napi::ObjectWrap<QCalendarWidgetWrap> {
 private:
  QPointer<NCalendarWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCalendarWidgetWrap(const Napi::CallbackInfo &info);
  ~QCalendarWidgetWrap();
  NCalendarWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value monthShown(const Napi::CallbackInfo &info);
  Napi::Value yearShown(const Napi::CallbackInfo &info);
  Napi::Value setCurrentPage(const Napi::CallbackInfo &info);
  Napi::Value showNextMonth(const Napi::CallbackInfo &info);
  Napi::Value showNextYear(const Napi::CallbackInfo &info);
  Napi::Value showPreviousMonth(const Napi::CallbackInfo &info);
  Napi::Value showPreviousYear(const Napi::CallbackInfo &info);
  Napi::Value showSelectedDate(const Napi::CallbackInfo &info);
  Napi::Value showToday(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
