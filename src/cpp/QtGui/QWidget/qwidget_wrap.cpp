#include "qwidget_wrap.h"
#include "../../QtWidgets/QLayout/qlayout_wrap.h"
#include "../../Extras/Utils/utils.h"

Napi::FunctionReference QWidgetWrap::constructor;

Napi::Object QWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWidget";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QWidgetWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QWidget* QWidgetWrap::getInternalInstance() {
  return this->instance;
}

QWidgetWrap::QWidgetWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QWidgetWrap>(info)  { 
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
    if(info[0].IsObject()){
      Napi::Object object_parent = info[0].As<Napi::Object>();
      QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
      this->instance = new QWidget(w_parent->getInternalInstance()); //this sets the parent to current widget
    }else{
      extrautils::throwTypeError(env, "Wrong type of arguments");
    }
  }else if (info.Length() == 0){
    this->instance = new QWidget();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QWidgetWrap::~QWidgetWrap() {
  delete this->instance;
}

