#include "QtWidgets/QSpinBox/qspinbox_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSpinBoxWrap::constructor;

Napi::Object QSpinBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSpinBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setRange", &QSpinBoxWrap::setRange),
       QABSTRACTSPINBOX_WRAPPED_METHODS_EXPORT_DEFINE(QSpinBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NSpinBox* QSpinBoxWrap::getInternalInstance() { return this->instance; }

QSpinBoxWrap::QSpinBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSpinBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NSpinBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NSpinBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QSpinBoxWrap::~QSpinBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QSpinBoxWrap::setRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number minimum = info[0].As<Napi::Number>();
  Napi::Number maximum = info[1].As<Napi::Number>();
  this->instance->setRange(minimum.Int32Value(), maximum.Int32Value());
  return env.Null();
}
