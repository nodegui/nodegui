#pragma once

#include <napi.h>

#include <QSharedPointer>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QVariantWrap : public Napi::ObjectWrap<QVariantWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  QSharedPointer<QVariant> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QVariantWrap(const Napi::CallbackInfo& info);
  QVariant* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  Napi::Value toString(const Napi::CallbackInfo& info);
  Napi::Value toInt(const Napi::CallbackInfo& info);
  Napi::Value toDouble(const Napi::CallbackInfo& info);
  Napi::Value toBool(const Napi::CallbackInfo& info);
  // wrapped methods
};

namespace StaticQVariantWrapMethods {
DLL_EXPORT Napi::Value converToQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQVariantWrapMethods