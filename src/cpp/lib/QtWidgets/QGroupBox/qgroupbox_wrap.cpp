#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QGroupBox/qgroupbox_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QGroupBoxWrap::constructor;

Napi::Object QGroupBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGroupBox";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("alignment", &QGroupBoxWrap::alignment),
                   InstanceMethod("isCheckable", &QGroupBoxWrap::isCheckable),
                   InstanceMethod("isChecked", &QGroupBoxWrap::isChecked),
                   InstanceMethod("isFlat", &QGroupBoxWrap::isFlat),
                   InstanceMethod("setAlignment", &QGroupBoxWrap::setAlignment),
                   InstanceMethod("setCheckable", &QGroupBoxWrap::setCheckable),
                   InstanceMethod("setFlat", &QGroupBoxWrap::setFlat),
                   InstanceMethod("setTitle", &QGroupBoxWrap::setTitle),
                   InstanceMethod("title", &QGroupBoxWrap::title),
                   InstanceMethod("setChecked", &QGroupBoxWrap::setChecked),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QGroupBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NGroupBox* QGroupBoxWrap::getInternalInstance() { return this->instance; }

QGroupBoxWrap::QGroupBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGroupBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NGroupBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NGroupBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

QGroupBoxWrap::~QGroupBoxWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QGroupBoxWrap::alignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int alignment = static_cast<int>(this->instance->alignment());
  return Napi::Value::From(env, alignment);
}

Napi::Value QGroupBoxWrap::isCheckable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool checkable = this->instance->isCheckable();
  return Napi::Value::From(env, checkable);
}

Napi::Value QGroupBoxWrap::isChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool checked = this->instance->isChecked();
  return Napi::Value::From(env, checked);
}

Napi::Value QGroupBoxWrap::isFlat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool flat = this->instance->isFlat();
  return Napi::Value::From(env, flat);
}

Napi::Value QGroupBoxWrap::setAlignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int alignment = info[0].As<Napi::Number>().Int32Value();
  this->instance->setAlignment(alignment);
  return env.Null();
}

Napi::Value QGroupBoxWrap::setCheckable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool checkable = info[0].As<Napi::Boolean>().Value();
  this->instance->setCheckable(checkable);
  return env.Null();
}

Napi::Value QGroupBoxWrap::setFlat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool flat = info[0].As<Napi::Boolean>().Value();
  this->instance->setFlat(flat);
  return env.Null();
}

Napi::Value QGroupBoxWrap::setTitle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string text = info[0].As<Napi::String>().Utf8Value();
  this->instance->setTitle(text.c_str());
  return env.Null();
}

Napi::Value QGroupBoxWrap::title(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString text = this->instance->title();
  return Napi::String::New(env, text.toStdString().c_str());
}

Napi::Value QGroupBoxWrap::setChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool checked = info[0].As<Napi::Boolean>().Value();
  this->instance->setChecked(checked);
  return env.Null();
}