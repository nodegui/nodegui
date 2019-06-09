#pragma once

#include <napi.h>
#include "nradiobutton.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"
#include "src/cpp/core/YogaWidget/yogawidget_macro.h"

class QRadioButtonWrap : public  Napi::ObjectWrap<QRadioButtonWrap>{
 private:
  NRadioButton* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRadioButtonWrap(const Napi::CallbackInfo& info);
  ~QRadioButtonWrap();
  NRadioButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION
 
};

 