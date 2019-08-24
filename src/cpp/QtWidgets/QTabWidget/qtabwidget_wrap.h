#pragma once

#include <napi.h>
#include "ntabwidget.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"
#include "src/cpp/Extras/Utils/nutils.h"

class QTabWidgetWrap : public  Napi::ObjectWrap<QTabWidgetWrap> {
 private:
  NTabWidget* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTabWidgetWrap(const Napi::CallbackInfo &info);
  ~QTabWidgetWrap();
  NTabWidget *getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value addTab(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
