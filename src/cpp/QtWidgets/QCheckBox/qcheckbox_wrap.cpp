#include "qcheckbox_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include <QWidget>


Napi::FunctionReference QCheckBoxWrap::constructor;

Napi::Object QCheckBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCheckBox";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setText", &QCheckBoxWrap::setText),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NCheckBox* QCheckBoxWrap::getInternalInstance() {
  return this->instance;
}

QCheckBoxWrap::QCheckBoxWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QCheckBoxWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NCheckBox(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NCheckBox();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QCheckBoxWrap::~QCheckBoxWrap() {
  delete this->instance;
}

Napi::Value QCheckBoxWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  Napi::String text = info[0].As<Napi::String>();
  std::string label = text.Utf8Value();
  this->instance->setText(label.c_str());

  return env.Null();
}

