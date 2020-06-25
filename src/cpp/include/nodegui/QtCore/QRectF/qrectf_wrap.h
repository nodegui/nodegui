#pragma once

#include <napi.h>

#include <QRectF>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QRectFWrap : public Napi::ObjectWrap<QRectFWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

  private:
  std::unique_ptr<QRectF> instance;

  public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRectFWrap(const Napi::CallbackInfo& info);
  ~QRectFWrap();
  QRectF* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value adjust(const Napi::CallbackInfo& info);
  Napi::Value adjusted(const Napi::CallbackInfo& info);
  Napi::Value bottom(const Napi::CallbackInfo& info);
  Napi::Value bottomLeft(const Napi::CallbackInfo& info);
  Napi::Value bottomRight(const Napi::CallbackInfo& info);
  Napi::Value center(const Napi::CallbackInfo& info);
  Napi::Value contains(const Napi::CallbackInfo& info);
  Napi::Value contains_QRect(const Napi::CallbackInfo& info);
  Napi::Value contains_QPoint(const Napi::CallbackInfo& info);
  Napi::Value height(const Napi::CallbackInfo& info);
  Napi::Value intersected(const Napi::CallbackInfo& info);
  Napi::Value intersects(const Napi::CallbackInfo& info);
  Napi::Value isEmpty(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value left(const Napi::CallbackInfo& info);
  Napi::Value moveBottom(const Napi::CallbackInfo& info);
  Napi::Value moveBottomLeft(const Napi::CallbackInfo& info);
  Napi::Value moveBottomRight(const Napi::CallbackInfo& info);
  Napi::Value moveCenter(const Napi::CallbackInfo& info);
  Napi::Value moveLeft(const Napi::CallbackInfo& info);
  Napi::Value moveRight(const Napi::CallbackInfo& info);
  Napi::Value moveTo(const Napi::CallbackInfo& info);
  Napi::Value moveTo_QPoint(const Napi::CallbackInfo& info);
  Napi::Value moveTop(const Napi::CallbackInfo& info);
  Napi::Value moveTopLeft(const Napi::CallbackInfo& info);
  Napi::Value moveTopRight(const Napi::CallbackInfo& info);
  Napi::Value normalized(const Napi::CallbackInfo& info);
  Napi::Value right(const Napi::CallbackInfo& info);
  Napi::Value setBottom(const Napi::CallbackInfo& info);
  Napi::Value setBottomLeft(const Napi::CallbackInfo& info);
  Napi::Value setBottomRight(const Napi::CallbackInfo& info);
  Napi::Value setCoords(const Napi::CallbackInfo& info);
  Napi::Value setHeight(const Napi::CallbackInfo& info);
  Napi::Value setLeft(const Napi::CallbackInfo& info);
  Napi::Value setRect(const Napi::CallbackInfo& info);
  Napi::Value setRight(const Napi::CallbackInfo& info);
  Napi::Value setTop(const Napi::CallbackInfo& info);
  Napi::Value setTopLeft(const Napi::CallbackInfo& info);
  Napi::Value setTopRight(const Napi::CallbackInfo& info);
  Napi::Value setWidth(const Napi::CallbackInfo& info);
  Napi::Value setX(const Napi::CallbackInfo& info);
  Napi::Value setY(const Napi::CallbackInfo& info);
  Napi::Value toAlignedRect(const Napi::CallbackInfo& info);
  Napi::Value toRect(const Napi::CallbackInfo& info);
  Napi::Value top(const Napi::CallbackInfo& info);
  Napi::Value topLeft(const Napi::CallbackInfo& info);
  Napi::Value topRight(const Napi::CallbackInfo& info);
  Napi::Value translate(const Napi::CallbackInfo& info);
  Napi::Value translate_QPoint(const Napi::CallbackInfo& info);
  Napi::Value translated(const Napi::CallbackInfo& info);
  Napi::Value translated_QPoint(const Napi::CallbackInfo& info);
  Napi::Value transposed(const Napi::CallbackInfo& info);
  Napi::Value united(const Napi::CallbackInfo& info);
  Napi::Value width(const Napi::CallbackInfo& info);
  Napi::Value x(const Napi::CallbackInfo& info);
  Napi::Value y(const Napi::CallbackInfo& info);
};