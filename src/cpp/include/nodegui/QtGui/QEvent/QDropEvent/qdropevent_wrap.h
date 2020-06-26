#pragma once

#include <napi.h>

#include <QDropEvent>
#include "QtGui/QEvent/QEvent/qevent_macro.h"

#include "Extras/Export/export.h"
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
  Napi::Value acceptProposedAction(const Napi::CallbackInfo& info);
  Napi::Value dropAction(const Napi::CallbackInfo& info);
  Napi::Value keyboardModifiers(const Napi::CallbackInfo& info);
  Napi::Value mouseButtons(const Napi::CallbackInfo& info);
  // Need to implement mimeData first?
  // Napi::Value QDropEventWrap::mimeData
  Napi::Value pos(const Napi::CallbackInfo& info);
  Napi::Value possibleActions(const Napi::CallbackInfo& info);
  Napi::Value proposedAction(const Napi::CallbackInfo& info);
  Napi::Value setDropAction(const Napi::CallbackInfo& info);

  // Methods from QEvent
  QEVENT_WRAPPED_METHODS_DECLARATION
};