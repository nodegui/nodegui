
#include "qprogressbar_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include <QWidget>


Napi::FunctionReference QProgressBarWrap::constructor;

Napi::Object QProgressBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QProgressBar";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QProgressBarWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QProgressBar* QProgressBarWrap::getInternalInstance() {
  return this->instance;
}

QProgressBarWrap::QProgressBarWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QProgressBarWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
    if(info[0].IsObject()){
      Napi::Object object_parent = info[0].As<Napi::Object>();
      QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
      this->instance = new QProgressBar(w_parent->getInternalInstance()); //this sets the parent to current widget
    }else{
      extrautils::throwTypeError(env, "Wrong type of arguments");
    }
  }else if (info.Length() == 0){
    this->instance = new QProgressBar();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QProgressBarWrap::~QProgressBarWrap() {
  delete this->instance;
}

