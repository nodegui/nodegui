#pragma once

#include <napi.h>

#include <QSize>
#include "deps/yoga/YGMacros.h"
#include "core/Component/component_macro.h"

class WIN_EXPORT QSizeWrap : public Napi::ObjectWrap<QSizeWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QSize> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSizeWrap(const Napi::CallbackInfo& info);
  ~QSizeWrap();
  QSize* getInternalInstance();
  // Wrapped methods
  Napi::Value setHeight(const Napi::CallbackInfo& info);
  Napi::Value setWidth(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
};

namespace StaticQSizeWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQSizeWrapMethods