#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QRect>

#include "core/Component/component_macro.h"

class QRectWrap : public Napi::ObjectWrap<QRectWrap> {
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

  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQRectWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQRectWrapMethods