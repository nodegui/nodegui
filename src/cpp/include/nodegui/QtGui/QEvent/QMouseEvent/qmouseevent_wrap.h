#pragma once

#include <napi.h>

#include <QMouseEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QMouseEventWrap : public Napi::ObjectWrap<QMouseEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

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
  Napi::Value globalX(const Napi::CallbackInfo& info);
  Napi::Value globalY(const Napi::CallbackInfo& info);
};