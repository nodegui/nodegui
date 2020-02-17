#pragma once

#include <napi.h>

#include <QPicture>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QPictureWrap : public Napi::ObjectWrap<QPictureWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QPicture> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPictureWrap(const Napi::CallbackInfo& info);
  ~QPictureWrap();
  QPicture* getInternalInstance();
  // Wrapped methods
  Napi::Value setBoundingRect(const Napi::CallbackInfo& info);
  Napi::Value boundingRect(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value load(const Napi::CallbackInfo& info);
  Napi::Value save(const Napi::CallbackInfo& info);
  Napi::Value size(const Napi::CallbackInfo& info);
};
