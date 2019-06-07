#include "qlabel_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include "src/cpp/core/FlexLayout/flexnode_wrap.h"
#include <QWidget>

Napi::FunctionReference QLabelWrap::constructor;

Napi::Object QLabelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLabel";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setWordWrap", &QLabelWrap::setWordWrap),
    InstanceMethod("setText", &QLabelWrap::setText),
    InstanceMethod("getFlexNode", &QLabelWrap::getFlexNode),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLabelWrap)
    YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLabelWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLabel* QLabelWrap::getInternalInstance() {
  return this->instance;
}

QLabelWrap::QLabelWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QLabelWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NLabel(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NLabel();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QLabelWrap::~QLabelWrap() {
  delete this->instance;
}

Napi::Value QLabelWrap::setWordWrap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  Napi::Boolean On = info[0].As<Napi::Boolean>();
  this->instance->setWordWrap(On);

  return env.Null();
}

Napi::Value QLabelWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  Napi::String text = info[0].As<Napi::String>();
  std::string label = text.Utf8Value();
  this->instance->setText(label.c_str());

  return env.Null();
}

