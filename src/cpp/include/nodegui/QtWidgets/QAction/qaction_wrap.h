#pragma once

#include <napi.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "naction.hpp"
class QActionWrap : public Napi::ObjectWrap<QActionWrap> {
 private:
  QPointer<NAction> instance;

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

  EVENTWIDGET_WRAPPED_METHODS_DECLARATION
};
