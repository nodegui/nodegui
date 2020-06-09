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
       InstanceMethod("columnStretch", &QGridLayoutWrap::columnStretch),
       InstanceMethod("rowStretch", &QGridLayoutWrap::rowStretch),
       InstanceMethod("setColumnStretch", &QGridLayoutWrap::setColumnStretch),
       InstanceMethod("setRowStretch", &QGridLayoutWrap::setRowStretch),
       InstanceMethod("columnMinimumWidth",
                      &QGridLayoutWrap::columnMinimumWidth),
       InstanceMethod("rowMinimumHeight", &QGridLayoutWrap::rowMinimumHeight),
       InstanceMethod("setColumnMinimumWidth",
                      &QGridLayoutWrap::setColumnMinimumWidth),
       InstanceMethod("setRowMinimumHeight",
                      &QGridLayoutWrap::setRowMinimumHeight),
       InstanceMethod("horizontalSpacing", &QGridLayoutWrap::horizontalSpacing),
       InstanceMethod("verticalSpacing", &QGridLayoutWrap::verticalSpacing),
       InstanceMethod("setHorizontalSpacing",
                      &QGridLayoutWrap::setHorizontalSpacing),
       InstanceMethod("setVerticalSpacing",
                      &QGridLayoutWrap::setVerticalSpacing),
       InstanceMethod("columnCount", &QGridLayoutWrap::columnCount),
       InstanceMethod("rowCount", &QGridLayoutWrap::rowCount),
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

Napi::Value QGridLayoutWrap::columnStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int value = static_cast<int>(this->instance->columnStretch(column));
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::rowStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int value = static_cast<int>(this->instance->rowStretch(row));
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::setColumnStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int stretch = info[1].As<Napi::Number>().Int32Value();
  this->instance->setColumnStretch(column, stretch);
  return env.Null();
}

Napi::Value QGridLayoutWrap::setRowStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int stretch = info[1].As<Napi::Number>().Int32Value();
  this->instance->setRowStretch(row, stretch);
  return env.Null();
}

Napi::Value QGridLayoutWrap::columnMinimumWidth(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int value = static_cast<int>(this->instance->columnMinimumWidth(column));
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::rowMinimumHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int value = static_cast<int>(this->instance->rowMinimumHeight(row));
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::setColumnMinimumWidth(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int minSize = info[1].As<Napi::Number>().Int32Value();
  this->instance->setColumnMinimumWidth(column, minSize);
  return env.Null();
}

Napi::Value QGridLayoutWrap::setRowMinimumHeight(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int row = info[0].As<Napi::Number>().Int32Value();
  int minSize = info[1].As<Napi::Number>().Int32Value();
  this->instance->setRowMinimumHeight(row, minSize);
  return env.Null();
}

Napi::Value QGridLayoutWrap::horizontalSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int value = static_cast<int>(this->instance->horizontalSpacing());
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::verticalSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int value = static_cast<int>(this->instance->verticalSpacing());
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::setHorizontalSpacing(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int spacing = info[0].As<Napi::Number>().Int32Value();
  this->instance->setHorizontalSpacing(spacing);
  return env.Null();
}

Napi::Value QGridLayoutWrap::setVerticalSpacing(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int spacing = info[0].As<Napi::Number>().Int32Value();
  this->instance->setVerticalSpacing(spacing);
  return env.Null();
}

Napi::Value QGridLayoutWrap::columnCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int value = static_cast<int>(this->instance->columnCount());
  return Napi::Number::From(env, value);
}

Napi::Value QGridLayoutWrap::rowCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int value = static_cast<int>(this->instance->rowCount());
  return Napi::Number::From(env, value);
}