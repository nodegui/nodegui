#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QStackedWidget/nstackedwidget.hpp"

class DLL_EXPORT QStackedWidgetWrap
    : public Napi::ObjectWrap<QStackedWidgetWrap> {
  QFRAME_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QStackedWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QStackedWidgetWrap(const Napi::CallbackInfo &info);
  ~QStackedWidgetWrap();
  QStackedWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo &info);
  Napi::Value removeWidget(const Napi::CallbackInfo &info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo &info);
  Napi::Value currentIndex(const Napi::CallbackInfo &info);
  Napi::Value setCurrentWidget(const Napi::CallbackInfo &info);
};
