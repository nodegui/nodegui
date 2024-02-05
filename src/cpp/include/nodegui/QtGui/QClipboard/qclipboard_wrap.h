#pragma once

#include <napi.h>

#include <QClipboard>
#include <QMimeData>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"

class DLL_EXPORT QClipboardWrap : public Napi::ObjectWrap<QClipboardWrap>,
                                  public EventWidget {
  QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(this)
  // Note: We don't use EVENTWIDGET_IMPLEMENTATIONS() here because this class
  // doesn't handle any QEvents.
  QOBJECT_SET_PARENT_IMPL

 private:
  QPointer<QClipboard> instance;

 public:
  static Napi::FunctionReference constructor;

  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QClipboardWrap(const Napi::CallbackInfo& info);
  QClipboard* getInternalInstance();

  virtual void connectSignalsToEventEmitter();

  // Wrapped methods
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value setMimeData(const Napi::CallbackInfo& info);
  Napi::Value mimeData(const Napi::CallbackInfo& info);
  Napi::Value setText(const Napi::CallbackInfo& info);
  Napi::Value text(const Napi::CallbackInfo& info);
  Napi::Value setPixmap(const Napi::CallbackInfo& info);
  Napi::Value pixmap(const Napi::CallbackInfo& info);
};
