#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QMessageBox/nmessagebox.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT QMessageBoxWrap : public Napi::ObjectWrap<QMessageBoxWrap> {
  QDIALOG_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QMessageBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMessageBoxWrap(const Napi::CallbackInfo& info);
  ~QMessageBoxWrap();
  QMessageBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setDefaultButton(const Napi::CallbackInfo& info);
  Napi::Value addButton(const Napi::CallbackInfo& info);
};
namespace StaticQMessageBoxWrapMethods {
DLL_EXPORT Napi::Value about(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value aboutQt(const Napi::CallbackInfo& info);
};  // namespace StaticQMessageBoxWrapMethods
