#pragma once

#include <napi.h>
#include <stdlib.h>
#include <QLayout>

#include "QtWidgets/QLayout/qlayout_macro.h"

//ABSTRACT CLASS
class QLayoutWrap : public  Napi::ObjectWrap<QLayoutWrap>{
 private:
  std::unique_ptr<QLayout> instance;
 public:
  static void init(Napi::Env env);
  QLayoutWrap(const Napi::CallbackInfo& info);
  ~QLayoutWrap();
  QLayout* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};

