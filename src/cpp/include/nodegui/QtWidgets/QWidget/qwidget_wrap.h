#pragma once

#include "QtWidgets/QWidget/qwidget_macro.h"
#include <napi.h>
#include <stdlib.h>
#include "nwidget.hpp"

class QWidgetWrap : public  Napi::ObjectWrap<QWidgetWrap>{
 private:
  std::unique_ptr<NWidget> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QWidgetWrap(const Napi::CallbackInfo& info);
  ~QWidgetWrap();
  NWidget* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

