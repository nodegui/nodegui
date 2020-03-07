#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "ndateedit.hpp"

class DLL_EXPORT QDateEditWrap : public Napi::ObjectWrap<QDateEditWrap> {
  QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NDateEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDateEditWrap(const Napi::CallbackInfo &info);
  ~QDateEditWrap();
  NDateEdit *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
