#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nspinbox.hpp"

class QSpinBoxWrap : public Napi::ObjectWrap<QSpinBoxWrap> {
 private:
  QPointer<NSpinBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSpinBoxWrap(const Napi::CallbackInfo &info);
  ~QSpinBoxWrap();
  NSpinBox *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setPrefix(const Napi::CallbackInfo &info);
  Napi::Value setSingleStep(const Napi::CallbackInfo &info);
  Napi::Value setSuffix(const Napi::CallbackInfo &info);
  Napi::Value setRange(const Napi::CallbackInfo &info);
  Napi::Value setValue(const Napi::CallbackInfo &info);
  Napi::Value cleanText(const Napi::CallbackInfo &info);
  Napi::Value maximum(const Napi::CallbackInfo &info);
  Napi::Value minimum(const Napi::CallbackInfo &info);
  Napi::Value value(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
