#include "qmainwindow_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"

Napi::FunctionReference QMainWindowWrap::constructor;

Napi::Object QMainWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMainWindow";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMainWindowWrap)
    InstanceMethod("setCentralWidget",&QMainWindowWrap::setCentralWidget),
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QMainWindow* QMainWindowWrap::getInternalInstance() {
  return this->instance;
}

QMainWindowWrap::QMainWindowWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QMainWindowWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  if(info.Length() == 1) {
    if(info[0].IsObject()){
      Napi::Object object_parent = info[0].As<Napi::Object>();
      QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
      this->instance = new QMainWindow(w_parent->getInternalInstance()); //this sets the parent to current widget
    }else{
      extrautils::throwTypeError(env, "Wrong type of arguments");
    }
  }else if (info.Length() == 0){
    this->instance = new QMainWindow();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QMainWindowWrap::~QMainWindowWrap() {
  delete this->instance;
}

Napi::Value QMainWindowWrap::setCentralWidget(const Napi::CallbackInfo& info){
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object widgetObject = info[0].As<Napi::Object>();
  QWidgetWrap* centralWidget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(widgetObject);
  this->instance->setCentralWidget(centralWidget->getInternalInstance());

  return env.Null();
}



