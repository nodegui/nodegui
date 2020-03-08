#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QScrollAreaWrap::constructor;

Napi::Object QScrollAreaWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScrollArea";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("ensureVisible", &QScrollAreaWrap::ensureVisible),
       InstanceMethod("ensureWidgetVisible",
                      &QScrollAreaWrap::ensureWidgetVisible),
       InstanceMethod("setWidget", &QScrollAreaWrap::setWidget),
       InstanceMethod("takeWidget", &QScrollAreaWrap::takeWidget),
       QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(QScrollAreaWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NScrollArea* QScrollAreaWrap::getInternalInstance() { return this->instance; }

QScrollAreaWrap::~QScrollAreaWrap() { extrautils::safeDelete(this->instance); }

QScrollAreaWrap::QScrollAreaWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScrollAreaWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NScrollArea(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NScrollArea();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->scrollNode = YGNodeNew();
  YGConfigSetUseWebDefaults(this->scrollNode->getConfig(), true);
  FlexNodeContext* scrollNodeCtx = new FlexNodeContext(this->instance);
  YGNodeSetContext(this->scrollNode, scrollNodeCtx);

  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QScrollAreaWrap::ensureVisible(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int xmargin = info[2].As<Napi::Number>().Int32Value();
  int ymargin = info[3].As<Napi::Number>().Int32Value();
  this->instance->ensureVisible(x, y, xmargin, ymargin);
  return env.Null();
}

Napi::Value QScrollAreaWrap::ensureWidgetVisible(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object childWidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* childWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(childWidgetObject);
  int xmargin = info[1].As<Napi::Number>().Int32Value();
  int ymargin = info[2].As<Napi::Number>().Int32Value();
  this->instance->ensureWidgetVisible(childWidgetWrap->getInternalInstance(),
                                      xmargin, ymargin);
  return env.Null();
}

Napi::Value QScrollAreaWrap::setWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object contentWidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* contentWidgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(contentWidgetObject);
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
