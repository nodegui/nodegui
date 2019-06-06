#include "flexnode_wrap.h"
#include <QDebug>

Napi::FunctionReference FlexNodeWrap::constructor;

void FlexNodeWrap::init(Napi::Env env) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "FlexNode";
  Napi::Function func = DefineClass(env, CLASSNAME, {
      InstanceMethod("debugValue", &FlexNodeWrap::printValue),
  });
  constructor = Napi::Persistent(func);
}

YGNodeRef FlexNodeWrap::getInternalInstance() {
  return this->instance;
}

FlexNodeWrap::FlexNodeWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<FlexNodeWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
}

Napi::Value FlexNodeWrap::debugValue(const Napi::CallbackInfo& info) {
   uint64_t addr = reinterpret_cast<long>(this->getInternalInstance());
   return info.Env().Null();
}

FlexNodeWrap::~FlexNodeWrap() {
  delete this->instance;
}
