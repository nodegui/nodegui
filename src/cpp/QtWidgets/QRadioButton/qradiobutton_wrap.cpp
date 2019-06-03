
#include "qradiobutton_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include <QWidget>


Napi::FunctionReference QRadioButtonWrap::constructor;

Napi::Object QRadioButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRadioButton";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QRadioButtonWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QRadioButton* QRadioButtonWrap::getInternalInstance() {
  return this->instance;
}

QRadioButtonWrap::QRadioButtonWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QRadioButtonWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
    if(info[0].IsObject()){
      Napi::Object object_parent = info[0].As<Napi::Object>();
      QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
      this->instance = new QRadioButton(w_parent->getInternalInstance()); //this sets the parent to current widget
    }else{
      extrautils::throwTypeError(env, "Wrong type of arguments");
    }
  }else if (info.Length() == 0){
    this->instance = new QRadioButton();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QRadioButtonWrap::~QRadioButtonWrap() {
  delete this->instance;
}

