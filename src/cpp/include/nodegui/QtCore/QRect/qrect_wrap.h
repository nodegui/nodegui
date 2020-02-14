#pragma once

#include <napi.h>

#include <QRect>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QRectWrap : public Napi::ObjectWrap<QRectWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QRect> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRectWrap(const Napi::CallbackInfo& info);
  ~QRectWrap();
  QRect* getInternalInstance();
  // Wrapped methods
  Napi::Value setHeight(const Napi::CallbackInfo& info);
  Napi::Value setWidth(const Napi::CallbackInfo& info);
  Napi::Value setLeft(const Napi::CallbackInfo& info);
  Napi::Value setTop(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
  Napi::Value left(const Napi::CallbackInfo& info);
  Napi::Value top(const Napi::CallbackInfo& info);
};

namespace StaticQRectWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQRectWrapMethods