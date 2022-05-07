#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "nstandarditemmodel.hpp"
class DLL_EXPORT QStandardItemModelWrap
    : public Napi::ObjectWrap<QStandardItemModelWrap> {
 private:
  QPointer<QStandardItemModel> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QStandardItemModelWrap(const Napi::CallbackInfo& info);
  ~QStandardItemModelWrap();
  QStandardItemModel* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value item(const Napi::CallbackInfo& info);
  QOBJECT_WRAPPED_METHODS_DECLARATION
};
