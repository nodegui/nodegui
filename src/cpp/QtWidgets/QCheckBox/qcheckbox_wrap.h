#pragma once

#include <napi.h>
#include "ncheckbox.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QCheckBoxWrap : public  Napi::ObjectWrap<QCheckBoxWrap>{
 private:
  NCheckBox* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCheckBoxWrap(const Napi::CallbackInfo& info);
  ~QCheckBoxWrap();
  NCheckBox* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

