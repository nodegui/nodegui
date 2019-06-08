#pragma once

#include <napi.h>
#include "npushbutton.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"
#include "napi-thread-safe-callback.hpp"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  NPushButton* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  NPushButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
   
  Napi::Value setNodeEventEmiiter(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    std::unique_ptr<ThreadSafeCallback> emitterEmit = std::make_unique<ThreadSafeCallback>(info[0].As<Napi::Function>());
    this->instance->setNodeEmitterEmit(emitterEmit);
    emitterEmit.release();
    return env.Null();
  }
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};


