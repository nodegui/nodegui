#pragma once

#include <napi.h>

#include <QDragEnterEvent>

#include "Extras/Export/export.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtGui/QEvent/QDragMoveEvent/qdragmoveevent_macro.h"
#include "QtGui/QEvent/QDropEvent/qdropevent_macro.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDragEnterEventWrap
    : public Napi::ObjectWrap<QDragEnterEventWrap> {
 private:
  QDragEnterEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDragEnterEventWrap(const Napi::CallbackInfo& info);
  ~QDragEnterEventWrap();
  QDragEnterEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods (none)

  COMPONENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION
  QDROPEVENT_WRAPPED_METHODS_DECLARATION
  QDROPMOVEEVENT_WRAPPED_METHODS_DECLARATION
};