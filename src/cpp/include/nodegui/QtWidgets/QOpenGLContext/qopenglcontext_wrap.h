#pragma once

#include <napi.h>

#include <QOpenGLContext>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

class QOpenGLContextWrap : public Napi::ObjectWrap<QOpenGLContextWrap> {
 private:
  QOpenGLContext *instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);

  QOpenGLContextWrap(const Napi::CallbackInfo &info);

  ~QOpenGLContextWrap();

  QOpenGLContext *getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value functions(const Napi::CallbackInfo &info);
  COMPONENT_WRAPPED_METHODS_DECLARATION
};
namespace StaticQOpenGLContextWrapMethods {
Napi::Value currentContext(const Napi::CallbackInfo &info);
};  // namespace StaticQOpenGLContextWrapMethods