#pragma once

#include <napi.h>

#include <QDragLeaveEvent>
#include "QtGui/QEvent/QEvent/qevent_macro.h"

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDragLeaveEventWrap : public Napi::ObjectWrap<QDragLeaveEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QDragLeaveEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDragLeaveEventWrap(const Napi::CallbackInfo& info);
  ~QDragLeaveEventWrap();
  QDragLeaveEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods (none)
  // Methods from QEvent
  QEVENT_WRAPPED_METHODS_DECLARATION
};