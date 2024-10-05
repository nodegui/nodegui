#pragma once

#include <napi.h>

#include <QColor>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QColorWrap : public Napi::ObjectWrap<QColorWrap> {
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
  Napi::Value rgb(const Napi::CallbackInfo& info);
  Napi::Value rgba(const Napi::CallbackInfo& info);
};

namespace StaticQColorWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromCmyk(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromCmykF(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromHsl(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromHslF(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromHsv(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromHsvF(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromRgb(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromRgb(const Napi::CallbackInfo& info);
}  // namespace StaticQColorWrapMethods
