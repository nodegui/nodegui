#include "QtGui/QEvent/QDropEvent/qdropevent_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"

Napi::FunctionReference QDropEventWrap::constructor;

Napi::Object QDropEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDropEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDropEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDropEventWrap)

               COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDropEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDropEvent* QDropEventWrap::getInternalInstance() { return this->instance; }

QDropEventWrap::QDropEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDropEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QDropEvent> eventObject =
        info[0].As<Napi::External<QDropEvent>>();
    this->instance = static_cast<QDropEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDropEventWrap::~QDropEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

// Needs QWidget references... should I ?
// Napi::Value QDropEventWrap::source(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   return env.Null();
// }

// Methods from QEvent defined in Macro already
