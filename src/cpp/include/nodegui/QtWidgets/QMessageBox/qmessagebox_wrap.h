#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QMessageBox/nmessagebox.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QMessageBoxWrap : public Napi::ObjectWrap<QMessageBoxWrap> {
 private:
  QPointer<NMessageBox> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMessageBoxWrap(const Napi::CallbackInfo& info);
  ~QMessageBoxWrap();
  NMessageBox* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value exec(const Napi::CallbackInfo& info);
  Napi::Value setDefaultButton(const Napi::CallbackInfo& info);
  Napi::Value addButton(const Napi::CallbackInfo& info);
  Napi::Value clickedButton(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
namespace StaticQMessageBoxWrapMethods {
Napi::Value about(const Napi::CallbackInfo& info);
Napi::Value aboutQt(const Napi::CallbackInfo& info);
};  // namespace StaticQMessageBoxWrapMethods
