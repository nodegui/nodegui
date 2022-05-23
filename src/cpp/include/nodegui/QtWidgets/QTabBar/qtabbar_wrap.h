#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QTabBar/ntabbar.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QTabBarWrap : public Napi::ObjectWrap<QTabBarWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QTabBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTabBarWrap(const Napi::CallbackInfo& info);
  ~QTabBarWrap();
  QTabBar* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setAccessibleTabName(const Napi::CallbackInfo& info);
  Napi::Value accessibleTabName(const Napi::CallbackInfo& info);
  Napi::Value addTab(const Napi::CallbackInfo& info);
  Napi::Value insertTab(const Napi::CallbackInfo& info);
  Napi::Value setTabEnabled(const Napi::CallbackInfo& info);
  Napi::Value isTabEnabled(const Napi::CallbackInfo& info);
  Napi::Value moveTab(const Napi::CallbackInfo& info);
  Napi::Value removeTab(const Napi::CallbackInfo& info);
  Napi::Value setTabButton(const Napi::CallbackInfo& info);
  Napi::Value setTabData(const Napi::CallbackInfo& info);
  Napi::Value tabData(const Napi::CallbackInfo& info);
  Napi::Value setTabIcon(const Napi::CallbackInfo& info);
  Napi::Value tabIcon(const Napi::CallbackInfo& info);
  Napi::Value setTabText(const Napi::CallbackInfo& info);
  Napi::Value tabText(const Napi::CallbackInfo& info);
  Napi::Value setTabTextColor(const Napi::CallbackInfo& info);
  Napi::Value tabTextColor(const Napi::CallbackInfo& info);
  Napi::Value setTabToolTip(const Napi::CallbackInfo& info);
  Napi::Value tabToolTip(const Napi::CallbackInfo& info);
  Napi::Value setTabWhatsThis(const Napi::CallbackInfo& info);
  Napi::Value tabWhatsThis(const Napi::CallbackInfo& info);
  Napi::Value tabAt(const Napi::CallbackInfo& info);
  Napi::Value tabRect(const Napi::CallbackInfo& info);
};
