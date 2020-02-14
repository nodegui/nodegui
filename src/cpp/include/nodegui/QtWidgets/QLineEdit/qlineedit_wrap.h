#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlineedit.hpp"

class DLL_EXPORT QLineEditWrap : public Napi::ObjectWrap<QLineEditWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NLineEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLineEditWrap(const Napi::CallbackInfo& info);
  ~QLineEditWrap();
  NLineEdit* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setPlaceholderText(const Napi::CallbackInfo& info);
  Napi::Value setReadOnly(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value setEchoMode(const Napi::CallbackInfo& info);
};
