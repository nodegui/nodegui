#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "npushbutton.hpp"

class QPushButtonWrap : public Napi::ObjectWrap<QPushButtonWrap> {
 private:
  QPointer<NPushButton> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo &info);
  ~QPushButtonWrap();
  NPushButton *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setText(const Napi::CallbackInfo &info);
  Napi::Value setFlat(const Napi::CallbackInfo &info);
  Napi::Value setIcon(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
