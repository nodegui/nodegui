#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QIcon>

#include "core/Component/component_macro.h"

class QIconWrap : public Napi::ObjectWrap<QIconWrap> {
 private:
  std::unique_ptr<QIcon> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QIconWrap(const Napi::CallbackInfo& info);
  ~QIconWrap();
  QIcon* getInternalInstance();
  // Wrapped methods
  Napi::Value pixmap(const Napi::CallbackInfo& info);
  Napi::Value isMask(const Napi::CallbackInfo& info);
  Napi::Value setIsMask(const Napi::CallbackInfo& info);
};
