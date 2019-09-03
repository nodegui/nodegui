#pragma once

#include <napi.h>
#include <stdlib.h>
#include <QGridLayout>
#include "src/cpp/QtWidgets/QLayout/qlayout_macro.h"

class QGridLayoutWrap : public  Napi::ObjectWrap<QGridLayoutWrap>{
 private:
  std::unique_ptr<QGridLayout> instance;
  
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGridLayoutWrap(const Napi::CallbackInfo& info);
  ~QGridLayoutWrap();
  QGridLayout* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};

