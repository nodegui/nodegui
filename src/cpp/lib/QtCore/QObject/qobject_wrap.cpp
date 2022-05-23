#include "QtCore/QObject/qobject_wrap.h"

#include "Extras/Utils/nutils.h"
#include "core/WrapperCache/wrappercache.h"

Napi::FunctionReference QObjectWrap::constructor;

Napi::Object QObjectWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QObject";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QObjectWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QObject, QObjectWrap);
  return exports;
}

QObject* QObjectWrap::getInternalInstance() { return this->instance; }

QObjectWrap::~QObjectWrap() { extrautils::safeDelete(this->instance); }

QObjectWrap::QObjectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QObjectWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 1) {
    if (info[0].IsExternal()) {
      this->instance = info[0].As<Napi::External<QObject>>().Data();
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QObjectWrap* parentWidgetWrap =
          Napi::ObjectWrap<QObjectWrap>::Unwrap(parentObject);
      this->instance = new NObject(parentWidgetWrap->getInternalInstance());
    }
  } else if (argCount == 0) {
    this->instance = new NObject();
  } else {
    Napi::TypeError::New(env, "NodeGui: QObjectWrap: Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
