#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSpinBox/qabstractspinbox_macro.h"
#include "ndoublespinbox.hpp"

class DLL_EXPORT QDoubleSpinBoxWrap
    : public Napi::ObjectWrap<QDoubleSpinBoxWrap> {
  QABSTRACTSPINBOX_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NDoubleSpinBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDoubleSpinBoxWrap(const Napi::CallbackInfo& info);
  ~QDoubleSpinBoxWrap();
  NDoubleSpinBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setRange(const Napi::CallbackInfo& info);
  Napi::Value textFromValue(const Napi::CallbackInfo& info);
  Napi::Value valueFromText(const Napi::CallbackInfo& info);
};
