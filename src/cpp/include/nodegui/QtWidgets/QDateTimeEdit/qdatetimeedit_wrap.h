#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "ndatetimeedit.hpp"

class DLL_EXPORT QDateTimeEditWrap
    : public Napi::ObjectWrap<QDateTimeEditWrap> {
  QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QDateTimeEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDateTimeEditWrap(const Napi::CallbackInfo &info);
  ~QDateTimeEditWrap();
  QDateTimeEdit *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
