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
       InstanceMethod("insertWidget", &QBoxLayoutWrap::insertWidget),
       InstanceMethod("direction", &QBoxLayoutWrap::direction),
       InstanceMethod("insertLayout", &QBoxLayoutWrap::insertLayout),
       InstanceMethod("insertSpacing", &QBoxLayoutWrap::insertSpacing),
       InstanceMethod("insertStretch", &QBoxLayoutWrap::insertStretch),
       InstanceMethod("removeWidget", &QBoxLayoutWrap::removeWidget),
       InstanceMethod("setDirection", &QBoxLayoutWrap::setDirection),
       InstanceMethod("setStretch", &QBoxLayoutWrap::setStretch),
       InstanceMethod("count", &QBoxLayoutWrap::count),
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
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
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
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  int stretch = info[1].As<Napi::Number>().Int32Value();
  Qt::Alignment alignment =
      static_cast<Qt::Alignment>(info[2].As<Napi::Number>().Int32Value());

  this->instance->addWidget(widget->getInternalInstance(), stretch, alignment);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::insertWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object qwidgetObject = info[1].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  int stretch = info[2].As<Napi::Number>().Int32Value();

  this->instance->insertWidget(index, widget->getInternalInstance(), stretch);
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

Napi::Value QBoxLayoutWrap::insertSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  int size = info[1].As<Napi::Number>().Int32Value();
  this->instance->insertSpacing(index, size);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::insertStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  int stretch = info[1].As<Napi::Number>().Int32Value();
  this->instance->insertStretch(index, stretch);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* widget =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
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

Napi::Value QBoxLayoutWrap::setStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  int stretch = info[1].As<Napi::Number>().Int32Value();
  this->instance->setStretch(index, stretch);
  return env.Null();
}

Napi::Value QBoxLayoutWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int count = this->instance->count();
  return Napi::Number::New(env, count);
}
