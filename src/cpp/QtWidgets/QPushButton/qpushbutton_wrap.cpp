#include "qpushbutton_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"

Napi::FunctionReference QPushButtonWrap::constructor;

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setText", &QPushButtonWrap::setText),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QPushButtonWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPushButton* QPushButtonWrap::getInternalInstance() {
  return this->instance;
}

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  if(info.Length() == 1) {
    if(info[0].IsObject()){
      Napi::Object object_parent = info[0].As<Napi::Object>();
      QWidgetWrap* parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
      this->instance = new QPushButton(parent->getInternalInstance()); //this sets the parent to current widget
    }else{
      extrautils::throwTypeError(env, "Wrong type of arguments");
    }
  }else if (info.Length() == 0){
    this->instance = new QPushButton();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QPushButtonWrap::~QPushButtonWrap() {
  delete this->instance;
}


Napi::Value QPushButtonWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(text.c_str()); 
  // this->instance->repaint();

  return env.Null();
}

