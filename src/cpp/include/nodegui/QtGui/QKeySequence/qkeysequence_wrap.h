#pragma once

#include <napi.h>

#include <QKeySequence>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QKeySequenceWrap : public Napi::ObjectWrap<QKeySequenceWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

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
  Napi::Value isEmpty(const Napi::CallbackInfo &info);
  Napi::Value matches(const Napi::CallbackInfo &info);
  Napi::Value toString(const Napi::CallbackInfo &info);
};

namespace StaticQKeySequenceWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo &info);
}  // namespace StaticQKeySequenceWrapMethods
