#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "nscrollarea.hpp"

class QScrollAreaWrap : public Napi::ObjectWrap<QScrollAreaWrap> {
 private:
  QPointer<NScrollArea> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QScrollAreaWrap(const Napi::CallbackInfo &info);
  ~QScrollAreaWrap();
  NScrollArea *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value setWidget(const Napi::CallbackInfo &info);
  Napi::Value takeWidget(const Napi::CallbackInfo &info);
  Napi::Value setWidgetResizable(const Napi::CallbackInfo &info);
  Napi::Value widgetResizable(const Napi::CallbackInfo &info);

  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
};
