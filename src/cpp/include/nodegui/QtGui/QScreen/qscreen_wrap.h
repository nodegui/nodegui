#pragma once

#include <napi.h>

#include <QPointer>
#include <QScreen>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"

class DLL_EXPORT QScreenWrap : public Napi::ObjectWrap<QScreenWrap>,
                               public EventWidget {
  QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(this)
  QOBJECT_SET_PARENT_IMPL

  // Note: We don't use EVENTWIDGET_IMPLEMENTATIONS() here because this class
  // doesn't handle any QEvents.

 private:
  QPointer<QScreen> instance;

 public:
  // class constructor
  static Napi::FunctionReference constructor;

  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QScreenWrap(const Napi::CallbackInfo& info);
  QScreen* getInternalInstance();

  virtual void connectSignalsToEventEmitter();

  // Wrapped methods
};
