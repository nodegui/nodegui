#pragma once
#include <napi.h>
#include "deps/yoga/YGNode.h"

/*

  NAPI Wrapper class to export YGNodeRef/Yoga/Flex Node of a Widget
 */


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


