#pragma once

#include <napi.h>

#include <QLayout>
#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QLayout/nlayout.hpp"
#include "QtWidgets/QLayout/qlayout_macro.h"

// ABSTRACT CLASS
class DLL_EXPORT QLayoutWrap : public Napi::ObjectWrap<QLayoutWrap> {
  QLAYOUT_WRAPPED_METHODS_DECLARATION
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
};
