#pragma once

#include <napi.h>
#include <stdlib.h>
#include "nradiobutton.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"


class QRadioButtonWrap : public  Napi::ObjectWrap<QRadioButtonWrap>{
 private:
  std::unique_ptr<NRadioButton> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRadioButtonWrap(const Napi::CallbackInfo& info);
  ~QRadioButtonWrap();
  NRadioButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION 
};

 