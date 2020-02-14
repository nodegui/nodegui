#pragma once

#include <napi.h>

#include "napplication.hpp"
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"

class DLL_EXPORT QApplicationWrap : public Napi::ObjectWrap<QApplicationWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NApplication> instance;
  bool _wasManuallyCreated = false;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QApplicationWrap(const Napi::CallbackInfo& info);
  ~QApplicationWrap();
  NApplication* getInternalInstance();
  // Wrapped methods
  Napi::Value processEvents(const Napi::CallbackInfo& info);
  Napi::Value exec(const Napi::CallbackInfo& info);
  Napi::Value quit(const Napi::CallbackInfo& info);
  Napi::Value exit(const Napi::CallbackInfo& info);
  Napi::Value setQuitOnLastWindowClosed(const Napi::CallbackInfo& info);
  Napi::Value quitOnLastWindowClosed(const Napi::CallbackInfo& info);
};

namespace StaticQApplicationWrapMethods {
DLL_EXPORT Napi::Value instance(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value clipboard(const Napi::CallbackInfo& info);
DLL_EXPORT Napi::Value style(const Napi::CallbackInfo& info);
}  // namespace StaticQApplicationWrapMethods
