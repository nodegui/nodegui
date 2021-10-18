#pragma once

#include <napi.h>

#include <QWheelEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "QtGui/QEvent/QInputEvent/qinputevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QWheelEventWrap : public Napi::ObjectWrap<QWheelEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION
  QINPUTEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QWheelEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QWheelEventWrap(const Napi::CallbackInfo& info);
  ~QWheelEventWrap();
  QWheelEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value angleDelta(const Napi::CallbackInfo& info);
  Napi::Value buttons(const Napi::CallbackInfo& info);
  Napi::Value globalPosition(const Napi::CallbackInfo& info);
  Napi::Value inverted(const Napi::CallbackInfo& info);
  Napi::Value phase(const Napi::CallbackInfo& info);
  Napi::Value pixelDelta(const Napi::CallbackInfo& info);
  Napi::Value position(const Napi::CallbackInfo& info);
};