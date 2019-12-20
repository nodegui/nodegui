#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QFileDialog/nfiledialog.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QFileDialogWrap : public Napi::ObjectWrap<QFileDialogWrap> {
 private:
  QPointer<NFileDialog> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QFileDialogWrap(const Napi::CallbackInfo& info);
  ~QFileDialogWrap();
  NFileDialog* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value open(const Napi::CallbackInfo& info);
  Napi::Value supportedSchemes(const Napi::CallbackInfo& info);
  Napi::Value setSupportedSchemes(const Napi::CallbackInfo& info);
  Napi::Value labelText(const Napi::CallbackInfo& info);
  Napi::Value setLabelText(const Napi::CallbackInfo& info);
  Napi::Value setOption(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
