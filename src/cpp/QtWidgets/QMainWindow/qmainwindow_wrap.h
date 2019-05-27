#ifndef QMAINWINDOW_WRAP_H
#define QMAINWINDOW_WRAP_H

#include <napi.h>
#include <QMainWindow>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QMainWindowWrap : public  Napi::ObjectWrap<QMainWindowWrap>{
private:
 QMainWindow* instance;

public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMainWindowWrap(const Napi::CallbackInfo& info);
  ~QMainWindowWrap();
  QMainWindow* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setCentralWidget(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif