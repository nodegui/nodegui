#ifndef QCHECKBOX_WRAP_H
#define QCHECKBOX_WRAP_H
#include <napi.h>
#include <QCheckBox>
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QCheckBoxWrap : public  Napi::ObjectWrap<QCheckBoxWrap>{
 private:
  QCheckBox* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QCheckBoxWrap(const Napi::CallbackInfo& info);
  ~QCheckBoxWrap();
  QCheckBox* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setText(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif