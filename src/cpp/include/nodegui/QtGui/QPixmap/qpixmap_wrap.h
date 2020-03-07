#pragma once

#include <napi.h>

#include <QPixmap>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPixmapWrap : public Napi::ObjectWrap<QPixmapWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QPixmap> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPixmapWrap(const Napi::CallbackInfo& info);
  ~QPixmapWrap();
  QPixmap* getInternalInstance();
  // Wrapped methods
  Napi::Value load(const Napi::CallbackInfo& info);
  Napi::Value loadFromData(const Napi::CallbackInfo& info);
  Napi::Value save(const Napi::CallbackInfo& info);
  Napi::Value scaled(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
};

namespace StaticQPixmapWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQPixmapWrapMethods