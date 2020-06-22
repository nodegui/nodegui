#pragma once

#include <napi.h>

#include <QNativeGestureEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QNativeGestureEventWrap : public Napi::ObjectWrap<QNativeGestureEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QNativeGestureEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QNativeGestureEventWrap(const Napi::CallbackInfo& info);
  ~QNativeGestureEventWrap();
  QNativeGestureEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value gestureType(const Napi::CallbackInfo& info);
  Napi::Value globalPos(const Napi::CallbackInfo& info);
  Napi::Value localPos(const Napi::CallbackInfo& info);
  Napi::Value pos(const Napi::CallbackInfo& info);
  Napi::Value screenPos(const Napi::CallbackInfo& info);
  Napi::Value windowPos(const Napi::CallbackInfo& info);
  Napi::Value value(const Napi::CallbackInfo& info);
};