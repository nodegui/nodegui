#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTabWidget/ntabwidget.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QTabWidgetWrap : public Napi::ObjectWrap<QTabWidgetWrap> {
 private:
  QPointer<NTabWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTabWidgetWrap(const Napi::CallbackInfo &info);
  ~QTabWidgetWrap();
  NTabWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addTab(const Napi::CallbackInfo &info);
  Napi::Value setTabPosition(const Napi::CallbackInfo &info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo &info);
  Napi::Value currentIndex(const Napi::CallbackInfo &info);
  Napi::Value removeTab(const Napi::CallbackInfo &info);
  Napi::Value setTabsClosable(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
