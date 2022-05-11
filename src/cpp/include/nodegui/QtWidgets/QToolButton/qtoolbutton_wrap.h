#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ntoolbutton.hpp"

class DLL_EXPORT QToolButtonWrap : public Napi::ObjectWrap<QToolButtonWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QToolButton> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QToolButtonWrap(const Napi::CallbackInfo& info);
  ~QToolButtonWrap();
  QToolButton* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setMenu(const Napi::CallbackInfo& info);
  Napi::Value setDefaultAction(const Napi::CallbackInfo& info);
  Napi::Value showMenu(const Napi::CallbackInfo& info);
  Napi::Value defaultAction(const Napi::CallbackInfo& info);
};
