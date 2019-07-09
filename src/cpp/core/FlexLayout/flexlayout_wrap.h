#ifndef FLEXLAYOUT_WRAP_H
#define FLEXLAYOUT_WRAP_H

#include <napi.h>
#include "flexlayout.h"

class FlexLayoutWrap : public  Napi::ObjectWrap<FlexLayoutWrap>{
 private:
  FlexLayout* instance;
  
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  FlexLayoutWrap(const Napi::CallbackInfo& info);
  ~FlexLayoutWrap();
  FlexLayout* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value setFlexNode(const Napi::CallbackInfo& info);
};

#endif //FLEXLAYOUT_WRAP_H