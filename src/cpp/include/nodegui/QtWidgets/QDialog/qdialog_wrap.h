#pragma once

#include <napi.h>

#include <QPointer>

#include "QtWidgets/QDialog/qdialog_macro.h"
#include "ndialog.hpp"

class QDialogWrap : public Napi::ObjectWrap<QDialogWrap> {
 private:
  QPointer<NDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDialogWrap(const Napi::CallbackInfo& info);
  ~QDialogWrap();
  NDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  QDIALOG_WRAPPED_METHODS_DECLARATION
};
