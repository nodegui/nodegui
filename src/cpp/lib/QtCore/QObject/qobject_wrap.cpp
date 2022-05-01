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
  WrapperCache::instance.registerWrapper(QString("NObject"), QObjectWrap::wrapFunc);
  return exports;
}

NObject* QObjectWrap::getInternalInstance() { return this->instance; }

QObjectWrap::~QObjectWrap() { extrautils::safeDelete(this->instance); }

QObjectWrap::QObjectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QObjectWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = info[0].As<Napi::External<NObject>>().Data();
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QObjectWrap* parentWidgetWrap =
          Napi::ObjectWrap<QObjectWrap>::Unwrap(parentObject);
      this->instance = new NObject(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NObject();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
  // WrapperCache::instance.store<QObject, QObjectWrap>(env, this->getInternalInstance(), this);
}

Napi::Object QObjectWrap::wrapFunc(Napi::Env env, QObject *qobject) {
  // Qtype *exactQObject = dynamic_cast<Qtype*>(qobject)
  Napi::Object wrapper = QObjectWrap::constructor.New({Napi::External<QObject>::New(env, qobject)});
  return wrapper;
}
