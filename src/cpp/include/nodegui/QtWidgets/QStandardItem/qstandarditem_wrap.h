#pragma once

#include <napi.h>

#include <QStandardItem>

#include "Extras/Export/export.h"
#include "core/Component/component_wrap.h"

class DLL_EXPORT QStandardItemWrap
    : public Napi::ObjectWrap<QStandardItemWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
 private:
  QStandardItem *instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);

  QStandardItemWrap(const Napi::CallbackInfo &info);

  ~QStandardItemWrap();

  QStandardItem *getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value setCheckState(const Napi::CallbackInfo &info);
  Napi::Value setData(const Napi::CallbackInfo &info);
  Napi::Value setFlags(const Napi::CallbackInfo &info);
  Napi::Value checkState(const Napi::CallbackInfo &info);
};