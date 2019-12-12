#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QFontDatabase>

#include "core/Component/component_macro.h"

class QFontDatabaseWrap : public Napi::ObjectWrap<QFontDatabaseWrap> {
 private:
  std::unique_ptr<QFontDatabase> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontDatabaseWrap(const Napi::CallbackInfo& info);
  QFontDatabase* getInternalInstance();
  // Wrapped methods
  Napi::Value bold(const Napi::CallbackInfo& info);
  Napi::Value italic(const Napi::CallbackInfo& info);
  Napi::Value weight(const Napi::CallbackInfo& info);
 
  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQFontDatabaseWrapMethods {
Napi::Value addApplicationFont(const Napi::CallbackInfo& info);
Napi::Value removeApplicationFont(const Napi::CallbackInfo& info);
}  // namespace StaticQFontDatabaseWrapMethods
