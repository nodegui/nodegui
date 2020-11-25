#pragma once
#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "napi.h"
#include "nqdesktopwidget.hpp"

class QDesktopWidgetWrap : public Napi::ObjectWrap<QDesktopWidgetWrap> {
 private:
  QPointer<NQDesktopWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDesktopWidgetWrap(const Napi::CallbackInfo &info);
  ~QDesktopWidgetWrap();
  NQDesktopWidget *getInternalInstance();
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value availableGeometry(const Napi::CallbackInfo &info);
  Napi::Value screenGeometry(const Napi::CallbackInfo &info);
  Napi::Value screenNumber(const Napi::CallbackInfo &info);

  QWIDGET_WRAPPED_METHODS_DECLARATION
};
