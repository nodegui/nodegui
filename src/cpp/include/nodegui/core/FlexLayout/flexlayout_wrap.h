#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QLayout/qlayout_macro.h"
#include "flexlayout.h"

class FlexLayoutWrap : public Napi::ObjectWrap<FlexLayoutWrap> {
 private:
  QPointer<FlexLayout> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  FlexLayoutWrap(const Napi::CallbackInfo& info);
  ~FlexLayoutWrap();
  FlexLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value addWidget(const Napi::CallbackInfo& info);
  Napi::Value insertChildBefore(const Napi::CallbackInfo& info);
  Napi::Value removeWidget(const Napi::CallbackInfo& info);
  Napi::Value setFlexNode(const Napi::CallbackInfo& info);
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};
