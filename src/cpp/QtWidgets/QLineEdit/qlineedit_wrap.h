#pragma once

#include <napi.h>
#include <stdlib.h>
#include <stdlib.h>
#include "nlineedit.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"

class QLineEditWrap : public  Napi::ObjectWrap<QLineEditWrap>{
 private:
  std::unique_ptr<NLineEdit> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLineEditWrap(const Napi::CallbackInfo& info);
  ~QLineEditWrap();
  NLineEdit* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setPlaceholderText(const Napi::CallbackInfo &info);
  Napi::Value setReadOnly(const Napi::CallbackInfo &info);
  Napi::Value clear(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
 
};

