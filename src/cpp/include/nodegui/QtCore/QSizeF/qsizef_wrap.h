#pragma once

#include <napi.h>

#include <QSizeF>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QSizeFWrap : public Napi::ObjectWrap<QSizeFWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QSizeF> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSizeFWrap(const Napi::CallbackInfo& info);
  ~QSizeFWrap();
  QSizeF* getInternalInstance();
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
  Napi::Value toSize(const Napi::CallbackInfo& info);
  Napi::Value transpose(const Napi::CallbackInfo& info);
  Napi::Value transposed(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
};

namespace StaticQSizeFWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQSizeFWrapMethods