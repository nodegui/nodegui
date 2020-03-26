#pragma once

#include <napi.h>

#include <QBrush>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QBrushWrap : public Napi::ObjectWrap<QBrushWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QBrush> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QBrushWrap(const Napi::CallbackInfo& info);
  ~QBrushWrap();
  QBrush* getInternalInstance();
  // Wrapped methods
  Napi::Value isOpaque(const Napi::CallbackInfo& info);
  Napi::Value setColor(const Napi::CallbackInfo& info);
  Napi::Value color(const Napi::CallbackInfo& info);
  Napi::Value setStyle(const Napi::CallbackInfo& info);
  Napi::Value style(const Napi::CallbackInfo& info);
  Napi::Value setTexture(const Napi::CallbackInfo& info);
  Napi::Value texture(const Napi::CallbackInfo& info);
};

namespace StaticQBrushWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQBrushWrapMethods
