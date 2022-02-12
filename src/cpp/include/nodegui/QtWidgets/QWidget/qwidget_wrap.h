#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nwidget.hpp"

// NodeWidgetWrap is exactly like QWidgetWrap but it is used only to unwrap any
// N<SomeWidget> to QWidget*
class DLL_EXPORT NodeWidgetWrap : public Napi::ObjectWrap<NodeWidgetWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NWidget> instance;

 public:
  NodeWidgetWrap(const Napi::CallbackInfo& info)
      : Napi::ObjectWrap<NodeWidgetWrap>(info){};
  QWidget* getInternalInstance() { return this->instance; };
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};

class DLL_EXPORT QWidgetWrap : public Napi::ObjectWrap<QWidgetWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QWidgetWrap(const Napi::CallbackInfo& info);
  ~QWidgetWrap();
  NWidget* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
