#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QTabWidget/ntabwidget.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QTabWidgetWrap : public Napi::ObjectWrap<QTabWidgetWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QTabWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTabWidgetWrap(const Napi::CallbackInfo &info);
  ~QTabWidgetWrap();
  QTabWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addTab_3(const Napi::CallbackInfo &info);
  Napi::Value addTab_2(const Napi::CallbackInfo &info);
  Napi::Value insertTab_3(const Napi::CallbackInfo &info);
  Napi::Value insertTab_4(const Napi::CallbackInfo &info);
  Napi::Value indexOf(const Napi::CallbackInfo &info);
  Napi::Value setTabPosition(const Napi::CallbackInfo &info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo &info);
  Napi::Value currentIndex(const Napi::CallbackInfo &info);
  Napi::Value removeTab(const Napi::CallbackInfo &info);
  Napi::Value setTabsClosable(const Napi::CallbackInfo &info);
  Napi::Value setTabText(const Napi::CallbackInfo &info);
  Napi::Value setTabIcon(const Napi::CallbackInfo &info);
  Napi::Value widget(const Napi::CallbackInfo &info);
};
