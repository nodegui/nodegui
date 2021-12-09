#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QEvent/QResizeEvent/qresizeevent_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QResizeEventWrap::constructor;

Napi::Object QResizeEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QResizeEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("oldSize", &QResizeEventWrap::oldSize),
       InstanceMethod("size", &QResizeEventWrap::size),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QResizeEventWrap)
           QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(QResizeEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QResizeEvent* QResizeEventWrap::getInternalInstance() { return this->instance; }

QResizeEventWrap::QResizeEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QResizeEventWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::External<QResizeEvent> eventObject =
        info[0].As<Napi::External<QResizeEvent>>();
    this->instance = static_cast<QResizeEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QResizeEventWrap::~QResizeEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QResizeEventWrap::oldSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSize size = this->instance->oldSize();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}

Napi::Value QResizeEventWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSize size = this->instance->size();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}
