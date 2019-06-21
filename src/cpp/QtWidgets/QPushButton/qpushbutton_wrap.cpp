#include "qpushbutton_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"

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

NPushButton* QPushButtonWrap::getInternalInstance() {
  return this->instance;
}

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NPushButton(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NPushButton();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
  // Adds measure function on yoga node so that widget size is calculated based on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(), &extrautils::measureQtWidget);
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
  return env.Null();
}

 