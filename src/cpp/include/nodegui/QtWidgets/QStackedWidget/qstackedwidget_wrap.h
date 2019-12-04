#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QStackedWidget/nstackedwidget.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QStackedWidgetWrap : public Napi::ObjectWrap<QStackedWidgetWrap> {
 private:
  QPointer<NStackedWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QStackedWidgetWrap(const Napi::CallbackInfo &info);
  ~QStackedWidgetWrap();
  NStackedWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo &info);
  Napi::Value removeWidget(const Napi::CallbackInfo &info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo &info);
  Napi::Value currentIndex(const Napi::CallbackInfo &info);
  Napi::Value setCurrentWidget(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
