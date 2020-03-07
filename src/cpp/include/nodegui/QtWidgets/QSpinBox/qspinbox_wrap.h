#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSpinBox/qabstractspinbox_macro.h"
#include "nspinbox.hpp"

class DLL_EXPORT QSpinBoxWrap : public Napi::ObjectWrap<QSpinBoxWrap> {
  QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION
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
  Napi::Value setRange(const Napi::CallbackInfo &info);
};
