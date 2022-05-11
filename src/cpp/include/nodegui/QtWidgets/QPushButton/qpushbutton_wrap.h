#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "npushbutton.hpp"

class DLL_EXPORT QPushButtonWrap : public Napi::ObjectWrap<QPushButtonWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QPushButton> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  QPushButton* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setMenu(const Napi::CallbackInfo& info);
  Napi::Value menu(const Napi::CallbackInfo& info);
  Napi::Value showMenu(const Napi::CallbackInfo& info);
};
