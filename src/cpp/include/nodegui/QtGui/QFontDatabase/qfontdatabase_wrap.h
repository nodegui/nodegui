#pragma once

#include <napi.h>

#include <QFontDatabase>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QFontDatabaseWrap
    : public Napi::ObjectWrap<QFontDatabaseWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QFontDatabase> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontDatabaseWrap(const Napi::CallbackInfo& info);
  QFontDatabase* getInternalInstance();
  // Wrapped methods
  Napi::Value bold(const Napi::CallbackInfo& info);
  Napi::Value families(const Napi::CallbackInfo& info);
  Napi::Value italic(const Napi::CallbackInfo& info);
  Napi::Value weight(const Napi::CallbackInfo& info);
};

namespace StaticQFontDatabaseWrapMethods {
DLL_EXPORT Napi::Value addApplicationFont(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value removeApplicationFont(const Napi::CallbackInfo& info);
}  // namespace StaticQFontDatabaseWrapMethods
