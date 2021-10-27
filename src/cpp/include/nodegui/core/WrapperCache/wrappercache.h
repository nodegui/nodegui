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

class DLL_EXPORT WrapperCache : public QObject {
  Q_OBJECT

 private:
  QMap<const QObject*, CachedObject> cache;

 public:
  WrapperCache();
  Napi::Object get(const Napi::CallbackInfo& info, QScreen* screen);

  static WrapperCache instance;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  static Napi::Value injectDestroyCallback(const Napi::CallbackInfo& info);

  static Napi::FunctionReference destroyedCallback;

 public Q_SLOTS:
  void handleDestroyed(const QObject* object);
};
