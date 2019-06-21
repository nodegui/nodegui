#include "qgridlayout_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"

Napi::FunctionReference QGridLayoutWrap::constructor;

Napi::Object QGridLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGridLayout";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("addWidget", &QGridLayoutWrap::addWidget)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QGridLayout* QGridLayoutWrap::getInternalInstance() {
  return this->instance;
}

QGridLayoutWrap::QGridLayoutWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QGridLayoutWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new QGridLayout(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new QGridLayout();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QGridLayoutWrap::~QGridLayoutWrap() {
  delete this->instance;
}

Napi::Value QGridLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance());
  
  return env.Null();
}

