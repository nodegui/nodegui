#pragma once

#include <napi.h>

#include <QDragMoveEvent>

#include "Extras/Export/export.h"
#include "core/Component/component_macro.h"

/*
NOTE : QDragMoveEvent inherits from QDropEvent
- Is it possible to inherit from QDropEventWrap directly?
*/

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

  // methods of QDragMoveEvent itself
  // Napi::Value accept(const Napi::CallbackInfo& info); //already in qevent
  Napi::Value answerRect(const Napi::CallbackInfo& info);
  // Napi::Value ignore(const Napi::CallbackInfo& info); //already in qevent

  // methods copied from QDropEvent
  Napi::Value acceptProposedAction(const Napi::CallbackInfo& info);
  Napi::Value dropAction(const Napi::CallbackInfo& info);
  Napi::Value keyboardModifiers(const Napi::CallbackInfo& info);
  Napi::Value mouseButtons(const Napi::CallbackInfo& info);
  Napi::Value mimeData(const Napi::CallbackInfo& info);
  Napi::Value pos(const Napi::CallbackInfo& info);
  Napi::Value possibleActions(const Napi::CallbackInfo& info);
  Napi::Value proposedAction(const Napi::CallbackInfo& info);
  Napi::Value setDropAction(const Napi::CallbackInfo& info);

  // Methods from QEvent (Not using macro because accept and ignore are
  // overloaded)
  Napi::Value accept(const Napi::CallbackInfo& info);
  Napi::Value ignore(const Napi::CallbackInfo& info);
  Napi::Value isAccepted(const Napi::CallbackInfo& info);
  Napi::Value setAccepted(const Napi::CallbackInfo& info);
  Napi::Value spontaneous(const Napi::CallbackInfo& info);
  Napi::Value _type(const Napi::CallbackInfo& info);
};