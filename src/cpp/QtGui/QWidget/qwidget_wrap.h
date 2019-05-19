#ifndef QWIDGET_WRAP_H
#define QWIDGET_WRAP_H

#include <napi.h>
#include <QWidget>

class QWidgetWrap : public  Napi::ObjectWrap<QWidgetWrap>{
 private:
  QWidget* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QWidgetWrap(const Napi::CallbackInfo& info);
  ~QWidgetWrap();
  QWidget* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value show(const Napi::CallbackInfo& info);
  Napi::Value resize(const Napi::CallbackInfo& info);
  Napi::Value close(const Napi::CallbackInfo& info);
  Napi::Value setLayout(const Napi::CallbackInfo& info);
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info);
};

#endif