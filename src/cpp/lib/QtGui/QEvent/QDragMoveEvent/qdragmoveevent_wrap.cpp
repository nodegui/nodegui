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
      {
       // Methods of this class
       InstanceMethod("answerRect", &QDragMoveEventWrap::proposedAction),
       InstanceMethod("accept_qrect", &QDragMoveEventWrap::accept_qrect),
       InstanceMethod("ignore_qrect", &QDragMoveEventWrap::ignore_qrect),

       QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)
       QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)});
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

Napi::Value QDragMoveEventWrap::accept_qrect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->accept(QRect(x, y, width, height));
  return env.Null();
}
Napi::Value QDragMoveEventWrap::answerRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRect r = static_cast<QRect>(this->instance->answerRect());
  int x = static_cast<int>(r.x());
  int y = static_cast<int>(r.y());
  int w = static_cast<int>(r.width());
  int h = static_cast<int>(r.height());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  obj.Set("width", Napi::Number::From(env, w));
  obj.Set("height", Napi::Number::From(env, h));
  return obj;
}
Napi::Value QDragMoveEventWrap::ignore_qrect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->ignore(QRect(x, y, width, height));
  return env.Null();
}
