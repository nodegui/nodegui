#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nprogressbar.hpp"

class QProgressBarWrap : public Napi::ObjectWrap<QProgressBarWrap> {
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
  Napi::Value setValue(const Napi::CallbackInfo& info);
  Napi::Value setMaximum(const Napi::CallbackInfo& info);
  Napi::Value setMinimum(const Napi::CallbackInfo& info);
  Napi::Value setOrientation(const Napi::CallbackInfo& info);
  Napi::Value value(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
