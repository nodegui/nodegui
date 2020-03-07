#pragma once

#include <napi.h>

#include <QModelIndex>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QModelIndexWrap : public Napi::ObjectWrap<QModelIndexWrap> {
 private:
  std::unique_ptr<QModelIndex> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QModelIndexWrap(const Napi::CallbackInfo& info);
  ~QModelIndexWrap();
  QModelIndex* getInternalInstance();
  // Wrapped methods
  Napi::Value column(const Napi::CallbackInfo& info);
  Napi::Value data(const Napi::CallbackInfo& info);
  Napi::Value flags(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value parent(const Napi::CallbackInfo& info);
  Napi::Value row(const Napi::CallbackInfo& info);
  Napi::Value sibling(const Napi::CallbackInfo& info);
  Napi::Value siblingAtColumn(const Napi::CallbackInfo& info);
  Napi::Value siblingAtRow(const Napi::CallbackInfo& info);

  COMPONENT_WRAPPED_METHODS_DECLARATION
};

namespace StaticQModelIndexWrapMethods {
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticQModelIndexWrapMethods