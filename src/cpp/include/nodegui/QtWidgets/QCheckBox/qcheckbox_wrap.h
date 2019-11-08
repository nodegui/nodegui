#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ncheckbox.hpp"

class QCheckBoxWrap : public Napi::ObjectWrap<QCheckBoxWrap> {
 private:
  QPointer<NCheckBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCheckBoxWrap(const Napi::CallbackInfo& info);
  ~QCheckBoxWrap();
  NCheckBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value isChecked(const Napi::CallbackInfo& info);
  Napi::Value setChecked(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
