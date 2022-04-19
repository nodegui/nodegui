#include "QtGui/QEvent/QTimerEvent/qtimerevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QTimerEventWrap::constructor;

Napi::Object QTimerEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTimerEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("timerId", &QTimerEventWrap::timerId),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTimerEventWrap)
                       QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QTimerEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTimerEvent* QTimerEventWrap::getInternalInstance() { return this->instance; }

QTimerEventWrap::QTimerEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTimerEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QTimerEvent> eventObject =
        info[0].As<Napi::External<QTimerEvent>>();
    this->instance = static_cast<QTimerEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QTimerEventWrap::~QTimerEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QTimerEventWrap::timerId(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->timerId());
}
