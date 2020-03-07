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
  Napi::Value drawText(const Napi::CallbackInfo& info);
  Napi::Value begin(const Napi::CallbackInfo& info);
  Napi::Value end(const Napi::CallbackInfo& info);
  Napi::Value rotate(const Napi::CallbackInfo& info);
  Napi::Value setPen(const Napi::CallbackInfo& info);
  Napi::Value setRenderHint(const Napi::CallbackInfo& info);
  Napi::Value setBrush(const Napi::CallbackInfo& info);
  Napi::Value drawLine(const Napi::CallbackInfo& info);
  Napi::Value scale(const Napi::CallbackInfo& info);
  Napi::Value translate(const Napi::CallbackInfo& info);
  Napi::Value drawConvexPolygon(const Napi::CallbackInfo& info);
  Napi::Value save(const Napi::CallbackInfo& info);
  Napi::Value restore(const Napi::CallbackInfo& info);
};
