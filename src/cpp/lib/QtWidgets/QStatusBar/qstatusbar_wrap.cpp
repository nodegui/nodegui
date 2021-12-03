#include "QtWidgets/QStatusBar/qstatusbar_wrap.h"

#include <nodegui/Extras/Utils/nutils.h>
#include <nodegui/QtWidgets/QWidget/qwidget_wrap.h>

#include <QWidget>

Napi::FunctionReference QStatusBarWrap::constructor;

Napi::Object QStatusBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStatusBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addPermanentWidget",
                      &QStatusBarWrap::addPermanentWidget),
       InstanceMethod("addWidget", &QStatusBarWrap::addWidget),
       InstanceMethod("clearMessage", &QStatusBarWrap::clearMessage),
       InstanceMethod("currentMessage", &QStatusBarWrap::currentMessage),
       InstanceMethod("insertPermanentWidget",
                      &QStatusBarWrap::insertPermanentWidget),
       InstanceMethod("insertWidget", &QStatusBarWrap::insertWidget),
       InstanceMethod("isSizeGripEnabled", &QStatusBarWrap::isSizeGripEnabled),
       InstanceMethod("removeWidget", &QStatusBarWrap::removeWidget),
       InstanceMethod("showMessage", &QStatusBarWrap::showMessage),
       InstanceMethod("setSizeGripEnabled",
                      &QStatusBarWrap::setSizeGripEnabled),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QStatusBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NStatusBar *QStatusBarWrap::getInternalInstance() { return this->instance; }

Napi::Value QStatusBarWrap::fromQStatusBar(Napi::Env env,
                                           QStatusBar *statusBar) {
  // The item might be a nullptr, therefore use env.Null() as return value.
  if (statusBar == nullptr) {
    return env.Null();
  }

  return QStatusBarWrap::constructor.New(
      {Napi::External<QStatusBar>::New(env, statusBar),
       Napi::Boolean::New(env, true)});
}

QStatusBarWrap::~QStatusBarWrap() { extrautils::safeDelete(this->instance); }

QStatusBarWrap::QStatusBarWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QStatusBarWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap *parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);

    this->instance = new NStatusBar(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NStatusBar();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QStatusBarWrap::addPermanentWidget(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Object widgetArg = info[0].As<Napi::Object>();
  Napi::Number stretchArg = info[1].As<Napi::Number>();

  NodeWidgetWrap *widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetArg);
  QWidget *widget = widgetWrap->getInternalInstance();
  int stretch = stretchArg.Int32Value();

  this->instance->addPermanentWidget(widget, stretch);

  return env.Null();
}

Napi::Value QStatusBarWrap::addWidget(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Object widgetArg = info[0].As<Napi::Object>();
  Napi::Number stretchArg = info[1].As<Napi::Number>();

  NodeWidgetWrap *widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetArg);
  QWidget *widget = widgetWrap->getInternalInstance();
  int stretch = stretchArg.Int32Value();

  this->instance->addWidget(widget, stretch);

  return env.Null();
}

Napi::Value QStatusBarWrap::clearMessage(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  this->instance->clearMessage();

  return env.Null();
}

Napi::Value QStatusBarWrap::currentMessage(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  std::string currentMessage = this->instance->currentMessage().toStdString();

  return Napi::String::New(env, currentMessage);
}

Napi::Value QStatusBarWrap::insertPermanentWidget(
    const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Number indexArg = info[0].As<Napi::Number>();
  Napi::Object widgetArg = info[1].As<Napi::Object>();
  Napi::Number stretchArg = info[2].As<Napi::Number>();

  int index = indexArg.Int32Value();
  NodeWidgetWrap *widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetArg);
  QWidget *widget = widgetWrap->getInternalInstance();
  int stretch = stretchArg.Int32Value();

  int targetIndex =
      this->instance->insertPermanentWidget(index, widget, stretch);

  return Napi::Value::From(env, targetIndex);
}

Napi::Value QStatusBarWrap::insertWidget(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Number indexArg = info[0].As<Napi::Number>();
  Napi::Object widgetArg = info[1].As<Napi::Object>();
  Napi::Number stretchArg = info[2].As<Napi::Number>();

  int index = indexArg.Int32Value();
  NodeWidgetWrap *widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetArg);
  QWidget *widget = widgetWrap->getInternalInstance();
  int stretch = stretchArg.Int32Value();
  int targetIndex = this->instance->insertWidget(index, widget, stretch);
  return Napi::Value::From(env, targetIndex);
}

Napi::Value QStatusBarWrap::isSizeGripEnabled(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  bool isEnabled = this->instance->isSizeGripEnabled();
  return Napi::Value::From(env, isEnabled);
}

Napi::Value QStatusBarWrap::removeWidget(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Object widgetArg = info[0].As<Napi::Object>();

  NodeWidgetWrap *widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetArg);
  QWidget *widget = widgetWrap->getInternalInstance();
  this->instance->removeWidget(widget);
  return env.Null();
}

Napi::Value QStatusBarWrap::showMessage(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::String message = info[0].As<Napi::String>();
  Napi::Number timeout = info[1].As<Napi::Number>();

  this->instance->showMessage(QString::fromStdString(message.Utf8Value()),
                              timeout.Int32Value());
  return env.Null();
}

Napi::Value QStatusBarWrap::setSizeGripEnabled(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::Boolean enableArg = info[0].As<Napi::Boolean>();
  bool enable = enableArg.ToBoolean();
  this->instance->setSizeGripEnabled(enable);
  return env.Null();
}