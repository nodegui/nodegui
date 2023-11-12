#pragma once

#include <napi.h>

#include <QPainter>

#include "Extras/Export/export.h"
#include "core/Component/component_wrap.h"

class DLL_EXPORT QPainterWrap : public Napi::ObjectWrap<QPainterWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  QPainter* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPainterWrap(const Napi::CallbackInfo& info);
  ~QPainterWrap();
  QPainter* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value begin(const Napi::CallbackInfo& info);
  Napi::Value beginNativePainting(const Napi::CallbackInfo& info);
  Napi::Value boundingRect(const Napi::CallbackInfo& info);
  Napi::Value boundingRectF(const Napi::CallbackInfo& info);
  Napi::Value compositionMode(const Napi::CallbackInfo& info);
  Napi::Value drawArc(const Napi::CallbackInfo& info);
  Napi::Value drawArcF(const Napi::CallbackInfo& info);
  Napi::Value drawChord(const Napi::CallbackInfo& info);
  Napi::Value drawChordF(const Napi::CallbackInfo& info);
  Napi::Value drawConvexPolygon(const Napi::CallbackInfo& info);
  Napi::Value drawConvexPolygonF(const Napi::CallbackInfo& info);
  Napi::Value drawEllipse(const Napi::CallbackInfo& info);
  Napi::Value drawEllipseF(const Napi::CallbackInfo& info);
  Napi::Value drawImage(const Napi::CallbackInfo& info);
  Napi::Value drawImageF(const Napi::CallbackInfo& info);
  Napi::Value drawLine(const Napi::CallbackInfo& info);
  Napi::Value drawLineF(const Napi::CallbackInfo& info);
  Napi::Value drawPath(const Napi::CallbackInfo& info);
  Napi::Value drawPie(const Napi::CallbackInfo& info);
  Napi::Value drawPieF(const Napi::CallbackInfo& info);
  Napi::Value drawPixmap(const Napi::CallbackInfo& info);
  Napi::Value drawPoint(const Napi::CallbackInfo& info);
  Napi::Value drawPointF(const Napi::CallbackInfo& info);
  Napi::Value drawRect(const Napi::CallbackInfo& info);
  Napi::Value drawRectF(const Napi::CallbackInfo& info);
  Napi::Value drawText(const Napi::CallbackInfo& info);
  Napi::Value drawTextF(const Napi::CallbackInfo& info);
  Napi::Value end(const Napi::CallbackInfo& info);
  Napi::Value endNativePainting(const Napi::CallbackInfo& info);
  Napi::Value eraseRect(const Napi::CallbackInfo& info);
  Napi::Value eraseRectF(const Napi::CallbackInfo& info);
  Napi::Value fillRect(const Napi::CallbackInfo& info);
  Napi::Value fillRectF(const Napi::CallbackInfo& info);
  Napi::Value opacity(const Napi::CallbackInfo& info);
  Napi::Value restore(const Napi::CallbackInfo& info);
  Napi::Value rotate(const Napi::CallbackInfo& info);
  Napi::Value save(const Napi::CallbackInfo& info);
  Napi::Value scale(const Napi::CallbackInfo& info);
  Napi::Value setBrush(const Napi::CallbackInfo& info);
  Napi::Value setBrushOrigin(const Napi::CallbackInfo& info);
  Napi::Value setBrushOriginF(const Napi::CallbackInfo& info);
  Napi::Value setCompositionMode(const Napi::CallbackInfo& info);
  Napi::Value setFont(const Napi::CallbackInfo& info);
  Napi::Value setOpacity(const Napi::CallbackInfo& info);
  Napi::Value setPen(const Napi::CallbackInfo& info);
  Napi::Value setRenderHint(const Napi::CallbackInfo& info);
  Napi::Value setTransform(const Napi::CallbackInfo& info);
  Napi::Value strokePath(const Napi::CallbackInfo& info);
  Napi::Value translate(const Napi::CallbackInfo& info);
};
