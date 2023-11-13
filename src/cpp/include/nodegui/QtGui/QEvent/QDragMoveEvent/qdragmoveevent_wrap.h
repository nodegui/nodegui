#pragma once

#include <napi.h>

#include <QDragMoveEvent>

#include "Extras/Export/export.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtGui/QEvent/QDragMoveEvent/qdragmoveevent_macro.h"
#include "QtGui/QEvent/QDropEvent/qdropevent_macro.h"
#include "QtGui/QEvent/QEvent/qevent_macro.h"
#include "core/Component/component_macro.h"

class DLL_EXPORT QDragMoveEventWrap
    : public Napi::ObjectWrap<QDragMoveEventWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  QDragMoveEvent* instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDragMoveEventWrap(const Napi::CallbackInfo& info);
  ~QDragMoveEventWrap();
  QDragMoveEvent* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;

  QDROPMOVEEVENT_WRAPPED_METHODS_DECLARATION
  QDROPEVENT_WRAPPED_METHODS_DECLARATION
  QEVENT_WRAPPED_METHODS_DECLARATION
};
