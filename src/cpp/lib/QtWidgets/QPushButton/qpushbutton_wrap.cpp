#include "QtWidgets/QPushButton/qpushbutton_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QPushButtonWrap::constructor;

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setFlat", &QPushButtonWrap::setFlat),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QPushButtonWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NPushButton* QPushButtonWrap::getInternalInstance() { return this->instance; }

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NPushButton(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NPushButton();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QPushButtonWrap::~QPushButtonWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QPushButtonWrap::setFlat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Boolean isFlat = info[0].As<Napi::Boolean>();
  this->instance->setFlat(isFlat.Value());
  return env.Null();
}
