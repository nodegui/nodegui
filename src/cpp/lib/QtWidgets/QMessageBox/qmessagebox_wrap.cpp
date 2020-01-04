#include "QtWidgets/QMessageBox/qmessagebox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QMessageBoxWrap::constructor;

Napi::Object QMessageBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMessageBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setDefaultButton", &QMessageBoxWrap::setDefaultButton),
       InstanceMethod("addButton", &QMessageBoxWrap::addButton),
       InstanceMethod("accept", &QMessageBoxWrap::accept),
       InstanceMethod("done", &QMessageBoxWrap::done),
       StaticMethod("about", &StaticQMessageBoxWrapMethods::about),
       StaticMethod("aboutQt", &StaticQMessageBoxWrapMethods::aboutQt),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QMessageBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMessageBox* QMessageBoxWrap::getInternalInstance() { return this->instance; }
QMessageBoxWrap::~QMessageBoxWrap() { extrautils::safeDelete(this->instance); }

QMessageBoxWrap::QMessageBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMessageBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NMessageBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NMessageBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->instance->setStandardButtons(QMessageBox::NoButton);
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QMessageBoxWrap::setDefaultButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QPushButtonWrap* buttonWrap =
      Napi::ObjectWrap<QPushButtonWrap>::Unwrap(buttonObject);
  this->instance->setDefaultButton(buttonWrap->getInternalInstance());
  return env.Null();
}
Napi::Value QMessageBoxWrap::addButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QPushButtonWrap* buttonWrap =
      Napi::ObjectWrap<QPushButtonWrap>::Unwrap(buttonObject);
  int role = info[1].As<Napi::Number>().Int32Value();
  this->instance->addButton(buttonWrap->getInternalInstance(),
                            QMessageBox::ButtonRole(role));
  return env.Null();
}
Napi::Value QMessageBoxWrap::accept(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->accept();
  return env.Null();
}
Napi::Value QMessageBoxWrap::done(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number r = info[0].As<Napi::Number>();
  this->instance->done(r.Int32Value());
  return env.Null();
}

Napi::Value StaticQMessageBoxWrapMethods::about(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object parentObject = info[0].As<Napi::Object>();
  QWidgetWrap* parentWidgetWrap =
      Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
  Napi::String napiTitle = info[1].As<Napi::String>();
  std::string title = napiTitle.Utf8Value();
  Napi::String napiText = info[2].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  QMessageBox::about(parentWidgetWrap->getInternalInstance(),
                     QString::fromUtf8(title.c_str()),
                     QString::fromUtf8(text.c_str()));

  return env.Null();
}

Napi::Value StaticQMessageBoxWrapMethods::aboutQt(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object parentObject = info[0].As<Napi::Object>();
  QWidgetWrap* parentWidgetWrap =
      Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
  Napi::String napiTitle = info[1].As<Napi::String>();
  std::string title = napiTitle.Utf8Value();
  QMessageBox::aboutQt(parentWidgetWrap->getInternalInstance(),
                       QString::fromUtf8(title.c_str()));

  return env.Null();
}