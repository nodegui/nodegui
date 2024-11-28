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
  Napi::Value color(const Napi::CallbackInfo& info);
  Napi::Value colorCount(const Napi::CallbackInfo& info);
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
  Napi::Value hasAlphaChannel(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  void invertPixels(const Napi::CallbackInfo& info);
  Napi::Value isGrayscale(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value load(const Napi::CallbackInfo& info);
  Napi::Value loadFromData(const Napi::CallbackInfo& info);
  Napi::Value mirrored(const Napi::CallbackInfo& info);
  Napi::Value offset(const Napi::CallbackInfo& info);
  Napi::Value pixelColor(const Napi::CallbackInfo& info);
  Napi::Value pixelIndex(const Napi::CallbackInfo& info);
  Napi::Value rect(const Napi::CallbackInfo& info);
  Napi::Value reinterpretAsFormat(const Napi::CallbackInfo& info);
  Napi::Value save(const Napi::CallbackInfo& info);
  Napi::Value scaled(const Napi::CallbackInfo& info);
  Napi::Value scaledToHeight(const Napi::CallbackInfo& info);
  Napi::Value scaledToWidth(const Napi::CallbackInfo& info);
  void setAlphaChannel(const Napi::CallbackInfo& info);
  void setColor(const Napi::CallbackInfo& info);
  void setColorCount(const Napi::CallbackInfo& info);
  void setDevicePixelRatio(const Napi::CallbackInfo& info);
  void setDotsPerMeterX(const Napi::CallbackInfo& info);
  void setDotsPerMeterY(const Napi::CallbackInfo& info);
  void setOffset(const Napi::CallbackInfo& info);
  void setPixel(const Napi::CallbackInfo& info);
  void setPixelColor(const Napi::CallbackInfo& info);
  void setText(const Napi::CallbackInfo& info);
  Napi::Value size(const Napi::CallbackInfo& info);
  Napi::Value sizeInBytes(const Napi::CallbackInfo& info);
  void swap(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value textKeys(const Napi::CallbackInfo& info);
  Napi::Value valid(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
};

namespace StaticQImageWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromBuffer(const Napi::CallbackInfo& info);
}  // namespace StaticQImageWrapMethods
