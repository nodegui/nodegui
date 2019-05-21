#ifndef QPUSHBUTTON_WRAP_H
#define QPUSHBUTTON_WRAP_H
#include <napi.h>
#include <QPushButton>

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
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
};

#endif
