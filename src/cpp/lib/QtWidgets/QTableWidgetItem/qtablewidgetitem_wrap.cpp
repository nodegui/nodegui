#include "QtWidgets/QTableWidgetItem/qtablewidgetitem_wrap.h"

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QTableWidgetItemWrap::constructor;

Napi::Object QTableWidgetItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTableWidgetItem";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setText", &QTableWidgetItemWrap::setText),
       InstanceMethod("setToolTip", &QTableWidgetItemWrap::setToolTip),
       InstanceMethod("setTextAlignment",
                      &QTableWidgetItemWrap::setTextAlignment),
       InstanceMethod("textAlignment", &QTableWidgetItemWrap::textAlignment),
       InstanceMethod("text", &QTableWidgetItemWrap::text),
       InstanceMethod("toolTip", &QTableWidgetItemWrap::toolTip),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTableWidgetItemWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTableWidgetItem* QTableWidgetItemWrap::getInternalInstance() {
  return this->instance;
}
QTableWidgetItemWrap::~QTableWidgetItemWrap() { delete this->instance; }

QTableWidgetItemWrap::QTableWidgetItemWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableWidgetItemWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    QString text =
        QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
    this->instance = new QTableWidgetItem(text);
  } else if (info.Length() == 0) {
    this->instance = new QTableWidgetItem();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
Napi::Value QTableWidgetItemWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QTableWidgetItemWrap::setToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string tollTip = napiText.Utf8Value();
  this->instance->setToolTip(QString::fromUtf8(tollTip.c_str()));
  return env.Null();
}
Napi::Value QTableWidgetItemWrap::setTextAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int alignment = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTextAlignment(alignment);
  return env.Null();
}
Napi::Value QTableWidgetItemWrap::textAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int alignment = this->instance->textAlignment();
  return Napi::Number::New(env, alignment);
  return env.Null();
}
Napi::Value QTableWidgetItemWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string text = this->instance->text().toStdString();
  return Napi::String::New(env, text);
  return env.Null();
}
Napi::Value QTableWidgetItemWrap::toolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string toolTip = this->instance->toolTip().toStdString();
  return Napi::String::New(env, toolTip);
  return env.Null();
}