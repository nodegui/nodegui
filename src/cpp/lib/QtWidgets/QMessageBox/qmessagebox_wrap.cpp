#include "QtWidgets/QMessageBox/qmessagebox_wrap.h"

#include <QDebug>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
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
  QOBJECT_REGISTER_WRAPPER(QMessageBox, QMessageBoxWrap);
  return exports;
}

QMessageBox* QMessageBoxWrap::getInternalInstance() { return this->instance; }

QMessageBoxWrap::~QMessageBoxWrap() { extrautils::safeDelete(this->instance); }

QMessageBoxWrap::QMessageBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMessageBoxWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NMessageBox();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QMessageBox>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NMessageBox(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QMessageBoxWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->instance->setStandardButtons(QMessageBox::NoButton);
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QMessageBoxWrap::setDefaultButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QPushButtonWrap* buttonWrap =
      Napi::ObjectWrap<QPushButtonWrap>::Unwrap(buttonObject);
  this->instance->setDefaultButton(buttonWrap->getInternalInstance());
  return env.Null();
}
Napi::Value QMessageBoxWrap::addButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object buttonObject = info[0].As<Napi::Object>();
  QObjectWrap* qobjWrap = Napi::ObjectWrap<QObjectWrap>::Unwrap(buttonObject);
  QAbstractButton* btn =
      qobject_cast<QAbstractButton*>(qobjWrap->getInternalInstance());

  int role = info[1].As<Napi::Number>().Int32Value();
  this->instance->addButton(btn, QMessageBox::ButtonRole(role));
  return env.Null();
}
Napi::Value QMessageBoxWrap::accept(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->accept();
  return env.Null();
}
Napi::Value QMessageBoxWrap::done(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number r = info[0].As<Napi::Number>();
  this->instance->done(r.Int32Value());
  return env.Null();
}

Napi::Value StaticQMessageBoxWrapMethods::about(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object parentObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* parentWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
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
  Napi::Object parentObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* parentWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
  Napi::String napiTitle = info[1].As<Napi::String>();
  std::string title = napiTitle.Utf8Value();
  QMessageBox::aboutQt(parentWidgetWrap->getInternalInstance(),
                       QString::fromUtf8(title.c_str()));

  return env.Null();
}