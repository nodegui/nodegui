#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QErrorMessage/nerrormessage.hpp"

class DLL_EXPORT QErrorMessageWrap
    : public Napi::ObjectWrap<QErrorMessageWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QErrorMessage> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QErrorMessageWrap(const Napi::CallbackInfo& info);
  ~QErrorMessageWrap();
  QErrorMessage* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value showMessage(const Napi::CallbackInfo& info);
};
