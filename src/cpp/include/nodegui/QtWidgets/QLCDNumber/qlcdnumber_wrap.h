#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlcdnumber.hpp"

class DLL_EXPORT QLCDNumberWrap : public Napi::ObjectWrap<QLCDNumberWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NLCDNumber> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QLCDNumberWrap(const Napi::CallbackInfo& info);
  ~QLCDNumberWrap();
  NLCDNumber* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value checkOverflow(const Napi::CallbackInfo& info);
  Napi::Value display(const Napi::CallbackInfo& info);
  Napi::Value setBinMode(const Napi::CallbackInfo& info);
  Napi::Value setDecMode(const Napi::CallbackInfo& info);
  Napi::Value setHexMode(const Napi::CallbackInfo& info);
  Napi::Value setOctMode(const Napi::CallbackInfo& info);
};
