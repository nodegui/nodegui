#pragma once

#include <napi.h>

#include <QPointF>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPointFWrap : public Napi::ObjectWrap<QPointFWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QPointF> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPointFWrap(const Napi::CallbackInfo& info);
  ~QPointFWrap();
  QPointF* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value dotProduct(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value manhattanLength(const Napi::CallbackInfo& info);
  Napi::Value setX(const Napi::CallbackInfo& info);
  Napi::Value setY(const Napi::CallbackInfo& info);
  Napi::Value toPoint(const Napi::CallbackInfo& info);
  Napi::Value transposed(const Napi::CallbackInfo& info);
  Napi::Value x(const Napi::CallbackInfo& info);
  Napi::Value y(const Napi::CallbackInfo& info);
};

namespace StaticQPointFWrapMethods {
DLL_EXPORT Napi::Value dotProduct(const Napi::CallbackInfo& info);
}  // namespace StaticQPointFWrapMethods