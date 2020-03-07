#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QDate>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDateWrap : public Napi::ObjectWrap<QDateWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  std::unique_ptr<QDate> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDateWrap(const Napi::CallbackInfo& info);
  ~QDateWrap();
  QDate* getInternalInstance();
  // Wrapped methods
  Napi::Value addDays(const Napi::CallbackInfo& info);
  Napi::Value addMonths(const Napi::CallbackInfo& info);
  Napi::Value addYears(const Napi::CallbackInfo& info);
  Napi::Value day(const Napi::CallbackInfo& info);
  Napi::Value dayOfWeek(const Napi::CallbackInfo& info);
  Napi::Value dayOfYear(const Napi::CallbackInfo& info);
  Napi::Value daysInMonth(const Napi::CallbackInfo& info);
  Napi::Value daysInYear(const Napi::CallbackInfo& info);
  Napi::Value daysTo(const Napi::CallbackInfo& info);
  Napi::Value isNull(const Napi::CallbackInfo& info);
  Napi::Value isValid(const Napi::CallbackInfo& info);
  Napi::Value month(const Napi::CallbackInfo& info);
  Napi::Value setDate(const Napi::CallbackInfo& info);
  Napi::Value toJulianDay(const Napi::CallbackInfo& info);
  Napi::Value toString(const Napi::CallbackInfo& info);
  Napi::Value year(const Napi::CallbackInfo& info);
};

namespace StaticDateWrapMethods {
DLL_EXPORT Napi::Value currentDate(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromJulianDay(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value isLeapYear(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value isValid(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value fromQVariant(const Napi::CallbackInfo& info);
}  // namespace StaticDateWrapMethods
