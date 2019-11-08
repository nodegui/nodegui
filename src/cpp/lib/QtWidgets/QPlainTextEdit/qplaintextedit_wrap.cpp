
#include "QtWidgets/QPlainTextEdit/qplaintextedit_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QPlainTextEditWrap::constructor;

Napi::Object QPlainTextEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPlainTextEdit";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setPlainText", &QPlainTextEditWrap::setPlainText),
       InstanceMethod("setPlaceholderText",
                      &QPlainTextEditWrap::setPlaceholderText),
       InstanceMethod("toPlainText", &QPlainTextEditWrap::toPlainText),
       InstanceMethod("setReadOnly", &QPlainTextEditWrap::setReadOnly),
       InstanceMethod("clear", &QPlainTextEditWrap::clear),
       InstanceMethod("setWordWrapMode", &QPlainTextEditWrap::setWordWrapMode),
       InstanceMethod("wordWrapMode", &QPlainTextEditWrap::wordWrapMode),
       InstanceMethod("setLineWrapMode", &QPlainTextEditWrap::setLineWrapMode),
       InstanceMethod("lineWrapMode", &QPlainTextEditWrap::lineWrapMode),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QPlainTextEditWrap)
           QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(
               QPlainTextEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NPlainTextEdit *QPlainTextEditWrap::getInternalInstance() {
  return this->instance;
}

QPlainTextEditWrap::QPlainTextEditWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QPlainTextEditWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap *parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance =
        new NPlainTextEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NPlainTextEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  // Adds measure function on yoga node so that widget size is calculated based
  // on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QPlainTextEditWrap::~QPlainTextEditWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QPlainTextEditWrap::setPlainText(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String plainText = info[0].As<Napi::String>();
  this->instance->setPlainText(plainText.Utf8Value().c_str());
  return env.Null();
}

Napi::Value QPlainTextEditWrap::setPlaceholderText(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String text = info[0].As<Napi::String>();
  this->instance->setPlaceholderText(text.Utf8Value().c_str());
  return env.Null();
}

Napi::Value QPlainTextEditWrap::setReadOnly(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean isReadOnly = info[0].As<Napi::Boolean>();
  this->instance->setReadOnly(isReadOnly.Value());
  return env.Null();
}

Napi::Value QPlainTextEditWrap::toPlainText(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->toPlainText().toStdString());
}

Napi::Value QPlainTextEditWrap::clear(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->clear();
  return env.Null();
}

Napi::Value QPlainTextEditWrap::setWordWrapMode(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number mode = info[0].As<Napi::Number>();
  this->instance->setWordWrapMode(
      static_cast<QTextOption::WrapMode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QPlainTextEditWrap::wordWrapMode(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = static_cast<int>(this->instance->wordWrapMode());
  return Napi::Number::From(env, value);
}

Napi::Value QPlainTextEditWrap::setLineWrapMode(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number mode = info[0].As<Napi::Number>();
  this->instance->setLineWrapMode(
      static_cast<QPlainTextEdit::LineWrapMode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QPlainTextEditWrap::lineWrapMode(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = static_cast<int>(this->instance->lineWrapMode());
  return Napi::Number::From(env, value);
}
