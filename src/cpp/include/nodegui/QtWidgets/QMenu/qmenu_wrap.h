#pragma once
#include <napi.h>
#include <stdlib.h>
#include <nodegui/QtWidgets/QWidget/qwidget_macro.h>
#include "nmenu.hpp"

class QMenuWrap : public  Napi::ObjectWrap<QMenuWrap>{
 private:
  std::unique_ptr<NMenu> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMenuWrap(const Napi::CallbackInfo& info);
  ~QMenuWrap();
  NMenu* getInternalInstance();
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setTitle(const Napi::CallbackInfo& info);
  Napi::Value addAction(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};

