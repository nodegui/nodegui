#pragma once

#include <napi.h>

#include <QtCore/QMap>
#include <QtCore/QObject>

#include "Extras/Export/export.h"
#include "QtGui/QScreen/qscreen_wrap.h"

struct CachedObject {
  napi_ref ref;
  napi_env env;
};

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
  QMap<const QObject*, CachedObject> cache;

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
  template <class T, class W>
  Napi::Object get(Napi::Env env, T* object) {
    if (this->cache.contains(object)) {
      napi_value result = nullptr;
      napi_get_reference_value(env, this->cache[object].ref, &result);
      return Napi::Object(env, result);
    }

    Napi::Object wrapper =
        W::constructor.New({Napi::External<T>::New(env, object)});

    napi_ref ref = nullptr;
    napi_create_reference(env, wrapper, 1, &ref);
    this->cache[object].env = napi_env(env);
    this->cache[object].ref = ref;

    QObject::connect(object, &QObject::destroyed, this,
                     &WrapperCache::handleDestroyed);
    return wrapper;
  }

  static Napi::Object init(Napi::Env env, Napi::Object exports) {
    exports.Set("WrapperCache_injectCallback",
                Napi::Function::New<injectDestroyCallback>(env));
    return exports;
  }

  static Napi::Value injectDestroyCallback(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    destroyedCallback = Napi::Persistent(info[0].As<Napi::Function>());
    return env.Null();
  }

  static Napi::FunctionReference destroyedCallback;

 public Q_SLOTS:
  void handleDestroyed(const QObject* object) {
    if (!this->cache.contains(object)) {
      return;
    }

    // Callback to JS with the address/ID of the destroyed object. So that it
    // can clear it out of the cache.
    if (destroyedCallback) {
      Napi::Env env = destroyedCallback.Env();
      Napi::HandleScope scope(env);
      destroyedCallback.Call(
          env.Global(),
          {Napi::Value::From(env, extrautils::hashPointerTo53bit(object))});
    }

    uint32_t result = 0;
    napi_reference_unref(this->cache[object].env, this->cache[object].ref,
                         &result);
    this->cache.remove(object);
  }
};
