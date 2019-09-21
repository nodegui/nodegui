#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "Extras/Utils/nutils.h"

Napi::FunctionReference QScrollAreaWrap::constructor;

Napi::Object QScrollAreaWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollArea";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setWidget", &QScrollAreaWrap::setWidget),
    QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QScrollAreaWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NScrollArea* QScrollAreaWrap::getInternalInstance() {
  return this->instance.get();
}

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QScrollAreaWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = std::make_unique<NScrollArea>(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = std::make_unique<NScrollArea>();
  }else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
}

QScrollAreaWrap::~QScrollAreaWrap() {
   this->instance.reset();
}

Napi::Value QScrollAreaWrap::setWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object contentWidget = info[0].As<Napi::Object>();
  QWidgetWrap* contentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(contentWidget);
  this->instance->setWidget(contentWidgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QScrollAreaWrap::takeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->takeWidget(); 
  // We will not return the value here since we are doing it in js side anyway
  return env.Null();
}