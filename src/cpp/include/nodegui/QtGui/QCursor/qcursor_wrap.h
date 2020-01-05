#pragma once

#include <napi.h>

#include <QCursor>

#include "core/Component/component_macro.h"

class QCursorWrap : public Napi::ObjectWrap<QCursorWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QCursor> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCursorWrap(const Napi::CallbackInfo& info);
  ~QCursorWrap();
  QCursor* getInternalInstance();
  // Wrapped methods
  Napi::Value pos(const Napi::CallbackInfo& info);
  Napi::Value setPos(const Napi::CallbackInfo& info);
};
