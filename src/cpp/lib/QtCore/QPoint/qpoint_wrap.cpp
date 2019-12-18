#include "QtCore/QPoint/qpoint_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QPointWrap::constructor;

Napi::Object QPointWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPoint";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPointWrap::QPointWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPointWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    int xpos = info[0].As<Napi::Number>().Int32Value();
    int ypos = info[1].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QPoint>(xpos, ypos);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QPoint>(info[0].As<Napi::External<QPoint>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QPoint>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPointWrap::~QPointWrap() { this->instance.reset(); }

QPoint* QPointWrap::getInternalInstance() { return this->instance.get(); }

