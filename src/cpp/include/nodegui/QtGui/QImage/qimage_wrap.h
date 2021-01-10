#pragma once

#include <napi.h>

#include <QImage>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QImageWrap : public Napi::ObjectWrap<QImageWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QImage> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QImageWrap(const Napi::CallbackInfo& info);
  ~QImageWrap();
};

namespace StaticQImageWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQImageWrapMethods