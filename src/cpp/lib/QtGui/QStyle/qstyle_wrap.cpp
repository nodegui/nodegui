#include "QtGui/QStyle/qstyle_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QStyleWrap::constructor;

Napi::Object QStyleWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStyle";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("pixelMetric", &QStyleWrap::pixelMetric),
                   InstanceMethod("polish", &QStyleWrap::polish),
                   InstanceMethod("unpolish", &QStyleWrap::unpolish),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QStyleWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QStyleWrap::QStyleWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStyleWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QStyle>>().Data();
  } else {
    Napi::TypeError::New(env, "Incorrect initialization of QStyleWrap")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QStyle* QStyleWrap::getInternalInstance() { return this->instance; }

Napi::Value QStyleWrap::pixelMetric(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int metricInt = info[0].As<Napi::Number>().Int32Value();
  QStyle::PixelMetric metric = static_cast<QStyle::PixelMetric>(metricInt);

  return Napi::Value::From(env, this->instance->pixelMetric(metric));
}

Napi::Value QStyleWrap::polish(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* qwidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  QWidget* qwidget = qwidgetWrap->getInternalInstance();
  this->instance->polish(qwidget);
  return env.Null();
}

Napi::Value QStyleWrap::unpolish(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* qwidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  QWidget* qwidget = qwidgetWrap->getInternalInstance();
  this->instance->unpolish(qwidget);
  return env.Null();
}
