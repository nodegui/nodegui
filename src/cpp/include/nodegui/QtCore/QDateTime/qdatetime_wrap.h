#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QDateTime>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDateTimeWrap : public Napi::ObjectWrap<QDateTimeWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QDateTime> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDateTimeWrap(const Napi::CallbackInfo& info);
  ~QDateTimeWrap();
  QDateTime* getInternalInstance();
  // Wrapped methods
  Napi::Value addDays(const Napi::CallbackInfo& info);
  Napi::Value addMSecs(const Napi::CallbackInfo& info);
  Napi::Value addMonths(const Napi::CallbackInfo& info);
  Napi::Value addSecs(const Napi::CallbackInfo& info);
  Napi::Value addYears(const Napi::CallbackInfo& info);
  Napi::Value date(const Napi::CallbackInfo& info);
  Napi::Value daysTo(const Napi::CallbackInfo& info);
  Napi::Value isDaylightTime(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value msecsTo(const Napi::CallbackInfo& info);
  Napi::Value offsetFromUtc(const Napi::CallbackInfo& info);
  Napi::Value secsTo(const Napi::CallbackInfo& info);
  Napi::Value setDate(const Napi::CallbackInfo& info);
  Napi::Value setMSecsSinceEpoch(const Napi::CallbackInfo& info);
  Napi::Value setOffsetFromUtc(const Napi::CallbackInfo& info);
  Napi::Value setSecsSinceEpoch(const Napi::CallbackInfo& info);
  Napi::Value setTime(const Napi::CallbackInfo& info);
  Napi::Value setTimeSpec(const Napi::CallbackInfo& info);
  Napi::Value time(const Napi::CallbackInfo& info);
  Napi::Value timeSpec(const Napi::CallbackInfo& info);
  Napi::Value toLocalTime(const Napi::CallbackInfo& info);
  Napi::Value toMSecsSinceEpoch(const Napi::CallbackInfo& info);
  Napi::Value toOffsetFromUtc(const Napi::CallbackInfo& info);
  Napi::Value toSecsSinceEpoch(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);
  Napi::Value toTimeSpec(const Napi::CallbackInfo& info);
  Napi::Value toUTC(const Napi::CallbackInfo& info);
};

namespace StaticDateTimeWrapMethods {
DLL_EXPORT Napi::Value currentDateTime(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value currentDateTimeUtc(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value currentMSecsSinceEpoch(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value currentSecsSinceEpoch(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticDateTimeWrapMethods
