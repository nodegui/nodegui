
#include "qlineedit_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include <QWidget>


Napi::FunctionReference QLineEditWrap::constructor;

Napi::Object QLineEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLineEdit";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLineEditWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLineEdit* QLineEditWrap::getInternalInstance() {
  return this->instance;
}

QLineEditWrap::QLineEditWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QLineEditWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NLineEdit(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NLineEdit();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

QLineEditWrap::~QLineEditWrap() {
  delete this->instance;
}

