#include "test/cachetestqobject_wrap.h"

#include "Extras/Utils/nutils.h"
#include "core/WrapperCache/wrappercache.h"

Napi::FunctionReference CacheTestQObjectWrap::constructor;

Napi::Object CacheTestQObjectWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "CacheTestQObject";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("foo", &CacheTestQObjectWrap::foo),
       InstanceMethod("clearFoo", &CacheTestQObjectWrap::clearFoo),
       InstanceMethod("bar", &CacheTestQObjectWrap::bar),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(CacheTestQObjectWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

CacheTestQObject* CacheTestQObjectWrap::getInternalInstance() {
  return this->instance;
}

CacheTestQObjectWrap::CacheTestQObjectWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<CacheTestQObjectWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1 && info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<CacheTestQObject>>().Data();
  } else {
    if (info.Length() == 0) {
      this->instance = new CacheTestQObject();
    } else {
      Napi::TypeError::New(env,
                           "Wrong number of arguments to CacheTestQObject.")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

void CacheTestQObjectWrap::connectSignalsToEventEmitter() {
  QOBJECT_SIGNALS_ON_TARGET(this->instance.data());
}

Napi::Value CacheTestQObjectWrap::foo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  CacheTestQObject* foo = this->instance->foo();
  return WrapperCache::instance.get<CacheTestQObject, CacheTestQObjectWrap>(
      env, foo);
}

Napi::Value CacheTestQObjectWrap::clearFoo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->clearFoo();
  return env.Null();
}

Napi::Value CacheTestQObjectWrap::bar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  CacheTestQObject* bar = this->instance->bar();
  return WrapperCache::instance.get<CacheTestQObject, CacheTestQObjectWrap>(
      env, bar);
}
