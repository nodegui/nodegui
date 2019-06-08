#pragma once

#include <napi.h>
#include "npushbutton.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"
#include "napi-thread-safe-callback.hpp"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  NPushButton* instance;
  std::unique_ptr<ThreadSafeCallback> nodeEmit;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  NPushButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
   
  Napi::Value setupEventListeners(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    this->nodeEmit = std::make_unique<ThreadSafeCallback>(info[0].As<Napi::Function>());
   
    NPushButton::connect(this->instance, &QPushButton::clicked,
                [=](bool val) { 
                    this->nodeEmit->call([=](Napi::Env env, std::vector<napi_value>& args) {
                        args = {  Napi::String::New(env, "clicked"), Napi::Value::From(env,val) };
                    });
                }
        );
    NPushButton::connect(this->instance, &QPushButton::released,
                [=]() { 
                    this->nodeEmit->call([=](Napi::Env env, std::vector<napi_value>& args) {
                        args = {  Napi::String::New(env, "released") };
                    });
                }
        );
    NPushButton::connect(this->instance, &QPushButton::pressed,
            [=]() { 
                this->nodeEmit->call([=](Napi::Env env, std::vector<napi_value>& args) {
                    args = {  Napi::String::New(env, "pressed") };
                });
            }
    );
    NPushButton::connect(this->instance, &QPushButton::toggled,
            [=](bool val) { 
                this->nodeEmit->call([=](Napi::Env env, std::vector<napi_value>& args) {
                    args = {  Napi::String::New(env, "toggled"), Napi::Value::From(env,val) };
                });
            }
    );
    return env.Null();
  }
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};


