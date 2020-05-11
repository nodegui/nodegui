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
};
