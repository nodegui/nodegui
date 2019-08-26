#pragma once

#include <napi.h>
#include "nplaintextedit.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"
#include "src/cpp/QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"

class QPlainTextEditWrap : public  Napi::ObjectWrap<QPlainTextEditWrap>{
 private:
  NPlainTextEdit* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPlainTextEditWrap(const Napi::CallbackInfo& info);
  ~QPlainTextEditWrap();
  NPlainTextEdit* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods

  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
  Napi::Value setPlainText(const Napi::CallbackInfo& info);
  Napi::Value toPlainText(const Napi::CallbackInfo &info);
  Napi::Value setReadOnly(const Napi::CallbackInfo &info);
  Napi::Value clear(const Napi::CallbackInfo &info);
};

