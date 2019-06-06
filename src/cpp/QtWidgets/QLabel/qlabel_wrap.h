#ifndef QLABEL_WRAP_H
#define QLABEL_WRAP_H
#include <napi.h>
#include "nlabel.h"
#include "src/cpp/QtGui/QWidget/qwidget_macro.h"

class QLabelWrap : public  Napi::ObjectWrap<QLabelWrap>{
 private:
  NLabel* instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLabelWrap(const Napi::CallbackInfo& info);
  ~QLabelWrap();
  NLabel* getInternalInstance();
  //class constructor
  static Napi::FunctionReference constructor;
  //wrapped methods
  Napi::Value setWordWrap(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value getFlexNode(const Napi::CallbackInfo& info);
  
  QWIDGET_WRAPPED_METHODS_DECLARATION
};

#endif