#pragma once

#include <napi.h>

#include <QSize>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QSizeWrap : public Napi::ObjectWrap<QSizeWrap> {
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
  Napi::Value boundedTo(const Napi::CallbackInfo& info);
  Napi::Value expandedTo(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value isEmpty(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value scale(const Napi::CallbackInfo& info);
  Napi::Value scaled(const Napi::CallbackInfo& info);
  Napi::Value setHeight(const Napi::CallbackInfo& info);
  Napi::Value setWidth(const Napi::CallbackInfo& info);
  Napi::Value transpose(const Napi::CallbackInfo& info);
  Napi::Value transposed(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
};

namespace StaticQSizeWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQSizeWrapMethods