#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPainter>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

class QPainterWrap : public Napi::ObjectWrap<QPainterWrap> {
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

  COMPONENT_WRAPPED_METHODS_DECLARATION
};
