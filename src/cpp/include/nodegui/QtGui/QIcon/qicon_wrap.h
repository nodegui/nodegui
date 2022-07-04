#pragma once

#include <napi.h>

#include <QIcon>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QIconWrap : public Napi::ObjectWrap<QIconWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QIcon> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QIconWrap(const Napi::CallbackInfo& info);
  ~QIconWrap();
  QIcon* getInternalInstance();
  // Wrapped methods
  Napi::Value actualSize(const Napi::CallbackInfo& info);
  Napi::Value addFile(const Napi::CallbackInfo& info);
  Napi::Value addPixmap(const Napi::CallbackInfo& info);
  Napi::Value availableSizes(const Napi::CallbackInfo& info);
  Napi::Value pixmap(const Napi::CallbackInfo& info);
  Napi::Value isMask(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value name(const Napi::CallbackInfo& info);
  Napi::Value paint(const Napi::CallbackInfo& info);
  Napi::Value setIsMask(const Napi::CallbackInfo& info);
  Napi::Value cacheKey(const Napi::CallbackInfo& info);
  Napi::Value swap(const Napi::CallbackInfo& info);
};

namespace StaticQIconWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQIconWrapMethods