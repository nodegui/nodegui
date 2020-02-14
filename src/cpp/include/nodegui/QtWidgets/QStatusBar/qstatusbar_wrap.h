#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nstatusbar.hpp"

class DLL_EXPORT QStatusBarWrap : public Napi::ObjectWrap<QStatusBarWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NStatusBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  static Napi::FunctionReference constructor;
  static Napi::Value fromQStatusBar(Napi::Env env, QStatusBar *statusBar);

  QStatusBarWrap(const Napi::CallbackInfo &info);
  ~QStatusBarWrap();

  NStatusBar *getInternalInstance();

  // Wrapped methods
  Napi::Value addPermanentWidget(const Napi::CallbackInfo &info);
  Napi::Value addWidget(const Napi::CallbackInfo &info);
  Napi::Value clearMessage(const Napi::CallbackInfo &info);
  Napi::Value currentMessage(const Napi::CallbackInfo &info);
  Napi::Value insertPermanentWidget(const Napi::CallbackInfo &info);
  Napi::Value insertWidget(const Napi::CallbackInfo &info);
  Napi::Value isSizeGripEnabled(const Napi::CallbackInfo &info);
  Napi::Value removeWidget(const Napi::CallbackInfo &info);
  Napi::Value showMessage(const Napi::CallbackInfo &info);
  Napi::Value setSizeGripEnabled(const Napi::CallbackInfo &info);
};