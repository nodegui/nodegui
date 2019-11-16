#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QMouseEvent>

#include "core/Component/component_macro.h"

class QMouseEventWrap : public Napi::ObjectWrap<QMouseEventWrap> {
 private:
  QMouseEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMouseEventWrap(const Napi::CallbackInfo& info);
  ~QMouseEventWrap();
  QMouseEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value button(const Napi::CallbackInfo& info);
  Napi::Value x(const Napi::CallbackInfo& info);
  Napi::Value y(const Napi::CallbackInfo& info);
  // Napi::Value key(const Napi::CallbackInfo& info);
  // Napi::Value modifiers(const Napi::CallbackInfo& info);
  // Napi::Value count(const Napi::CallbackInfo& info);
  // Napi::Value isAutoRepeat(const Napi::CallbackInfo& info);

  COMPONENT_WRAPPED_METHODS_DECLARATION
};