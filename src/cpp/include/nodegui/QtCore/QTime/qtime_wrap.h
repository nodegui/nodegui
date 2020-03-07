#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QTime>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QTimeWrap : public Napi::ObjectWrap<QTimeWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QTime> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTimeWrap(const Napi::CallbackInfo& info);
  ~QTimeWrap();
  QTime* getInternalInstance();
  // Wrapped methods
  Napi::Value addMSecs(const Napi::CallbackInfo& info);
  Napi::Value addSecs(const Napi::CallbackInfo& info);
  Napi::Value elapsed(const Napi::CallbackInfo& info);
  Napi::Value hour(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value minute(const Napi::CallbackInfo& info);
  Napi::Value msec(const Napi::CallbackInfo& info);
  Napi::Value msecsSinceStartOfDay(const Napi::CallbackInfo& info);
  Napi::Value msecsTo(const Napi::CallbackInfo& info);
  Napi::Value restart(const Napi::CallbackInfo& info);
  Napi::Value second(const Napi::CallbackInfo& info);
  Napi::Value secsTo(const Napi::CallbackInfo& info);
  Napi::Value setHMS(const Napi::CallbackInfo& info);
  Napi::Value start(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);
};

namespace StaticTimeWrapMethods {
DLL_EXPORT Napi::Value currentTime(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromMSecsSinceStartOfDay(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value isValid(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticTimeWrapMethods
