#pragma once

#include <napi.h>

#include <QPoint>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPointWrap : public Napi::ObjectWrap<QPointWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QPoint> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPointWrap(const Napi::CallbackInfo& info);
  ~QPointWrap();
  QPoint* getInternalInstance();
  // Wrapped methods
  Napi::Value setX(const Napi::CallbackInfo& info);
  Napi::Value setY(const Napi::CallbackInfo& info);
  Napi::Value x(const Napi::CallbackInfo& info);
  Napi::Value y(const Napi::CallbackInfo& info);
};

namespace StaticQPointWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQPointWrapMethods