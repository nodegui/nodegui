#pragma once

#include <napi.h>
#include "nprogressbar.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"
#include "src/cpp/core/YogaWidget/yogawidget_macro.h"

class QProgressBarWrap : public  Napi::ObjectWrap<QProgressBarWrap>{
 private:
  NProgressBar* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QProgressBarWrap(const Napi::CallbackInfo& info);
  ~QProgressBarWrap();
  NProgressBar* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION
};


