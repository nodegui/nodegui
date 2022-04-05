#include "QtGui/QEvent/QMoveEvent/qmoveevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"

Napi::FunctionReference QMoveEventWrap::constructor;

Napi::Object QMoveEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMoveEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("oldPos", &QMoveEventWrap::oldPos),
                   InstanceMethod("pos", &QMoveEventWrap::pos),

                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QMoveEventWrap)
                       QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QMoveEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QMoveEvent* QMoveEventWrap::getInternalInstance() { return this->instance; }

QMoveEventWrap::QMoveEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMoveEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QMoveEvent> eventObject =
        info[0].As<Napi::External<QMoveEvent>>();
    this->instance = static_cast<QMoveEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QMoveEventWrap::~QMoveEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QMoveEventWrap::oldPos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPoint ret = this->instance->oldPos();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(ret))});
  return instance;
}

Napi::Value QMoveEventWrap::pos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPoint ret = this->instance->pos();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(ret))});
  return instance;
}
