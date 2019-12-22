#include "QtGui/QEvent/QPaintEvent/qpaintevent_wrap.h"

#include <QString>

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
Napi::FunctionReference QPaintEventWrap::constructor;

Napi::Object QPaintEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPaintEvent";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("rect", &QPaintEventWrap::rect),

                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPaintEvent* QPaintEventWrap::getInternalInstance() { return this->instance; }

QPaintEventWrap::QPaintEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPaintEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QPaintEvent> eventObject =
        info[0].As<Napi::External<QPaintEvent>>();
    this->instance = static_cast<QPaintEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPaintEventWrap::~QPaintEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QPaintEventWrap::rect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRect rect = this->instance->rect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}
