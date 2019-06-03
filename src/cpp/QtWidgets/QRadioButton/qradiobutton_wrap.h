#ifndef QRADIOBUTTON_WRAP_H
#define QRADIOBUTTON_WRAP_H
#include <napi.h>
#include <QRadioButton>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QRadioButtonWrap : public  Napi::ObjectWrap<QRadioButtonWrap>{
 private:
  QRadioButton* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRadioButtonWrap(const Napi::CallbackInfo& info);
  ~QRadioButtonWrap();
  QRadioButton* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif