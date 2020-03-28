#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QProgressDialog/nprogressdialog.hpp"

class DLL_EXPORT QProgressDialogWrap
    : public Napi::ObjectWrap<QProgressDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NProgressDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QProgressDialogWrap(const Napi::CallbackInfo& info);
  ~QProgressDialogWrap();
  NProgressDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value cancel(const Napi::CallbackInfo& info);
  Napi::Value reset(const Napi::CallbackInfo& info);
  Napi::Value setCancelButtonText(const Napi::CallbackInfo& info);
  Napi::Value setRange(const Napi::CallbackInfo& info);
};
