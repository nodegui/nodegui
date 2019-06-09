#include "qmainwindow_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"

Napi::FunctionReference QMainWindowWrap::constructor;

Napi::Object QMainWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMainWindow";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMainWindowWrap)
    YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QMainWindowWrap)
    InstanceMethod("setCentralWidget",&QMainWindowWrap::setCentralWidget),
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMainWindow* QMainWindowWrap::getInternalInstance() {
  return this->instance;
}

QMainWindowWrap::QMainWindowWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QMainWindowWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  // SuppressDestruct();

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMainWindow(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NMainWindow();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
  this->instance->setAttribute(Qt::WA_DeleteOnClose);
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



