#pragma once

#include <napi.h>

#include <QColor>
#include "deps/yoga/YGMacros.h"

#include "core/Component/component_macro.h"

class WIN_EXPORT QColorWrap : public Napi::ObjectWrap<QColorWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QColor> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QColorWrap(const Napi::CallbackInfo& info);
  ~QColorWrap();
  QColor* getInternalInstance();
  // Wrapped methods
  Napi::Value setRed(const Napi::CallbackInfo& info);
  Napi::Value red(const Napi::CallbackInfo& info);
  Napi::Value setGreen(const Napi::CallbackInfo& info);
  Napi::Value green(const Napi::CallbackInfo& info);
  Napi::Value setBlue(const Napi::CallbackInfo& info);
  Napi::Value blue(const Napi::CallbackInfo& info);
  Napi::Value setAlpha(const Napi::CallbackInfo& info);
  Napi::Value alpha(const Napi::CallbackInfo& info);
};

namespace StaticQColorWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQColorWrapMethods
