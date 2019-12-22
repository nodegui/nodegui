#pragma once

#include <napi.h>

#include <QOpenGLContext>

#include "core/Component/component_macro.h"

class QOpenGLContextWrap : public Napi::ObjectWrap<QOpenGLContextWrap> {
 private:
  std::unique_ptr<QOpenGLContext> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QOpenGLContextWrap(const Napi::CallbackInfo& info);
  QOpenGLContext* getInternalInstance();

  // Wrapped methods
  Napi::Value functions(const Napi::CallbackInfo& info);
  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQOpenGLContextWrapMethods {
Napi::Value currentContext(const Napi::CallbackInfo& info);
}  // namespace StaticQOpenGLContextWrapMethods
