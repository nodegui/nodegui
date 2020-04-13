#include "QtGui/QEvent/QCloseEvent/qcloseevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QCloseEventWrap::constructor;

Napi::Object QCloseEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCloseEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("accept", &QCloseEventWrap::accept),
                   InstanceMethod("ignore", &QCloseEventWrap::ignore),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QCloseEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QCloseEvent* QCloseEventWrap::getInternalInstance() { return this->instance; }

QCloseEventWrap::QCloseEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QCloseEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QCloseEvent> eventObject =
        info[0].As<Napi::External<QCloseEvent>>();
    this->instance = static_cast<QCloseEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QCloseEventWrap::~QCloseEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QCloseEventWrap::accept(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->accept();
  return env.Null();
}

Napi::Value QCloseEventWrap::ignore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->ignore();
  return env.Null();
}
