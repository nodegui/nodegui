#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "npushbutton.hpp"
class QPushButtonWrap : public Napi::ObjectWrap<QPushButtonWrap> {
  QABSTRACTBUTTON_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NPushButton> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo &info);
  ~QPushButtonWrap();
  NPushButton *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setFlat(const Napi::CallbackInfo &info);
};
