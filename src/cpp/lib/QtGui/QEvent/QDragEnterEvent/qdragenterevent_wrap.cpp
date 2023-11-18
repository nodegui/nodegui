#include "QtGui/QEvent/QDragEnterEvent/qdragenterevent_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"

Napi::FunctionReference QDragEnterEventWrap::constructor;

Napi::Object QDragEnterEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDragEnterEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QDROPMOVEEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragEnterEventWrap)
           QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragEnterEventWrap)
               QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragEnterEventWrap)
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(
                       QDragEnterEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDragEnterEvent* QDragEnterEventWrap::getInternalInstance() {
  return this->instance;
}

QDragEnterEventWrap::QDragEnterEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDragEnterEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QDragEnterEvent> eventObject =
        info[0].As<Napi::External<QDragEnterEvent>>();
    this->instance = static_cast<QDragEnterEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDragEnterEventWrap::~QDragEnterEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}
