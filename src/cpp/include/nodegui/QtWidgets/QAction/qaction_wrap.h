#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "naction.hpp"
class DLL_EXPORT QActionWrap : public Napi::ObjectWrap<QActionWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NAction> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QActionWrap(const Napi::CallbackInfo& info);
  ~QActionWrap();
  NAction* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value setEnabled(const Napi::CallbackInfo& info);
  Napi::Value setIcon(const Napi::CallbackInfo& info);
  Napi::Value setMenu(const Napi::CallbackInfo& info);
  Napi::Value setShortcut(const Napi::CallbackInfo& info);
  Napi::Value setShortcutContext(const Napi::CallbackInfo& info);
  Napi::Value isCheckable(const Napi::CallbackInfo& info);
  Napi::Value setCheckable(const Napi::CallbackInfo& info);
  Napi::Value isChecked(const Napi::CallbackInfo& info);
  Napi::Value setChecked(const Napi::CallbackInfo& info);
  Napi::Value isSeparator(const Napi::CallbackInfo& info);
  Napi::Value setSeparator(const Napi::CallbackInfo& info);
  Napi::Value setFont(const Napi::CallbackInfo& info);
};
