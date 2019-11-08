#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nwidget.hpp"

class QWidgetWrap : public Napi::ObjectWrap<QWidgetWrap> {
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
  QWIDGET_WRAPPED_METHODS_DECLARATION
};
