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
  QImage* getInternalInstance();

  Napi::Value allGray(const Napi::CallbackInfo& info);
  Napi::Value bitPlaneCount(const Napi::CallbackInfo& info);
  Napi::Value bytesPerLine(const Napi::CallbackInfo& info);
  Napi::Value cacheKey(const Napi::CallbackInfo& info);
  void convertTo(const Napi::CallbackInfo& info);
  Napi::Value convertToFormat(const Napi::CallbackInfo& info);
  Napi::Value copy(const Napi::CallbackInfo& info);
  Napi::Value createAlphaMask(const Napi::CallbackInfo& info);
  Napi::Value createHeuristicMask(const Napi::CallbackInfo& info);
  Napi::Value depth(const Napi::CallbackInfo& info);
  Napi::Value devicePixelRatio(const Napi::CallbackInfo& info);
  Napi::Value dotsPerMeterX(const Napi::CallbackInfo& info);
  Napi::Value dotsPerMeterY(const Napi::CallbackInfo& info);
  void fill(const Napi::CallbackInfo& info);
  Napi::Value format(const Napi::CallbackInfo& info);
};

namespace StaticQImageWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQImageWrapMethods
