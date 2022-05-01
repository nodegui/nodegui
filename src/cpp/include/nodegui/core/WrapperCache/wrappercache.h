#pragma once

#include <napi.h>

#include <QtCore/QMap>
#include <QtCore/QObject>

#include "Extras/Export/export.h"
#include "Extras/Utils/nutils.h"


struct CachedObject {
  napi_ref ref;
  napi_env env;
};

typedef Napi::Object (*WrapFunc)(Napi::Env, QObject *);

/**
 * C++ side cache for wrapper objects.
 *
 * This can cache wrappers for QObjects and uses the Qt "destroyed" signal to
 * track lifetime and remove objects from the cache. It has a JS side component
 * `WrapperCache.ts` which can cache the JS side wrapper object.
 */
class DLL_EXPORT WrapperCache : public QObject {
  Q_OBJECT

 private:
  QMap<uint64_t, CachedObject> cache;
  QMap<QString, WrapFunc> wrapperRegistry;

 public:
  /**
   * Singleton instance. Use this to access the cache.
   */
  static WrapperCache instance;

  /**
   * Get a wrapper for a given Qt object.
   *
   * @param T - (template argument) The Qt class of the object being cached,
   * e.g. `QScreen`.
   * @param W - (template argument) The wrapper type which matches the object
   * `QScreenWrap`.
   * @param env = Napi environment
   * @param object - Pointer to the QObject for which a wrapper is required.
   * @return The JS wrapper object.
   */
  template <class T>
  Napi::Object get(Napi::Env env, T* object, Napi::FunctionReference* constructorFunc, bool isCreatedByNodeGui) {
    uint64_t ptrHash = extrautils::hashPointerTo53bit(object);
    if (this->cache.contains(ptrHash)) {
      napi_value result = nullptr;
      napi_get_reference_value(env, this->cache[ptrHash].ref, &result);

      napi_valuetype valuetype;
      napi_typeof(env, result, &valuetype);
      if (valuetype != napi_null) {
        return Napi::Object(env, result);
      }
    }

    Napi::Object wrapper = constructorFunc->New({Napi::External<T>::New(env, object)});

    store(env, extrautils::hashPointerTo53bit(object), object, wrapper, isCreatedByNodeGui);
    return wrapper;
  }

  void registerWrapper(QString typeName, WrapFunc wrapFunc) {
    this->wrapperRegistry[typeName] = wrapFunc;
  }

  Napi::Value getWrapper(Napi::Env env, QObject* qobject) {
    if (qobject == nullptr) {
      return env.Null();
    }

    uint64_t ptrHash = extrautils::hashPointerTo53bit(qobject);
    if (this->cache.contains(ptrHash)) {
      napi_value result = nullptr;
      napi_get_reference_value(env, this->cache[ptrHash].ref, &result);

      napi_valuetype valuetype;
      napi_typeof(env, result, &valuetype);
      if (valuetype != napi_null) {
        return Napi::Object(env, result);
      }
    }

    // QString className(object->metaObject()->className());
    // if (this->wrapperRegistry.contains(className)) {
    //   this->wrapperRegistry[className]
    // }

    return env.Null();
  }

  /**
   * Store a mapping from Qt Object to wrapper
   *
   * @param T - (template argument) The Qt class of the object being cached,
   * e.g. `QScreen`.
   * @param W - (template argument) The wrapper type which matches the object
   * `QScreenWrap`.
   * @param env = Napi environment
   * @param object - Pointer to the QObject for which a wrapper is required.
   * @param wrapper - The wrapper object matching `object`.
   */
  void store(Napi::Env env, uint64_t ptrHash, QObject *qobject, Napi::Object wrapper, bool isWeak) {
    napi_ref ref = nullptr;

    napi_create_reference(env, wrapper, isWeak ? 0 : 1, &ref);
    this->cache[ptrHash].env = napi_env(env);
    this->cache[ptrHash].ref = ref;

    QObject::connect(qobject, &QObject::destroyed, this,
                     &WrapperCache::handleDestroyed);
  }

  static Napi::Object init(Napi::Env env, Napi::Object exports) {
    exports.Set("WrapperCache_injectCallback",
                Napi::Function::New<injectDestroyCallback>(env));
    exports.Set("WrapperCache_store",
                Napi::Function::New<storeJS>(env));
    return exports;
  }

  static Napi::Value injectDestroyCallback(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    destroyedCallback = Napi::Persistent(info[0].As<Napi::Function>());
    return env.Null();
  }

  static Napi::Value storeJS(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    Napi::Object objectWrapper = info[0].As<Napi::Object>();
    QObject* qobject = info[1].As<Napi::External<QObject>>().Data();

    uint64_t ptrHash = extrautils::hashPointerTo53bit(qobject);
    instance.store(env, ptrHash, qobject, objectWrapper, false);
    return env.Null();
  }

  static Napi::FunctionReference destroyedCallback;

 public Q_SLOTS:
  void handleDestroyed(const QObject* object) {
    uint64_t ptrHash = extrautils::hashPointerTo53bit(object);
    if (!this->cache.contains(ptrHash)) {
      return;
    }

    // Callback to JS with the address/ID of the destroyed object. So that it
    // can clear it out of the cache.
    if (destroyedCallback) {
      Napi::Env env = destroyedCallback.Env();
      Napi::HandleScope scope(env);
      destroyedCallback.Call(
          env.Global(),
          {Napi::Value::From(env, ptrHash)});
    }

    uint32_t result = 0;
// TODO: Grab the wrapper C++ object and null out its ref to the Qt object.

    napi_reference_unref(this->cache[ptrHash].env, this->cache[ptrHash].ref,
                         &result);
    this->cache.remove(ptrHash);
  }
};
