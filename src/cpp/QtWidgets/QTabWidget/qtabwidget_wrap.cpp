#include "qtabwidget_wrap.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_wrap.h"
#include "src/cpp/QtGui/QIcon/qicon_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"
#include <QWidget>

Napi::FunctionReference QTabWidgetWrap::constructor;

Napi::Object QTabWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTabWidget";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("addTab", &QTabWidgetWrap::addTab),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTabWidgetWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTabWidget* QTabWidgetWrap::getInternalInstance() {
  return this->instance;
}

QTabWidgetWrap::QTabWidgetWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QTabWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTabWidget(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  } else if (info.Length() == 0){
    this->instance = new NTabWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(), &extrautils::measureQtWidget);
}

QTabWidgetWrap::~QTabWidgetWrap() {
  delete this->instance;
}

Napi::Value QTabWidgetWrap::addTab(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object widgetObject = info[0].As<Napi::Object>();
  Napi::Object iconObject = info[1].As<Napi::Object>();
  Napi::String napiLabel = info[2].As<Napi::String>();

  std::string label = napiLabel.Utf8Value();
  QWidgetWrap *widgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(widgetObject);
  QIconWrap *iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);

  this->instance->addTab(*widgetObject->getInternalInstance(), *iconWrap->getInternalInstance(), text.c_str());
  return env.Null();
}
