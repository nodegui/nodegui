#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QFileDialog/nfiledialog.hpp"

class DLL_EXPORT QFileDialogWrap : public Napi::ObjectWrap<QFileDialogWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
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
  Napi::Value supportedSchemes(const Napi::CallbackInfo& info);
  Napi::Value setSupportedSchemes(const Napi::CallbackInfo& info);
  Napi::Value labelText(const Napi::CallbackInfo& info);
  Napi::Value setLabelText(const Napi::CallbackInfo& info);
  Napi::Value setOption(const Napi::CallbackInfo& info);
  Napi::Value setNameFilter(const Napi::CallbackInfo& info);
  Napi::Value selectedFiles(const Napi::CallbackInfo& info);
};
