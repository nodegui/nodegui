
#include "qplaintextedit_wrap.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"
#include <QWidget>


Napi::FunctionReference QPlainTextEditWrap::constructor;

Napi::Object QPlainTextEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPlainTextEdit";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setPlainText",&QPlainTextEditWrap::setPlainText),
    InstanceMethod("toPlainText",&QPlainTextEditWrap::toPlainText),
    InstanceMethod("clear", &QPlainTextEditWrap::clear),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QPlainTextEditWrap)
    QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QPlainTextEditWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NPlainTextEdit* QPlainTextEditWrap::getInternalInstance() {
  return this->instance;
}

QPlainTextEditWrap::QPlainTextEditWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QPlainTextEditWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NPlainTextEdit(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NPlainTextEdit();
  }else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(), &extrautils::measureQtWidget);
}

QPlainTextEditWrap::~QPlainTextEditWrap() {
  delete this->instance;
}

Napi::Value QPlainTextEditWrap::setPlainText(const Napi::CallbackInfo& info){
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String plainText = info[0].As<Napi::String>();
  this->instance->setPlainText(plainText.Utf8Value().c_str());
  return env.Null();
}

Napi::Value QPlainTextEditWrap::toPlainText(const Napi::CallbackInfo &info){
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->toPlainText().toStdString());
}

Napi::Value QPlainTextEditWrap::clear(const Napi::CallbackInfo &info){
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->clear();
  return env.Null();
}