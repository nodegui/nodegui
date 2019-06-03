#ifndef QPROGRESSBAR_WRAP_H
#define QPROGRESSBAR_WRAP_H
#include <napi.h>
#include <QProgressBar>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QProgressBarWrap : public  Napi::ObjectWrap<QProgressBarWrap>{
 private:
  QProgressBar* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QProgressBarWrap(const Napi::CallbackInfo& info);
  ~QProgressBarWrap();
  QProgressBar* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif