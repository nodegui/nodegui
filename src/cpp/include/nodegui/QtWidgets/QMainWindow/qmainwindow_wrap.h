#pragma once

#include <napi.h>
#include <stdlib.h>
#include "nmainwindow.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QMainWindowWrap : public  Napi::ObjectWrap<QMainWindowWrap>{
private:
 std::unique_ptr<NMainWindow> instance;
public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMainWindowWrap(const Napi::CallbackInfo& info);
  ~QMainWindowWrap();
  NMainWindow* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setCentralWidget(const Napi::CallbackInfo& info);
  Napi::Value setMenuBar(const Napi::CallbackInfo& info);
  Napi::Value menuBar(const Napi::CallbackInfo& info);
  Napi::Value setMenuWidget(const Napi::CallbackInfo& info);
  Napi::Value center(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};

