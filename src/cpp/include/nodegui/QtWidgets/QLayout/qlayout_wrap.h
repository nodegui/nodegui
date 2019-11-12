#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QLayout>
#include <QPointer>

#include "QtWidgets/QLayout/nlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

// ABSTRACT CLASS
class QLayoutWrap : public Napi::ObjectWrap<QLayoutWrap> {
 private:
  QPointer<NLayout> instance;

 public:
  static void init(Napi::Env env);
  QLayoutWrap(const Napi::CallbackInfo& info);
  ~QLayoutWrap();
  NLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  QLAYOUT_WRAPPED_METHODS_DECLARATION
};
