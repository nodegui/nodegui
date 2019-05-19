#ifndef QGRIDLAYOUT_WRAP_H
#define QGRIDLAYOUT_WRAP_H

#include <napi.h>
#include <QGridLayout>

class QGridLayoutWrap : public  Napi::ObjectWrap<QGridLayoutWrap>{
 private:
  QGridLayout* instance;
  
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGridLayoutWrap(const Napi::CallbackInfo& info);
  ~QGridLayoutWrap();
  QGridLayout* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
};

#endif