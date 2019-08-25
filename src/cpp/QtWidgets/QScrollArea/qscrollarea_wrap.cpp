#include "qscrollarea_wrap.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"

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
  return this->instance;
}

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QScrollAreaWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NScrollArea(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NScrollArea();
  }else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
}

QScrollAreaWrap::~QScrollAreaWrap() {
  delete this->instance;
}

Napi::Value QScrollAreaWrap::setWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object contentWidget = info[0].As<Napi::Object>();
  QWidgetWrap* contentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(contentWidget);
  this->instance->setWidget(contentWidgetWrap->getInternalInstance());
  return env.Null();
}