#pragma once

#include <napi.h>

#include <QResizeEvent>

#include "Extras/Export/export.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QResizeEventWrap : public Napi::ObjectWrap<QResizeEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION

 private:
  QResizeEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QResizeEventWrap(const Napi::CallbackInfo& info);
  ~QResizeEventWrap();
  QResizeEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value oldSize(const Napi::CallbackInfo& info);
  Napi::Value size(const Napi::CallbackInfo& info);
};
