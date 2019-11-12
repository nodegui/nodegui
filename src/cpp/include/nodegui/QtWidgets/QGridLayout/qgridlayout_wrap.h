#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QGridLayout>
#include <QPointer>

#include "QtWidgets/QGridLayout/ngridlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

class QGridLayoutWrap : public Napi::ObjectWrap<QGridLayoutWrap> {
 private:
  QPointer<NGridLayout> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QGridLayoutWrap(const Napi::CallbackInfo& info);
  ~QGridLayoutWrap();
  NGridLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};
