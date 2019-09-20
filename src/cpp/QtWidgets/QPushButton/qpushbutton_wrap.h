#pragma once

#include <napi.h>
#include <stdlib.h>
#include "npushbutton.hpp"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"

#include "src/cpp/Extras/Utils/nutils.h"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  std::unique_ptr<NPushButton> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo &info);
  ~QPushButtonWrap();
  NPushButton *getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo &info);
  Napi::Value setFlat(const Napi::CallbackInfo &info);
  Napi::Value setIcon(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
