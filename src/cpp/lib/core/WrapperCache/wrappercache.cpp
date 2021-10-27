#include "core/WrapperCache/wrappercache.h"

#include "Extras/Utils/nutils.h"

DLL_EXPORT WrapperCache WrapperCache::instance;

Napi::FunctionReference WrapperCache::destroyedCallback;

WrapperCache::WrapperCache() {}

Napi::Object WrapperCache::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);

  exports.Set("WrapperCache_injectCallback",
              Napi::Function::New<injectDestroyCallback>(env));
  return exports;
}

Napi::Value WrapperCache::injectDestroyCallback(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  destroyedCallback = Napi::Persistent(info[0].As<Napi::Function>());
  return env.Null();
}

Napi::Object WrapperCache::get(const Napi::CallbackInfo& info,
                               QScreen* screen) {
  Napi::Env env = info.Env();

  if (this->cache.contains(screen)) {
    napi_value result = nullptr;
    napi_get_reference_value(this->cache[screen].env, this->cache[screen].ref,
                             &result);
    return Napi::Object(env, result);
  }

  Napi::HandleScope scope(env);
  Napi::Object wrapper =
      QScreenWrap::constructor.New({Napi::External<QScreen>::New(env, screen)});

  napi_ref ref = nullptr;
  napi_create_reference(env, wrapper, 1, &ref);
  this->cache[screen].env = napi_env(env);
  this->cache[screen].ref = ref;

  QObject::connect(screen, &QObject::destroyed, this,
                   &WrapperCache::handleDestroyed);

  return wrapper;
}

void WrapperCache::handleDestroyed(const QObject* object) {
  if (!this->cache.contains(object)) {
    return;
  }

  // Callback to JS with the address/ID of the destroyed object. So that it
  // can clear it out of the cache.
  if (destroyedCallback) {
    Napi::Env env = destroyedCallback.Env();
    Napi::HandleScope scope(env);
    destroyedCallback.Call(
        {Napi::Value::From(env, extrautils::hashPointerTo53bit(object))});
  }

  uint32_t result = 0;
  napi_reference_unref(this->cache[object].env, this->cache[object].ref, &result);
  this->cache.remove(object);
}
