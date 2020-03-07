#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QLayout/qlayout_macro.h"
#include "flexlayout.hpp"

class DLL_EXPORT FlexLayoutWrap : public Napi::ObjectWrap<FlexLayoutWrap> {
  QLAYOUT_WRAPPED_METHODS_DECLARATION
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
};
