#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QColor>

#include "core/Component/component_macro.h"

class QColorWrap : public Napi::ObjectWrap<QColorWrap> {
 private:
  std::unique_ptr<QColor> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QColorWrap(const Napi::CallbackInfo& info);
  ~QColorWrap();
  QColor* getInternalInstance();
  // Wrapped methods

  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQColorWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQColorWrapMethods