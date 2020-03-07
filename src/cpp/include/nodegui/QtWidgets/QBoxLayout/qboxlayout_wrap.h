#pragma once

#include <napi.h>

#include <QBoxLayout>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QBoxLayout/nboxlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

class DLL_EXPORT QBoxLayoutWrap : public Napi::ObjectWrap<QBoxLayoutWrap> {
  QLAYOUT_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NBoxLayout> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QBoxLayoutWrap(const Napi::CallbackInfo& info);
  ~QBoxLayoutWrap();
  NBoxLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addLayout(const Napi::CallbackInfo& info);
  Napi::Value addSpacing(const Napi::CallbackInfo& info);
  Napi::Value addStretch(const Napi::CallbackInfo& info);
  Napi::Value addStrut(const Napi::CallbackInfo& info);
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value insertWidget(const Napi::CallbackInfo& info);
  Napi::Value direction(const Napi::CallbackInfo& info);
  Napi::Value insertLayout(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value setDirection(const Napi::CallbackInfo& info);
};
