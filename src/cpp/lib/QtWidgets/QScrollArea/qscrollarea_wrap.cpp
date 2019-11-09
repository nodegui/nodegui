#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollAreaWrap::constructor;

Napi::Object QScrollAreaWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollArea";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setWidget", &QScrollAreaWrap::setWidget),
       InstanceMethod("takeWidget", &QScrollAreaWrap::takeWidget),
       InstanceMethod("setWidgetResizable",
                      &QScrollAreaWrap::setWidgetResizable),
       InstanceMethod("widgetResizable", &QScrollAreaWrap::widgetResizable),

       QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QScrollAreaWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NScrollArea* QScrollAreaWrap::getInternalInstance() { return this->instance; }

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollAreaWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NScrollArea(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NScrollArea();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->instance->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
  // Adds measure function on yoga node so that widget size is calculated based
  // on its own size.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(),
                       &extrautils::measureQtWidget);
}

QScrollAreaWrap::~QScrollAreaWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QScrollAreaWrap::setWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object contentWidget = info[0].As<Napi::Object>();
  QWidgetWrap* contentWidgetWrap =
      Napi::ObjectWrap<QWidgetWrap>::Unwrap(contentWidget);
  this->instance->setWidget(contentWidgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QScrollAreaWrap::takeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->takeWidget();
  // We will not return the value here since we are doing it in js side anyway
  return env.Null();
}

Napi::Value QScrollAreaWrap::setWidgetResizable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean resizable = info[0].As<Napi::Boolean>();
  this->instance->setWidgetResizable(resizable.Value());
  return env.Null();
}

Napi::Value QScrollAreaWrap::widgetResizable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean resizable = info[0].As<Napi::Boolean>();
  bool value = this->instance->widgetResizable();
  return Napi::Value::From(env, value);
}
