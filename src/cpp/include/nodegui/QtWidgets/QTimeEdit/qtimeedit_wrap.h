#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "ntimeedit.hpp"

class DLL_EXPORT QTimeEditWrap : public Napi::ObjectWrap<QTimeEditWrap> {
  QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NTimeEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTimeEditWrap(const Napi::CallbackInfo &info);
  ~QTimeEditWrap();
  NTimeEdit *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
