#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nsystemtrayicon.hpp"

class DLL_EXPORT QSystemTrayIconWrap
    : public Napi::ObjectWrap<QSystemTrayIconWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION
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
  Napi::Value showMessage(const Napi::CallbackInfo& info);
};
