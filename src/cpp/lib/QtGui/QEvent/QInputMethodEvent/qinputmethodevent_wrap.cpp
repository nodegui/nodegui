#include "QtGui/QEvent/QInputMethodEvent/qinputmethodevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QInputMethodEventWrap::constructor;

Napi::Object QInputMethodEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QInputMethodEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("commitString", &QInputMethodEventWrap::commitString),
       InstanceMethod("preeditString", &QInputMethodEventWrap::preeditString),
       InstanceMethod("replacementLength",
                      &QInputMethodEventWrap::replacementLength),
       InstanceMethod("replacementStart",
                      &QInputMethodEventWrap::replacementStart),
       InstanceMethod("setCommitString",
                      &QInputMethodEventWrap::setCommitString),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QInputMethodEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QInputMethodEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QInputMethodEvent* QInputMethodEventWrap::getInternalInstance() {
  return this->instance;
}

QInputMethodEventWrap::QInputMethodEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QInputMethodEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QInputMethodEvent> eventObject =
        info[0].As<Napi::External<QInputMethodEvent>>();
    this->instance = static_cast<QInputMethodEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QInputMethodEventWrap::~QInputMethodEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QInputMethodEventWrap::setCommitString(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String setCommitString = info[0].As<Napi::String>();
  int replaceFrom = info[1].As<Napi::Number>().Int32Value();
  int replaceLength = info[2].As<Napi::Number>().Int32Value();
  this->instance->setCommitString(
      QString::fromStdString(setCommitString.Utf8Value()), replaceFrom,
      replaceLength);
  return env.Null();
}

Napi::Value QInputMethodEventWrap::commitString(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString commitString = this->instance->commitString();
  return Napi::Value::From(env, commitString.toStdString());
}

Napi::Value QInputMethodEventWrap::preeditString(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString preeditString = this->instance->preeditString();
  return Napi::Value::From(env, preeditString.toStdString());
}

Napi::Value QInputMethodEventWrap::replacementLength(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = this->instance->replacementLength();
  return Napi::Number::From(env, x);
}

Napi::Value QInputMethodEventWrap::replacementStart(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = this->instance->replacementStart();
  return Napi::Number::From(env, x);
}
