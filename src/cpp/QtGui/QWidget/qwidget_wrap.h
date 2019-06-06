#pragma once

#include "qwidget_macro.h"
#include "src/cpp/core/YogaWidget/yogawidget_macro.h"
#include <napi.h>
#include "nwidget.h"

class QWidgetWrap : public  Napi::ObjectWrap<QWidgetWrap>{
 private:
  NWidget* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QWidgetWrap(const Napi::CallbackInfo& info);
  ~QWidgetWrap();
  NWidget* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  QWIDGET_WRAPPED_METHODS_DECLARATION
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION
};

