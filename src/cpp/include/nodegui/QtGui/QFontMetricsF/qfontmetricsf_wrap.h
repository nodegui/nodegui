#pragma once

#include <napi.h>

#include <QFontMetricsF>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QFontMetricsFWrap
    : public Napi::ObjectWrap<QFontMetricsFWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QFontMetricsF> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFontMetricsFWrap(const Napi::CallbackInfo& info);
  QFontMetricsF* getInternalInstance();
  // Wrapped methods
  Napi::Value ascent(const Napi::CallbackInfo& info);
  Napi::Value averageCharWidth(const Napi::CallbackInfo& info);
  Napi::Value capHeight(const Napi::CallbackInfo& info);
  Napi::Value descent(const Napi::CallbackInfo& info);
  Napi::Value fontDpi(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value horizontalAdvance(const Napi::CallbackInfo& info);
  Napi::Value inFont(const Napi::CallbackInfo& info);
  Napi::Value leading(const Napi::CallbackInfo& info);
  Napi::Value leftBearing(const Napi::CallbackInfo& info);
  Napi::Value lineSpacing(const Napi::CallbackInfo& info);
  Napi::Value lineWidth(const Napi::CallbackInfo& info);
  Napi::Value overlinePos(const Napi::CallbackInfo& info);
  Napi::Value rightBearing(const Napi::CallbackInfo& info);
  Napi::Value size(const Napi::CallbackInfo& info);
  Napi::Value strikeOutPos(const Napi::CallbackInfo& info);
  Napi::Value swap(const Napi::CallbackInfo& info);
  Napi::Value underlinePos(const Napi::CallbackInfo& info);
  Napi::Value xHeight(const Napi::CallbackInfo& info);
  Napi::Value maxWidth(const Napi::CallbackInfo& info);
  Napi::Value minLeftBearing(const Napi::CallbackInfo& info);
  Napi::Value minRightBearing(const Napi::CallbackInfo& info);
  Napi::Value inFontUcs4(const Napi::CallbackInfo& info);
  Napi::Value boundingRect(const Napi::CallbackInfo& info);
  Napi::Value tightBoundingRect(const Napi::CallbackInfo& info);
  Napi::Value elidedText(const Napi::CallbackInfo& info);
};
