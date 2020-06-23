#pragma once

#include <napi.h>

#include <QPainterPath>

#include "Extras/Export/export.h"
#include "core/Component/component_wrap.h"

class DLL_EXPORT QPainterPathWrap : public Napi::ObjectWrap<QPainterPathWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QPainterPath> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPainterPathWrap(const Napi::CallbackInfo& info);
  ~QPainterPathWrap();
  QPainterPath* getInternalInstance();
  // wrapped methods
  Napi::Value moveTo(const Napi::CallbackInfo& info);
  Napi::Value addRect(const Napi::CallbackInfo& info);
  Napi::Value lineTo(const Napi::CallbackInfo& info);
  Napi::Value cubicTo(const Napi::CallbackInfo& info);
  Napi::Value quadTo(const Napi::CallbackInfo& info);
  Napi::Value closeSubpath(const Napi::CallbackInfo& info);
  
  Napi::Value addEllipse(const Napi::CallbackInfo& info);
  Napi::Value addPath(const Napi::CallbackInfo& info);
  // Needs QVector, QPolygonF to be implemented
  // Napi::Value addPolygon(const Napi::CallbackInfo& info);
  Napi::Value addRect(const Napi::CallbackInfo& info);
  // Needs QRegion to be implemented
  // Napi::Value addRegion(const Napi::CallbackInfo& info);
  Napi::Value addRoundedRect(const Napi::CallbackInfo& info);
  Napi::Value addText(const Napi::CallbackInfo& info);
  Napi::Value angleAtPercent(const Napi::CallbackInfo& info);
  Napi::Value arcMoveTo(const Napi::CallbackInfo& info);
  Napi::Value arcTo(const Napi::CallbackInfo& info);
  Napi::Value boundingRect(const Napi::CallbackInfo& info);
  Napi::Value capacity(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value connectPath(const Napi::CallbackInfo& info);
  // Needs to access internal QPointF, QRectF, or QPainterPath
  // Napi::Value contains(const Napi::CallbackInfo& info);
  Napi::Value controlPointRect(const Napi::CallbackInfo& info);

  Napi::Value currentPosition(const Napi::CallbackInfo& info);
  // Needs to implement QPainterPath::Element
  // Napi::Value elementAt(const Napi::CallbackInfo& info);
  Napi::Value elementCount(const Napi::CallbackInfo& info);
  Napi::Value fillRule(const Napi::CallbackInfo& info);
  // A bit complex, needs native object access
  // Napi::Value intersected(const Napi::CallbackInfo& info);
  // Napi::Value intersects(const Napi::CallbackInfo& info);
  Napi::Value isEmpty(const Napi::CallbackInfo& info);
  Napi::Value length(const Napi::CallbackInfo& info);
  Napi::Value percentAtLength(const Napi::CallbackInfo& info);
  Napi::Value pointAtPercent(const Napi::CallbackInfo& info);
  Napi::Value reserve(const Napi::CallbackInfo& info);
  Napi::Value setElementPositionAt(const Napi::CallbackInfo& info);
  Napi::Value setFillRule(const Napi::CallbackInfo& info);
  // Requires creating another native object... Not sure about this
  // Napi::Value simplified(const Napi::CallbackInfo& info);
  Napi::Value slopeAtPercent(const Napi::CallbackInfo& info);
  // Requires creating another native object
  // Napi::Value subtracted(const Napi::CallbackInfo& info);
  Napi::Value swap(const Napi::CallbackInfo& info);
  // Requires creating another native object
  // Napi::Value toFillPolygon(const Napi::CallbackInfo& info);
  // Napi::Value toReversed(const Napi::CallbackInfo& info);
  // Napi::Value toSubpathPolygons(const Napi::CallbackInfo& info);
  // Requires creating another native object
  Napi::Value translate(const Napi::CallbackInfo& info);
  // Napi::Value translated(const Napi::CallbackInfo& info);
  // Napi::Value united(const Napi::CallbackInfo& info);
};
