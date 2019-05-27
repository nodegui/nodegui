#ifndef QPUSHBUTTON_WRAP_H
#define QPUSHBUTTON_WRAP_H
#include <napi.h>
#include <QPushButton>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QPushButtonWrap : public  Napi::ObjectWrap<QPushButtonWrap> {
 private:
  QPushButton* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QPushButtonWrap(const Napi::CallbackInfo& info);
  ~QPushButtonWrap();
  QPushButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value setEventListener(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif
