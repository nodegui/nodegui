#pragma once

#include <napi.h>

#include <QTimerEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QTimerEventWrap : public Napi::ObjectWrap<QTimerEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QTimerEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTimerEventWrap(const Napi::CallbackInfo& info);
  ~QTimerEventWrap();
  QTimerEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value timerId(const Napi::CallbackInfo& info);
};
