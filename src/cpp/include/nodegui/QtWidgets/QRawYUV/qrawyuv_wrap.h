#pragma once
#include <napi.h>
#include <QPointer>
#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "core/NodeWidget/nodewidget.h"

#include "OpenGLDisplay.h"

class DLL_EXPORT QRawYUVWrap : public Napi::ObjectWrap<QRawYUVWrap> {
  // QFRAME_WRAPPED_METHODS_DECLARATION
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<OpenGLDisplay> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QRawYUVWrap(const Napi::CallbackInfo& info);
  ~QRawYUVWrap();
  OpenGLDisplay* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setSize(const Napi::CallbackInfo& info);
  Napi::Value render(const Napi::CallbackInfo& info);
};
