#include "qwidget_wrap.h"
#include "../../QtWidgets/QLayout/qlayout_wrap.h"
#include "../../Extras/Utils/utils.h"

Napi::FunctionReference QWidgetWrap::constructor;

Napi::Object QWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWidget";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("show", &QWidgetWrap::show),
    InstanceMethod("resize",&QWidgetWrap::resize),
    InstanceMethod("close",&QWidgetWrap::close),
    InstanceMethod("setLayout",&QWidgetWrap::setLayout),
    InstanceMethod("setStyleSheet",&QWidgetWrap::setStyleSheet),
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

Napi::Value QWidgetWrap::show(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->show();
  
  return env.Null();
}

Napi::Value QWidgetWrap::resize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number width = info[0].As<Napi::Number>();
  Napi::Number height = info[1].As<Napi::Number>();
  this->instance->resize(width.Int32Value(), height.Int32Value());

  return env.Null();
}

Napi::Value QWidgetWrap::close(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->close();
  
  return env.Null();
}

Napi::Value QWidgetWrap::setLayout(const Napi::CallbackInfo& info){
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object layoutObject = info[0].As<Napi::Object>();
  QLayoutWrap* layoutParent = Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject);
  this->instance->setLayout(layoutParent->getInternalInstance());

  return env.Null();
}


Napi::Value QWidgetWrap::setStyleSheet(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String text = info[0].As<Napi::String>();
  std::string style = text.Utf8Value();
  this->instance->setStyleSheet(style.c_str());

  return env.Null();
}
