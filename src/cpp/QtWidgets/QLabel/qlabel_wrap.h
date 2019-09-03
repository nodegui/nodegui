#pragma once

#include <napi.h>
#include <stdlib.h>
#include "nlabel.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"

class QLabelWrap : public  Napi::ObjectWrap<QLabelWrap>{
 private:
  std::unique_ptr<NLabel> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLabelWrap(const Napi::CallbackInfo& info);
  ~QLabelWrap();
  NLabel* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setWordWrap(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo &info);
  Napi::Value setPixmap(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
 
};

