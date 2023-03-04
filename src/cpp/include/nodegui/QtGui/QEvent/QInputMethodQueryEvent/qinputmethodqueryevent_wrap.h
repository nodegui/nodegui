#pragma once

#include <napi.h>

#include <QInputMethodQueryEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QInputMethodQueryEventWrap
    : public Napi::ObjectWrap<QInputMethodQueryEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QInputMethodQueryEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QInputMethodQueryEventWrap(const Napi::CallbackInfo& info);
  ~QInputMethodQueryEventWrap();
  QInputMethodQueryEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value queries(const Napi::CallbackInfo& info);
  Napi::Value setValue(const Napi::CallbackInfo& info);
  Napi::Value value(const Napi::CallbackInfo& info);
};