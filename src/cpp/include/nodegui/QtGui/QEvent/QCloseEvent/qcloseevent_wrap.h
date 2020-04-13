#pragma once

#include <napi.h>

#include <QCloseEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QCloseEventWrap : public Napi::ObjectWrap<QCloseEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QCloseEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCloseEventWrap(const Napi::CallbackInfo& info);
  ~QCloseEventWrap();
  QCloseEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value accept(const Napi::CallbackInfo& info);
  Napi::Value ignore(const Napi::CallbackInfo& info);
};