#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nplaintextedit.hpp"

class DLL_EXPORT QPlainTextEditWrap
    : public Napi::ObjectWrap<QPlainTextEditWrap> {
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NPlainTextEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPlainTextEditWrap(const Napi::CallbackInfo &info);
  ~QPlainTextEditWrap();
  NPlainTextEdit *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods

  Napi::Value setPlainText(const Napi::CallbackInfo &info);
  Napi::Value setPlaceholderText(const Napi::CallbackInfo &info);
  Napi::Value toPlainText(const Napi::CallbackInfo &info);
  Napi::Value setReadOnly(const Napi::CallbackInfo &info);
  Napi::Value clear(const Napi::CallbackInfo &info);
  Napi::Value setWordWrapMode(const Napi::CallbackInfo &info);
  Napi::Value wordWrapMode(const Napi::CallbackInfo &info);
  Napi::Value setLineWrapMode(const Napi::CallbackInfo &info);
  Napi::Value lineWrapMode(const Napi::CallbackInfo &info);
  Napi::Value insertPlainText(const Napi::CallbackInfo &info);
};
