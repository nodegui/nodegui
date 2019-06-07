#pragma once

#include <napi.h>
#include "nlineedit.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QLineEditWrap : public  Napi::ObjectWrap<QLineEditWrap>{
 private:
  NLineEdit* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLineEditWrap(const Napi::CallbackInfo& info);
  ~QLineEditWrap();
  NLineEdit* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

