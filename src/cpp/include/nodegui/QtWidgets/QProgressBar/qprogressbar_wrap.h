#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nprogressbar.hpp"

class DLL_EXPORT QProgressBarWrap : public Napi::ObjectWrap<QProgressBarWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NProgressBar> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QProgressBarWrap(const Napi::CallbackInfo& info);
  ~QProgressBarWrap();
  NProgressBar* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value resetFormat(const Napi::CallbackInfo& info);
  Napi::Value reset(const Napi::CallbackInfo& info);
  Napi::Value setRange(const Napi::CallbackInfo& info);
};
