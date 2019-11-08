#pragma once

#include <napi.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nshortcut.hpp"

class QShortcutWrap : public Napi::ObjectWrap<QShortcutWrap> {
 private:
  QPointer<NShortcut> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QShortcutWrap(const Napi::CallbackInfo& info);
  ~QShortcutWrap();
  NShortcut* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setEnabled(const Napi::CallbackInfo& info);
  Napi::Value setAutoRepeat(const Napi::CallbackInfo& info);
  Napi::Value setKey(const Napi::CallbackInfo& info);
  Napi::Value setContext(const Napi::CallbackInfo& info);

  EVENTWIDGET_WRAPPED_METHODS_DECLARATION
};
