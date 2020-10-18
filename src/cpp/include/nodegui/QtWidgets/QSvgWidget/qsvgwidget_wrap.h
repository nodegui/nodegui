#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nsvgwidget.hpp"

class DLL_EXPORT QSvgWidgetWrap : public Napi::ObjectWrap<QSvgWidgetWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NSvgWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSvgWidgetWrap(const Napi::CallbackInfo& info);
  ~QSvgWidgetWrap();
  NSvgWidget* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value load(const Napi::CallbackInfo& info);
};
