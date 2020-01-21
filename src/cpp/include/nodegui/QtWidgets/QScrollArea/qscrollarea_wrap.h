#pragma once

#include <napi.h>

#include <QPointer>
#include "deps/yoga/YGMacros.h"

#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "nscrollarea.hpp"

class WIN_EXPORT QScrollAreaWrap : public Napi::ObjectWrap<QScrollAreaWrap> {
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NScrollArea> instance;
  YGNodeRef scrollNode;

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
};
