#include "qlayout_wrap.h"

Napi::FunctionReference QLayoutWrap::constructor;

void QLayoutWrap::init(Napi::Env env) {
  char CLASSNAME[] = "QLayout";
  Napi::Function func = DefineClass(env, CLASSNAME, {});
  constructor = Napi::Persistent(func);
}

QLayout* QLayoutWrap::getInternalInstance() {
  return this->instance;
}

QLayoutWrap::QLayoutWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QLayoutWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
}

QLayoutWrap::~QLayoutWrap() {
  delete this->instance;
}
