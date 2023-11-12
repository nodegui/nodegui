#pragma once

#include <napi.h>

#include <QDropEvent>

#include "Extras/Export/export.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtGui/QEvent/QDropEvent/qdropevent_macro.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDropEventWrap : public Napi::ObjectWrap<QDropEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QDropEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDropEventWrap(const Napi::CallbackInfo& info);
  ~QDropEventWrap();
  QDropEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  QDROPEVENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION
};