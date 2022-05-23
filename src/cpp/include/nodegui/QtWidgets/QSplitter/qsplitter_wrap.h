#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QSplitter/nsplitter.hpp"

class DLL_EXPORT QSplitterWrap : public Napi::ObjectWrap<QSplitterWrap> {
  QFRAME_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QSplitter> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QSplitterWrap(const Napi::CallbackInfo& info);
  ~QSplitterWrap();
  QSplitter* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value childrenCollapsible(const Napi::CallbackInfo& info);
  Napi::Value count(const Napi::CallbackInfo& info);
  Napi::Value indexOf(const Napi::CallbackInfo& info);
  Napi::Value insertWidget(const Napi::CallbackInfo& info);
  Napi::Value isCollapsible(const Napi::CallbackInfo& info);
  Napi::Value orientation(const Napi::CallbackInfo& info);
  Napi::Value setCollapsible(const Napi::CallbackInfo& info);
  Napi::Value setOrientation(const Napi::CallbackInfo& info);
};
