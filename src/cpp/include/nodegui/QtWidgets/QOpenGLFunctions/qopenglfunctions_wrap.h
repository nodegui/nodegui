#pragma once

#include <napi.h>

#include <QOpenGLFunctions>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

class QOpenGLFunctionsWrap : public Napi::ObjectWrap<QOpenGLFunctionsWrap> {
 private:
  QOpenGLFunctions *instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);

  QOpenGLFunctionsWrap(const Napi::CallbackInfo &info);

  ~QOpenGLFunctionsWrap();

  QOpenGLFunctions *getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  // Napi::Value setText(const Napi::CallbackInfo &info);
  COMPONENT_WRAPPED_METHODS_DECLARATION
};