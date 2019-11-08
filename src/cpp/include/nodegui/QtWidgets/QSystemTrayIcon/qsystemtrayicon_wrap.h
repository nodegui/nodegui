#pragma once

#include <napi.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nsystemtrayicon.hpp"
class QSystemTrayIconWrap : public Napi::ObjectWrap<QSystemTrayIconWrap> {
 private:
  QPointer<NSystemTrayIcon> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSystemTrayIconWrap(const Napi::CallbackInfo& info);
  ~QSystemTrayIconWrap();
  NSystemTrayIcon* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value show(const Napi::CallbackInfo& info);
  Napi::Value hide(const Napi::CallbackInfo& info);
  Napi::Value setIcon(const Napi::CallbackInfo& info);
  Napi::Value isVisible(const Napi::CallbackInfo& info);
  Napi::Value setToolTip(const Napi::CallbackInfo& info);
  Napi::Value setContextMenu(const Napi::CallbackInfo& info);

  EVENTWIDGET_WRAPPED_METHODS_DECLARATION
};
