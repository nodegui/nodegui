#include "QtGui/QEvent/QDragMoveEvent/qdragmoveevent_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"

Napi::FunctionReference QDragMoveEventWrap::constructor;

Napi::Object QDragMoveEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDragMoveEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QDROPMOVEEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)
           QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)
               QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(
                       QDragMoveEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDragMoveEvent* QDragMoveEventWrap::getInternalInstance() {
  return this->instance;
}

QDragMoveEventWrap::QDragMoveEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDragMoveEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QDragMoveEvent> eventObject =
        info[0].As<Napi::External<QDragMoveEvent>>();
    this->instance = static_cast<QDragMoveEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDragMoveEventWrap::~QDragMoveEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}
