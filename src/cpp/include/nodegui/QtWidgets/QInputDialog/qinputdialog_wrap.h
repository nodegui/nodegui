#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QInputDialog/ninputdialog.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QInputDialogWrap : public Napi::ObjectWrap<QInputDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NInputDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QInputDialogWrap(const Napi::CallbackInfo& info);
  ~QInputDialogWrap();
  NInputDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // members
  Napi::Value setCancelButtonText(const Napi::CallbackInfo& info);
  Napi::Value cancelButtonText(const Napi::CallbackInfo& info);
  Napi::Value setComboBoxEditable(const Napi::CallbackInfo& info);
  Napi::Value isComboBoxEditable(const Napi::CallbackInfo& info);
  Napi::Value setDoubleDecimals(const Napi::CallbackInfo& info);
  Napi::Value doubleDecimals(const Napi::CallbackInfo& info);
  Napi::Value setDoubleMaximum(const Napi::CallbackInfo& info);
  Napi::Value doubleMaximum(const Napi::CallbackInfo& info);
  Napi::Value setDoubleMinimum(const Napi::CallbackInfo& info);
  Napi::Value doubleMinimum(const Napi::CallbackInfo& info);
  Napi::Value doubleStep(const Napi::CallbackInfo& info);
  Napi::Value setDoubleStep(const Napi::CallbackInfo& info);
  Napi::Value doubleValue(const Napi::CallbackInfo& info);
  Napi::Value setDoubleValue(const Napi::CallbackInfo& info);
  Napi::Value inputMode(const Napi::CallbackInfo& info);
  Napi::Value setInputMode(const Napi::CallbackInfo& info);
  Napi::Value intMaximum(const Napi::CallbackInfo& info);
  Napi::Value setIntMaximum(const Napi::CallbackInfo& info);
  Napi::Value intMinimum(const Napi::CallbackInfo& info);
  Napi::Value setIntMinimum(const Napi::CallbackInfo& info);
  Napi::Value intStep(const Napi::CallbackInfo& info);
  Napi::Value setIntStep(const Napi::CallbackInfo& info);
  Napi::Value intValue(const Napi::CallbackInfo& info);
  Napi::Value setIntValue(const Napi::CallbackInfo& info);
  Napi::Value labelText(const Napi::CallbackInfo& info);
  Napi::Value setLabelText(const Napi::CallbackInfo& info);
  Napi::Value okButtonText(const Napi::CallbackInfo& info);
  Napi::Value setOkButtonText(const Napi::CallbackInfo& info);
  Napi::Value options(const Napi::CallbackInfo& info);
  Napi::Value setOptions(const Napi::CallbackInfo& info);
  Napi::Value textEchoMode(const Napi::CallbackInfo& info);
  Napi::Value setTextEchoMode(const Napi::CallbackInfo& info);
  Napi::Value textValue(const Napi::CallbackInfo& info);
  Napi::Value setTextValue(const Napi::CallbackInfo& info);
};
