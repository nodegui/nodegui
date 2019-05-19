#ifndef QMAINWINDOW_WRAP_H
#define QMAINWINDOW_WRAP_H

#include <napi.h>
#include <QMainWindow>

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
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info);
  Napi::Value show(const Napi::CallbackInfo& info);
  Napi::Value resize(const Napi::CallbackInfo& info);
  Napi::Value close(const Napi::CallbackInfo& info);
  Napi::Value setCentralWidget(const Napi::CallbackInfo& info);
};

#endif