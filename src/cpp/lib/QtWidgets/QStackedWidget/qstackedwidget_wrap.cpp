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
  return exports;
}

NStackedWidget* QStackedWidgetWrap::getInternalInstance() {
  return this->instance;
}

QStackedWidgetWrap::~QStackedWidgetWrap() {
  extrautils::safeDelete(this->instance);
}

QStackedWidgetWrap::QStackedWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStackedWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NStackedWidget(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NStackedWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QStackedWidgetWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance());

  return env.Null();
}

Napi::Value QStackedWidgetWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->removeWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QStackedWidgetWrap::setCurrentIndex(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number index = info[0].As<Napi::Number>();
  this->instance->setCurrentIndex(index.Int32Value());
  return env.Null();
}

Napi::Value QStackedWidgetWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->currentIndex();
  return Napi::Number::New(env, value);
}

Napi::Value QStackedWidgetWrap::setCurrentWidget(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);

  this->instance->setCurrentWidget(widget->getInternalInstance());
  return env.Null();
}
