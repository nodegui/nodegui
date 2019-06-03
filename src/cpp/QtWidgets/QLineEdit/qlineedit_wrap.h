#ifndef QLINEEDIT_WRAP_H
#define QLINEEDIT_WRAP_H
#include <napi.h>
#include <QLineEdit>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QLineEditWrap : public  Napi::ObjectWrap<QLineEditWrap>{
 private:
  QLineEdit* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLineEditWrap(const Napi::CallbackInfo& info);
  ~QLineEditWrap();
  QLineEdit* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif