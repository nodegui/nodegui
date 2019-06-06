#ifndef FLEXNODE_WRAP_H
#define FLEXNODE_WRAP_H
#include <napi.h>
#include "deps/yoga/YGNode.h"

//ABSTRACT CLASS
class FlexNodeWrap : public  Napi::ObjectWrap<FlexNodeWrap>{
 public:
  YGNodeRef instance;
  static void init(Napi::Env env);
  FlexNodeWrap(const Napi::CallbackInfo& info);
  ~FlexNodeWrap();
  YGNodeRef getInternalInstance();
//class constructor
  static Napi::FunctionReference constructor;
  Napi::Value debugValue(const Napi::CallbackInfo& info);
};

#endif