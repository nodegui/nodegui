
#include "QtWidgets/QLineEdit/qlineedit_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QLineEditWrap::constructor;

Napi::Object QLineEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLineEdit";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setPlaceholderText", &QLineEditWrap::setPlaceholderText),
       InstanceMethod("setText", &QLineEditWrap::setText),
       InstanceMethod("text", &QLineEditWrap::text),
       InstanceMethod("setReadOnly", &QLineEditWrap::setReadOnly),
       InstanceMethod("clear", &QLineEditWrap::clear),
       InstanceMethod("setEchoMode", &QLineEditWrap::setEchoMode),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLineEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLineEdit* QLineEditWrap::getInternalInstance() { return this->instance; }

QLineEditWrap::QLineEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLineEditWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NLineEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NLineEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QLineEditWrap::~QLineEditWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QLineEditWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String text = info[0].As<Napi::String>();
  this->instance->setText(text.Utf8Value().c_str());
  return env.Null();
}

Napi::Value QLineEditWrap::setReadOnly(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Boolean isReadOnly = info[0].As<Napi::Boolean>();
  this->instance->setReadOnly(isReadOnly.Value());
  return env.Null();
}

Napi::Value QLineEditWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString text = this->instance->text();
  return Napi::String::New(env, text.toStdString().c_str());
}

Napi::Value QLineEditWrap::setPlaceholderText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String text = info[0].As<Napi::String>();
  this->instance->setPlaceholderText(text.Utf8Value().c_str());
  return env.Null();
}

Napi::Value QLineEditWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QLineEditWrap::setEchoMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number mode = info[0].As<Napi::Number>();
  this->instance->setEchoMode(
      static_cast<QLineEdit::EchoMode>(mode.Int32Value()));
  return env.Null();
}