#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nmainwindow.hpp"

class QMainWindowWrap : public Napi::ObjectWrap<QMainWindowWrap> {
 private:
  QPointer<NMainWindow> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMainWindowWrap(const Napi::CallbackInfo& info);
  ~QMainWindowWrap();
  NMainWindow* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setCentralWidget(const Napi::CallbackInfo& info);
  Napi::Value setMenuBar(const Napi::CallbackInfo& info);
  Napi::Value menuBar(const Napi::CallbackInfo& info);
  Napi::Value setMenuWidget(const Napi::CallbackInfo& info);
  Napi::Value center(const Napi::CallbackInfo& info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
