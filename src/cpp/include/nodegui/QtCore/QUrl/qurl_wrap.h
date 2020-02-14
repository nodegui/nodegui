#pragma once

#include <napi.h>

#include <QUrl>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QUrlWrap : public Napi::ObjectWrap<QUrlWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QUrl> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QUrlWrap(const Napi::CallbackInfo& info);
  ~QUrlWrap();
  QUrl* getInternalInstance();
  // Wrapped methods
  Napi::Value setUrl(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);
};

namespace StaticQUrlWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQUrlWrapMethods