#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPoint>

#include "core/Component/component_macro.h"

class QPointWrap : public Napi::ObjectWrap<QPointWrap> {
 private:
  std::unique_ptr<QPoint> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPointWrap(const Napi::CallbackInfo& info);
  ~QPointWrap();
  QPoint* getInternalInstance();
  // Wrapped methods

  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQPointWrapMethods {
Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQPointWrapMethods