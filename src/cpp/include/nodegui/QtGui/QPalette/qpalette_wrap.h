#pragma once

#include <napi.h>

#include <QPalette>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPaletteWrap : public Napi::ObjectWrap<QPaletteWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QPalette> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPaletteWrap(const Napi::CallbackInfo& info);
  ~QPaletteWrap();
  QPalette* getInternalInstance();

  // Wrapped methods
  Napi::Value color(const Napi::CallbackInfo& info);
};
