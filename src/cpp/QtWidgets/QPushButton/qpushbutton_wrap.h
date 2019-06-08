#pragma once

#include <napi.h>
#include "npushbutton.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"
#include "napi-thread-safe-callback.hpp"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  NPushButton* instance;
  std::unique_ptr<ThreadSafeCallback> emitterEmit;
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
    this->emitterEmit = std::make_unique<ThreadSafeCallback>(info[0].As<Napi::Function>());
   
    NPushButton::connect(this->instance, &QPushButton::clicked,
                [=](bool val) { 
                    this->emitterEmit->call([=](Napi::Env env, std::vector<napi_value>& args) {
                        args = {  Napi::String::New(env, "clicked"), Napi::Boolean::New(env, val) };
                    });
                }
        );
    return env.Null();
  }
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};


