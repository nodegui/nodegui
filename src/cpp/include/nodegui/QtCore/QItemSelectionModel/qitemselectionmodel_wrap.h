#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nitemselectionmodel.hpp"

class DLL_EXPORT QItemSelectionModelWrap
    : public Napi::ObjectWrap<QItemSelectionModelWrap> {
  QOBJECT_WRAPPED_METHODS_DECLARATION

 private:
  QPointer<QItemSelectionModel> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QItemSelectionModelWrap(const Napi::CallbackInfo& info);
  ~QItemSelectionModelWrap();
  QItemSelectionModel* getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value columnIntersectsSelection(const Napi::CallbackInfo& info);
  Napi::Value currentIndex(const Napi::CallbackInfo& info);
  Napi::Value hasSelection(const Napi::CallbackInfo& info);
  Napi::Value isColumnSelected(const Napi::CallbackInfo& info);
  Napi::Value isRowSelected(const Napi::CallbackInfo& info);
  Napi::Value isSelected(const Napi::CallbackInfo& info);
  Napi::Value rowIntersectsSelection(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value clearCurrentIndex(const Napi::CallbackInfo& info);
  Napi::Value clearSelection(const Napi::CallbackInfo& info);
  Napi::Value reset(const Napi::CallbackInfo& info);
  Napi::Value select(const Napi::CallbackInfo& info);
  Napi::Value setCurrentIndex(const Napi::CallbackInfo& info);
  Napi::Value selectedColumns(const Napi::CallbackInfo& info);
  Napi::Value selectedIndexes(const Napi::CallbackInfo& info);
  Napi::Value selectedRows(const Napi::CallbackInfo& info);
};
