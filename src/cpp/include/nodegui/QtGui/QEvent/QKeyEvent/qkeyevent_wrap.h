#pragma once

#include <napi.h>

#include <QKeyEvent>
#include "deps/yoga/YGMacros.h"

#include "core/Component/component_macro.h"

class WIN_EXPORT QKeyEventWrap : public Napi::ObjectWrap<QKeyEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QKeyEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QKeyEventWrap(const Napi::CallbackInfo& info);
  ~QKeyEventWrap();
  QKeyEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value key(const Napi::CallbackInfo& info);
  Napi::Value modifiers(const Napi::CallbackInfo& info);
  Napi::Value count(const Napi::CallbackInfo& info);
  Napi::Value isAutoRepeat(const Napi::CallbackInfo& info);
};