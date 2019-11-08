#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QKeySequence>

#include "core/Component/component_macro.h"

class QKeySequenceWrap : public Napi::ObjectWrap<QKeySequenceWrap> {
 private:
  std::unique_ptr<QKeySequence> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QKeySequenceWrap(const Napi::CallbackInfo &info);
  ~QKeySequenceWrap();
  QKeySequence *getInternalInstance();
  // Wrapped methods
  Napi::Value count(const Napi::CallbackInfo &info);
};
