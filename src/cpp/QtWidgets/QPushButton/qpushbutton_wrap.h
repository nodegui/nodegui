#pragma once

#include <napi.h>
#include <napi-thread-safe-callback.hpp>
#include "npushbutton.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  NPushButton* instance;
  std::unique_ptr<ThreadSafeCallback> emitOnNode;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  NPushButton* getInternalInstance();
  Napi::Value setupSignalListeners(const Napi::CallbackInfo& info);
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};


