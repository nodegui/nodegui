#ifndef QLAYOUT_WRAP_H
#define QLAYOUT_WRAP_H
#include <napi.h>
#include <QLayout>

//ABSTRACT CLASS
class QLayoutWrap : public  Napi::ObjectWrap<QLayoutWrap>{
 private:
  QLayout* instance;
 public:
  static void init(Napi::Env env);
  QLayoutWrap(const Napi::CallbackInfo& info);
  ~QLayoutWrap();
  QLayout* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
};

#endif