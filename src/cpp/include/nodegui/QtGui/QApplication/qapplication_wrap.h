#pragma once

#include <napi.h>

#include <QApplication>
#include <QPointer>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QApplicationWrap : public Napi::ObjectWrap<QApplicationWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<QApplication> instance;
  static int argc;
  static char** argv;
  bool _wasManuallyCreated = false;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QApplicationWrap(const Napi::CallbackInfo& info);
  ~QApplicationWrap();
  QApplication* getInternalInstance();
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
