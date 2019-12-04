#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QBoxLayout>
#include <QPointer>

#include "QtWidgets/QBoxLayout/nboxlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

class QBoxLayoutWrap : public Napi::ObjectWrap<QBoxLayoutWrap> {
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
  Napi::Value direction(const Napi::CallbackInfo& info);
  Napi::Value insertLayout(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value setDirection(const Napi::CallbackInfo& info);
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};
