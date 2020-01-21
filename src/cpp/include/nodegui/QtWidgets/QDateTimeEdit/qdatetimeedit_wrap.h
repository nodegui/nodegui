#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "ndatetimeedit.hpp"

class WIN_EXPORT QDateTimeEditWrap : public Napi::ObjectWrap<QDateTimeEditWrap> {
  QDATETIMEEDIT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NDateTimeEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDateTimeEditWrap(const Napi::CallbackInfo &info);
  ~QDateTimeEditWrap();
  NDateTimeEdit *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
