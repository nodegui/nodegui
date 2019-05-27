#ifndef QWIDGET_WRAP_H
#define QWIDGET_WRAP_H

#include "qwidget_macro.h"
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
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif