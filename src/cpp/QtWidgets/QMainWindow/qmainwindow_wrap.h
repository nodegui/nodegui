#pragma once

#include <napi.h>
#include "nmainwindow.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"


class QMainWindowWrap : public  Napi::ObjectWrap<QMainWindowWrap>{
private:
 NMainWindow* instance;

public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMainWindowWrap(const Napi::CallbackInfo& info);
  ~QMainWindowWrap();
  NMainWindow* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setCentralWidget(const Napi::CallbackInfo& info);
  Napi::Value setFixedSize(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

