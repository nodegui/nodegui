#include "QtGui/QEvent/QDragLeaveEvent/qdragleaveevent_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDragLeaveEventWrap::constructor;

Napi::Object QDragLeaveEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDragLeaveEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {// Methods inherited from QEvent
       QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragLeaveEventWrap)
           COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragLeaveEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDragLeaveEvent* QDragLeaveEventWrap::getInternalInstance() {
  return this->instance;
}

QDragLeaveEventWrap::QDragLeaveEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDragLeaveEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QDragLeaveEvent> eventObject =
        info[0].As<Napi::External<QDragLeaveEvent>>();
    this->instance = static_cast<QDragLeaveEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDragLeaveEventWrap::~QDragLeaveEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

// Methods from QEvent defined in Macro already
