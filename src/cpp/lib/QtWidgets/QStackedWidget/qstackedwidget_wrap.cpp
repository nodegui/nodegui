#include "QtWidgets/QStackedWidget/qstackedwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QStackedWidgetWrap::constructor;

Napi::Object QStackedWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStackedWidget";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addWidget", &QStackedWidgetWrap::addWidget),
       InstanceMethod("removeWidget", &QStackedWidgetWrap::removeWidget),
       InstanceMethod("setCurrentIndex", &QStackedWidgetWrap::setCurrentIndex),
       InstanceMethod("currentIndex", &QStackedWidgetWrap::currentIndex),
       InstanceMethod("setCurrentWidget",
                      &QStackedWidgetWrap::setCurrentWidget),
       QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(QStackedWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QStackedWidget, QStackedWidgetWrap);
  return exports;
}

QStackedWidget* QStackedWidgetWrap::getInternalInstance() {
  return this->instance;
}

QStackedWidgetWrap::~QStackedWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

QStackedWidgetWrap::QStackedWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStackedWidgetWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NStackedWidget();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QStackedWidget>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NStackedWidget(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QStackedWidgetWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QStackedWidgetWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance());

  return env.Null();
}

Napi::Value QStackedWidgetWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->removeWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QStackedWidgetWrap::setCurrentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->setCurrentIndex(index.Int32Value());
  return env.Null();
}

Napi::Value QStackedWidgetWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int value = this->instance->currentIndex();
  return Napi::Number::New(env, value);
}

Napi::Value QStackedWidgetWrap::setCurrentWidget(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);

  this->instance->setCurrentWidget(widget->getInternalInstance());
  return env.Null();
}
