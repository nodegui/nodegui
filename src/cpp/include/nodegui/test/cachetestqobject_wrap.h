#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "test/CacheTestQObject.h"

class DLL_EXPORT CacheTestQObjectWrap
    : public Napi::ObjectWrap<CacheTestQObjectWrap>,
      public EventWidget {
  QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(this)

 private:
  QPointer<CacheTestQObject> instance;

 public:
  // class constructor
  static Napi::FunctionReference constructor;

  static Napi::Object init(Napi::Env env, Napi::Object exports);

  CacheTestQObjectWrap(const Napi::CallbackInfo& info);
  CacheTestQObject* getInternalInstance();

  virtual void connectSignalsToEventEmitter();

  // wrapped methods
  Napi::Value foo(const Napi::CallbackInfo& info);
  Napi::Value clearFoo(const Napi::CallbackInfo& info);
  Napi::Value bar(const Napi::CallbackInfo& info);
};
