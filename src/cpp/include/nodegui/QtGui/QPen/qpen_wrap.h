#pragma once

#include <napi.h>

#include <QPen>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPenWrap : public Napi::ObjectWrap<QPenWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QPen> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPenWrap(const Napi::CallbackInfo& info);
  ~QPenWrap();
  QPen* getInternalInstance();
  // Wrapped methods
  Napi::Value setColor(const Napi::CallbackInfo& info);
  Napi::Value color(const Napi::CallbackInfo& info);
  Napi::Value setStyle(const Napi::CallbackInfo& info);
  Napi::Value style(const Napi::CallbackInfo& info);
  Napi::Value setCapStyle(const Napi::CallbackInfo& info);
  Napi::Value setWidth(const Napi::CallbackInfo& info);
};
