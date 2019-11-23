#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QUrl>

#include "core/Component/component_macro.h"

class QUrlWrap : public Napi::ObjectWrap<QUrlWrap> {
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
 
  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQUrlWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQUrlWrapMethods