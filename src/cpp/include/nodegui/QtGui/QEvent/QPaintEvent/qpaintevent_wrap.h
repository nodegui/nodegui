#pragma once

#include <napi.h>

#include <QPaintEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPaintEventWrap : public Napi::ObjectWrap<QPaintEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QPaintEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPaintEventWrap(const Napi::CallbackInfo& info);
  ~QPaintEventWrap();
  QPaintEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value rect(const Napi::CallbackInfo& info);
};
