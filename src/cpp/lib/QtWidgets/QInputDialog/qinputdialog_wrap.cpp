#include "QtWidgets/QInputDialog/qinputdialog_wrap.h"

#include <QDebug>
#include <QLineEdit>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QInputDialogWrap::constructor;

Napi::Object QInputDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QInputDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setCancelButtonText",
                      &QInputDialogWrap::setCancelButtonText),
       InstanceMethod("cancelButtonText", &QInputDialogWrap::cancelButtonText),
       InstanceMethod("setComboBoxEditable",
                      &QInputDialogWrap::setComboBoxEditable),
       InstanceMethod("isComboBoxEditable",
                      &QInputDialogWrap::isComboBoxEditable),
       InstanceMethod("setDoubleDecimals",
                      &QInputDialogWrap::setDoubleDecimals),
       InstanceMethod("doubleDecimals", &QInputDialogWrap::doubleDecimals),
       InstanceMethod("setDoubleMaximum", &QInputDialogWrap::setDoubleMaximum),
       InstanceMethod("doubleMaximum", &QInputDialogWrap::doubleMaximum),
       InstanceMethod("setDoubleMinimum", &QInputDialogWrap::setDoubleMinimum),
       InstanceMethod("doubleMinimum", &QInputDialogWrap::doubleMinimum),
       InstanceMethod("doubleStep", &QInputDialogWrap::doubleStep),
       InstanceMethod("setDoubleStep", &QInputDialogWrap::setDoubleStep),
       InstanceMethod("doubleValue", &QInputDialogWrap::doubleValue),
       InstanceMethod("setDoubleValue", &QInputDialogWrap::setDoubleValue),
       InstanceMethod("inputMode", &QInputDialogWrap::inputMode),
       InstanceMethod("setInputMode", &QInputDialogWrap::setInputMode),
       InstanceMethod("intMaximum", &QInputDialogWrap::intMaximum),
       InstanceMethod("setIntMaximum", &QInputDialogWrap::setIntMaximum),
       InstanceMethod("intMinimum", &QInputDialogWrap::intMinimum),
       InstanceMethod("setIntMinimum", &QInputDialogWrap::setIntMinimum),
       InstanceMethod("intStep", &QInputDialogWrap::intStep),
       InstanceMethod("setIntStep", &QInputDialogWrap::setIntStep),
       InstanceMethod("intValue", &QInputDialogWrap::intValue),
       InstanceMethod("setIntValue", &QInputDialogWrap::setIntValue),
       InstanceMethod("labelText", &QInputDialogWrap::labelText),
       InstanceMethod("setLabelText", &QInputDialogWrap::setLabelText),
       InstanceMethod("okButtonText", &QInputDialogWrap::okButtonText),
       InstanceMethod("setOkButtonText", &QInputDialogWrap::setOkButtonText),
       InstanceMethod("options", &QInputDialogWrap::options),
       InstanceMethod("setOptions", &QInputDialogWrap::setOptions),
       InstanceMethod("textEchoMode", &QInputDialogWrap::textEchoMode),
       InstanceMethod("setTextEchoMode", &QInputDialogWrap::setTextEchoMode),
       InstanceMethod("textValue", &QInputDialogWrap::textValue),
       InstanceMethod("setTextValue", &QInputDialogWrap::setTextValue),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QInputDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NInputDialog* QInputDialogWrap::getInternalInstance() { return this->instance; }
QInputDialogWrap::~QInputDialogWrap() {
  extrautils::safeDelete(this->instance);
}

QInputDialogWrap::QInputDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QInputDialogWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NInputDialog(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NInputDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QInputDialogWrap::setCancelButtonText(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::String>().Utf8Value().c_str();
  this->instance->setCancelButtonText(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::cancelButtonText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->cancelButtonText().toStdString();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setComboBoxEditable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Boolean>().Value();
  this->instance->setComboBoxEditable(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::isComboBoxEditable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->isComboBoxEditable();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setDoubleDecimals(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setDoubleDecimals(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::doubleDecimals(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->doubleDecimals();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setDoubleMaximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setDoubleMaximum(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::doubleMaximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->doubleMaximum();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setDoubleMinimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setDoubleMinimum(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::doubleMinimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->doubleMinimum();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::doubleStep(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->doubleStep();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setDoubleStep(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setDoubleStep(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::doubleValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->doubleValue();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setDoubleValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setDoubleValue(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::inputMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->inputMode();
  return Napi::Value::From(env, static_cast<int>(retValue));
}
Napi::Value QInputDialogWrap::setInputMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setInputMode(static_cast<QInputDialog::InputMode>(value));
  return env.Null();
}
Napi::Value QInputDialogWrap::intMaximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->intMaximum();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setIntMaximum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setIntMaximum(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::intMinimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->intMinimum();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setIntMinimum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setIntMinimum(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::intStep(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->intStep();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setIntStep(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setIntStep(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::intValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->intValue();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setIntValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setIntValue(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::labelText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->labelText().toStdString();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setLabelText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::String>().Utf8Value().c_str();
  this->instance->setLabelText(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::okButtonText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->okButtonText().toStdString();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setOkButtonText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::String>().Utf8Value().c_str();
  this->instance->setOkButtonText(value);
  return env.Null();
}
Napi::Value QInputDialogWrap::options(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->options();
  return Napi::Value::From(env, static_cast<int>(retValue));
}
Napi::Value QInputDialogWrap::setOptions(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setOptions(
      static_cast<QInputDialog::InputDialogOptions>(value));
  return env.Null();
}
Napi::Value QInputDialogWrap::textEchoMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->textEchoMode();
  return Napi::Value::From(env, static_cast<int>(retValue));
}
Napi::Value QInputDialogWrap::setTextEchoMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTextEchoMode(static_cast<QLineEdit::EchoMode>(value));
  return env.Null();
}
Napi::Value QInputDialogWrap::textValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto retValue = this->instance->textValue().toStdString();
  return Napi::Value::From(env, retValue);
}
Napi::Value QInputDialogWrap::setTextValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  auto value = info[0].As<Napi::String>().Utf8Value().c_str();
  this->instance->setTextValue(value);
  return env.Null();
}