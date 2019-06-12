
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

NProgressBar* QProgressBarWrap::getInternalInstance() {
  return this->instance;
}

QProgressBarWrap::QProgressBarWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QProgressBarWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NProgressBar(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NProgressBar();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QProgressBarWrap::~QProgressBarWrap() {
  delete this->instance;
}

