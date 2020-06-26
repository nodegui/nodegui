#pragma once

#include <napi.h>

#include <QTabletEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QTabletEventWrap : public Napi::ObjectWrap<QTabletEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QTabletEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTabletEventWrap(const Napi::CallbackInfo& info);
  ~QTabletEventWrap();
  QTabletEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value button(const Napi::CallbackInfo& info);
  Napi::Value buttons(const Napi::CallbackInfo& info);
  // Somehow this method isn't found on build?
  // Napi::Value deviceType(const Napi::CallbackInfo& info);
  Napi::Value globalPos(const Napi::CallbackInfo& info);
  Napi::Value globalPosF(const Napi::CallbackInfo& info);
  Napi::Value globalX(const Napi::CallbackInfo& info);
  Napi::Value globalY(const Napi::CallbackInfo& info);
  Napi::Value pointerType(const Napi::CallbackInfo& info);
  Napi::Value pos(const Napi::CallbackInfo& info);
  Napi::Value posF(const Napi::CallbackInfo& info);
  Napi::Value pressure(const Napi::CallbackInfo& info);
  Napi::Value rotation(const Napi::CallbackInfo& info);
  Napi::Value tangentialPressure(const Napi::CallbackInfo& info);
  Napi::Value uniqueId(const Napi::CallbackInfo& info);
  Napi::Value x(const Napi::CallbackInfo& info);
  Napi::Value xTilt(const Napi::CallbackInfo& info);
  Napi::Value y(const Napi::CallbackInfo& info);
  Napi::Value yTilt(const Napi::CallbackInfo& info);
  Napi::Value z(const Napi::CallbackInfo& info);
};