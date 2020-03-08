#include "QtWidgets/QGridLayout/qgridlayout_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QGridLayoutWrap::constructor;

Napi::Object QGridLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QGridLayout";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addWidget", &QGridLayoutWrap::addWidget),
       InstanceMethod("removeWidget", &QGridLayoutWrap::removeWidget),
       QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(QGridLayoutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NGridLayout* QGridLayoutWrap::getInternalInstance() { return this->instance; }
QGridLayoutWrap::~QGridLayoutWrap() { extrautils::safeDelete(this->instance); }

QGridLayoutWrap::QGridLayoutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QGridLayoutWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NGridLayout(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NGridLayout();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QGridLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  Napi::Number qrow = info[1].As<Napi::Number>();
  Napi::Number qcol = info[2].As<Napi::Number>();
  Napi::Number qrowSpan = info[3].As<Napi::Number>();
  Napi::Number qcolSpan = info[4].As<Napi::Number>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance(), qrow, qcol, qrowSpan,
                            qcolSpan);

  return env.Null();
}

Napi::Value QGridLayoutWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->removeWidget(widget->getInternalInstance());
  return env.Null();
}
