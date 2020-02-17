#pragma once

#include <napi.h>

#include <QSettings>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QSettingsWrap : public Napi::ObjectWrap<QSettingsWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QSettings> instance;

 public:
  ~QSettingsWrap();
  QSettings* getInternalInstance();
  QSettingsWrap(const Napi::CallbackInfo& info);
  Napi::Value sync(const Napi::CallbackInfo& info);
  Napi::Value setValue(const Napi::CallbackInfo& info);
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  static Napi::FunctionReference constructor;
};
