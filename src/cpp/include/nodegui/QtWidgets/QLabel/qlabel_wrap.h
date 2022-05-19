#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlabel.hpp"

class DLL_EXPORT QLabelWrap : public Napi::ObjectWrap<QLabelWrap> {
  QFRAME_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QLabel> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLabelWrap(const Napi::CallbackInfo& info);
  ~QLabelWrap();
  QLabel* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setSelection(const Napi::CallbackInfo& info);
  Napi::Value selectionStart(const Napi::CallbackInfo& info);
  Napi::Value setBuddy(const Napi::CallbackInfo& info);
  Napi::Value buddy(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value setMovie(const Napi::CallbackInfo& info);
  Napi::Value setNumDouble(const Napi::CallbackInfo& info);
  Napi::Value setNumInt(const Napi::CallbackInfo& info);
  Napi::Value setPicture(const Napi::CallbackInfo& info);
  Napi::Value setPixmap(const Napi::CallbackInfo& info);
};
