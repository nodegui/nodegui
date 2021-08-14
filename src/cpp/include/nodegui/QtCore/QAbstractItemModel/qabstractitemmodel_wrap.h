#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nabstractitemmodel.hpp"


class DLL_EXPORT QAbstractItemModelWrap : public Napi::ObjectWrap<QAbstractItemModelWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<NAbstractItemModel> instance;
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QAbstractItemModelWrap(const Napi::CallbackInfo& info);
  ~QAbstractItemModelWrap();
  NAbstractItemModel* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value initNodeDispatcher(const Napi::CallbackInfo& info);

  Napi::Value hasIndex(const Napi::CallbackInfo& info);
  Napi::Value createIndex(const Napi::CallbackInfo& info);
  Napi::Value _super_flags(const Napi::CallbackInfo& info);
  Napi::Value emitDataChanged(const Napi::CallbackInfo& info);
};
