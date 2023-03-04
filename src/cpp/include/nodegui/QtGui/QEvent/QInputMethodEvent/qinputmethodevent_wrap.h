#pragma once

#include <napi.h>

#include <QInputMethodEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QInputMethodEventWrap
    : public Napi::ObjectWrap<QInputMethodEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QInputMethodEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QInputMethodEventWrap(const Napi::CallbackInfo& info);
  ~QInputMethodEventWrap();
  QInputMethodEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value commitString(const Napi::CallbackInfo& info);
  Napi::Value preeditString(const Napi::CallbackInfo& info);
  Napi::Value replacementLength(const Napi::CallbackInfo& info);
  Napi::Value replacementStart(const Napi::CallbackInfo& info);
  Napi::Value setCommitString(const Napi::CallbackInfo& info);
};
