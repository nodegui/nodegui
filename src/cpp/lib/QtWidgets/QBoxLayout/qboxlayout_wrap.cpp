#include "QtWidgets/QBoxLayout/qboxlayout_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QBoxLayoutWrap::constructor;

Napi::Object QBoxLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QBoxLayout";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addLayout", &QBoxLayoutWrap::addLayout),
       InstanceMethod("addSpacing", &QBoxLayoutWrap::addSpacing),
       InstanceMethod("addStretch", &QBoxLayoutWrap::addStretch),
       InstanceMethod("addStrut", &QBoxLayoutWrap::addStrut),
       InstanceMethod("addWidget", &QBoxLayoutWrap::addWidget),
       InstanceMethod("direction", &QBoxLayoutWrap::direction),
       InstanceMethod("insertLayout", &QBoxLayoutWrap::insertLayout),
       InstanceMethod("removeWidget", &QBoxLayoutWrap::removeWidget),
       InstanceMethod("setDirection", &QBoxLayoutWrap::setDirection),
       QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(QBoxLayoutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NBoxLayout* QBoxLayoutWrap::getInternalInstance() { return this->instance; }
QBoxLayoutWrap::~QBoxLayoutWrap() { extrautils::safeDelete(this->instance); }

QBoxLayoutWrap::QBoxLayoutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QBoxLayoutWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    QBoxLayout::Direction dir = static_cast<QBoxLayout::Direction>(
        info[0].As<Napi::Number>().Int32Value());
    Napi::Object parentObject = info[1].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance =
        new NBoxLayout(dir, parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 1) {
    QBoxLayout::Direction dir = static_cast<QBoxLayout::Direction>(
        info[0].As<Napi::Number>().Int32Value());
    this->instance = new NBoxLayout(dir);
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QBoxLayoutWrap::addLayout(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object qlayoutObject = info[0].As<Napi::Object>();
  QLayoutWrap* layout = Napi::ObjectWrap<QLayoutWrap>::Unwrap(qlayoutObject);
  int stretch = info[1].As<Napi::Number>().Int32Value();
  this->instance->addLayout(layout->getInternalInstance(), stretch);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::addSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int size = info[0].As<Napi::Number>().Int32Value();
  this->instance->addSpacing(size);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::addStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int stretch = info[0].As<Napi::Number>().Int32Value();
  this->instance->addStretch(stretch);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::addStrut(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int size = info[0].As<Napi::Number>().Int32Value();
  this->instance->addStrut(size);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->addWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QBoxLayoutWrap::direction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, this->instance->direction());
}

Napi::Value QBoxLayoutWrap::insertLayout(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object qlayoutObject = info[1].As<Napi::Object>();
  QLayoutWrap* layout = Napi::ObjectWrap<QLayoutWrap>::Unwrap(qlayoutObject);
  int stretch = info[2].As<Napi::Number>().Int32Value();
  this->instance->insertLayout(index, layout->getInternalInstance(), stretch);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  this->instance->removeWidget(widget->getInternalInstance());
  return env.Null();
}

Napi::Value QBoxLayoutWrap::setDirection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QBoxLayout::Direction dir = static_cast<QBoxLayout::Direction>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setDirection(dir);
  return env.Null();
}