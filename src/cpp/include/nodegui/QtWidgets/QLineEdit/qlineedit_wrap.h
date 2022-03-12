#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlineedit.hpp"

class DLL_EXPORT QLineEditWrap : public Napi::ObjectWrap<QLineEditWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NLineEdit> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLineEditWrap(const Napi::CallbackInfo& info);
  ~QLineEditWrap();
  NLineEdit* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value backspace(const Napi::CallbackInfo& info);
  Napi::Value cursorBackward(const Napi::CallbackInfo& info);
  Napi::Value cursorForward(const Napi::CallbackInfo& info);
  Napi::Value cursorPositionAt(const Napi::CallbackInfo& info);
  Napi::Value cursorWordBackward(const Napi::CallbackInfo& info);
  Napi::Value cursorWordForward(const Napi::CallbackInfo& info);
  Napi::Value del(const Napi::CallbackInfo& info);
  Napi::Value deselect(const Napi::CallbackInfo& info);
  Napi::Value end(const Napi::CallbackInfo& info);
  Napi::Value home(const Napi::CallbackInfo& info);
  Napi::Value insert(const Napi::CallbackInfo& info);
  Napi::Value selectionEnd(const Napi::CallbackInfo& info);
  Napi::Value selectionLength(const Napi::CallbackInfo& info);
  Napi::Value selectionStart(const Napi::CallbackInfo& info);
  Napi::Value setSelection(const Napi::CallbackInfo& info);
  Napi::Value setTextMargins(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value copy(const Napi::CallbackInfo& info);
  Napi::Value cut(const Napi::CallbackInfo& info);
  Napi::Value paste(const Napi::CallbackInfo& info);
  Napi::Value redo(const Napi::CallbackInfo& info);
  Napi::Value selectAll(const Napi::CallbackInfo& info);
  Napi::Value undo(const Napi::CallbackInfo& info);
};
