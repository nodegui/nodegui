#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nabstractitemmodel.hpp"

class DLL_EXPORT QAbstractItemModelWrap
    : public Napi::ObjectWrap<QAbstractItemModelWrap> {
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
  Napi::Value checkIndex(const Napi::CallbackInfo& info);
  Napi::Value _super_buddy(const Napi::CallbackInfo& info);
  Napi::Value beginInsertColumns(const Napi::CallbackInfo& info);
  Napi::Value beginInsertRows(const Napi::CallbackInfo& info);
  Napi::Value beginMoveColumns(const Napi::CallbackInfo& info);
  Napi::Value beginMoveRows(const Napi::CallbackInfo& info);
  Napi::Value beginRemoveColumns(const Napi::CallbackInfo& info);
  Napi::Value beginRemoveRows(const Napi::CallbackInfo& info);
  Napi::Value beginResetModel(const Napi::CallbackInfo& info);
  Napi::Value endResetModel(const Napi::CallbackInfo& info);
  Napi::Value endInsertColumns(const Napi::CallbackInfo& info);
  Napi::Value endInsertRows(const Napi::CallbackInfo& info);
  Napi::Value endMoveColumns(const Napi::CallbackInfo& info);
  Napi::Value endMoveRows(const Napi::CallbackInfo& info);
  Napi::Value endRemoveColumns(const Napi::CallbackInfo& info);
  Napi::Value endRemoveRows(const Napi::CallbackInfo& info);
};
