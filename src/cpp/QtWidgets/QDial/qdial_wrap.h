#pragma once

#include <napi.h>
#include <stdlib.h>
#include <stdlib.h>
#include "ndial.hpp"
#include "src/cpp/QtWidgets/QWidget/qwidget_macro.h"
#include "src/cpp/QtWidgets/QAbstractSlider/qabstractslider_macro.h"

class QDialWrap : public  Napi::ObjectWrap<QDialWrap>{
 private:
  std::unique_ptr<NDial> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDialWrap(const Napi::CallbackInfo& info);
  ~QDialWrap();
  NDial* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setNotchesVisible(const Napi::CallbackInfo& info);
  Napi::Value setWrapping(const Napi::CallbackInfo& info);
  Napi::Value setNotchTarget(const Napi::CallbackInfo& info);
  Napi::Value notchTarget(const Napi::CallbackInfo& info);
  Napi::Value notchesVisible(const Napi::CallbackInfo& info);
  Napi::Value wrapping(const Napi::CallbackInfo& info);

  QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
};


