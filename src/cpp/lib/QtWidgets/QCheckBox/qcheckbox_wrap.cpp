#include "QtWidgets/QCheckBox/qcheckbox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QCheckBoxWrap::constructor;

Napi::Object QCheckBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCheckBox";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setText", &QCheckBoxWrap::setText),
                   InstanceMethod("setChecked", &QCheckBoxWrap::setChecked),
                   InstanceMethod("isChecked", &QCheckBoxWrap::isChecked),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NCheckBox* QCheckBoxWrap::getInternalInstance() { return this->instance; }

QCheckBoxWrap::QCheckBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QCheckBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NCheckBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NCheckBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QCheckBoxWrap::~QCheckBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QCheckBoxWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String text = info[0].As<Napi::String>();
  std::string label = text.Utf8Value();
  this->instance->setText(label.c_str());

  return env.Null();
}

Napi::Value QCheckBoxWrap::isChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool isChecked = this->instance->isChecked();
  return Napi::Value::From(env, isChecked);
}

Napi::Value QCheckBoxWrap::setChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean check = info[0].As<Napi::Boolean>();
  this->instance->setChecked(check.Value());
  return env.Null();
}
