#pragma once

#include <napi.h>

#include <QMoveEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QMoveEventWrap : public Napi::ObjectWrap<QMoveEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QMoveEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QMoveEventWrap(const Napi::CallbackInfo& info);
  ~QMoveEventWrap();
  QMoveEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value oldPos(const Napi::CallbackInfo& info);
  Napi::Value pos(const Napi::CallbackInfo& info);
};
