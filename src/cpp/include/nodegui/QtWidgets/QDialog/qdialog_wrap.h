#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "QtWidgets/QDialog/qdialog_macro.h"
#include "ndialog.hpp"

class WIN_EXPORT QDialogWrap : public Napi::ObjectWrap<QDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
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
};
