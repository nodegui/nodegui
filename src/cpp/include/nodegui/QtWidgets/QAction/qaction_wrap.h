#pragma once

#include <napi.h>
#include "naction.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QActionWrap : public  Napi::ObjectWrap<QActionWrap>{
 private:
  NAction* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QActionWrap(const Napi::CallbackInfo& info);
  ~QActionWrap();
  NAction* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
 

  EVENTWIDGET_WRAPPED_METHODS_DECLARATION
};

