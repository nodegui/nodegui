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
  QPointer<QLayout> instance;

 public:
  static void init(Napi::Env env, Napi::Object exports);
  QLayoutWrap(const Napi::CallbackInfo& info);
  ~QLayoutWrap();
  QLayout* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
