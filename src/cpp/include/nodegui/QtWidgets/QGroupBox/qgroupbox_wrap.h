#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ngroupbox.hpp"

class QGroupBoxWrap : public Napi::ObjectWrap<QGroupBoxWrap> {
 private:
  QPointer<NGroupBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGroupBoxWrap(const Napi::CallbackInfo& info);
  ~QGroupBoxWrap();
  NGroupBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value alignment(const Napi::CallbackInfo& info);
  Napi::Value isCheckable(const Napi::CallbackInfo& info);
  Napi::Value isChecked(const Napi::CallbackInfo& info);
  Napi::Value isFlat(const Napi::CallbackInfo& info);
  Napi::Value setAlignment(const Napi::CallbackInfo& info);
  Napi::Value setCheckable(const Napi::CallbackInfo& info);
  Napi::Value setFlat(const Napi::CallbackInfo& info);
  Napi::Value setTitle(const Napi::CallbackInfo& info);
  Napi::Value title(const Napi::CallbackInfo& info);
  Napi::Value setChecked(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
