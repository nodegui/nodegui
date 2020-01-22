#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ncheckbox.hpp"

class DLL_EXPORT QCheckBoxWrap : public Napi::ObjectWrap<QCheckBoxWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NCheckBox> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCheckBoxWrap(const Napi::CallbackInfo& info);
  ~QCheckBoxWrap();
  NCheckBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value isChecked(const Napi::CallbackInfo& info);
  Napi::Value setChecked(const Napi::CallbackInfo& info);
};
