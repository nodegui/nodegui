#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ntoolbutton.hpp"
#include "Extras/Utils/nutils.h"

class DLL_EXPORT QToolButtonWrap : public Napi::ObjectWrap<QToolButtonWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NToolButton> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QToolButtonWrap(const Napi::CallbackInfo &info);
  ~QToolButtonWrap();
  NToolButton *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setArrowType(const Napi::CallbackInfo &info);
  Napi::Value arrowType(const Napi::CallbackInfo &info);
  Napi::Value setAutoRaise(const Napi::CallbackInfo &info);
  Napi::Value autoRaise(const Napi::CallbackInfo &info);
  Napi::Value setPopupMode(const Napi::CallbackInfo &info);
  Napi::Value popupMode(const Napi::CallbackInfo &info);
  Napi::Value setToolButtonStyle(const Napi::CallbackInfo &info);
  Napi::Value toolButtonStyle(const Napi::CallbackInfo &info);
  Napi::Value setMenu(const Napi::CallbackInfo &info);
  Napi::Value setDefaultAction(const Napi::CallbackInfo &info);
  Napi::Value showMenu(const Napi::CallbackInfo &info);
};
