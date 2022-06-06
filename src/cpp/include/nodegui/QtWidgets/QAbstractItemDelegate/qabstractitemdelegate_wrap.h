#pragma once

#include <napi.h>

#include <QAbstractItemDelegate>
#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractItemDelegate/qabstractitemdelegate_macro.h"

class DLL_EXPORT QAbstractItemDelegateWrap
    : public Napi::ObjectWrap<QAbstractItemDelegateWrap> {
  QABSTRACTITEMDELEGATE_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QAbstractItemDelegate> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QAbstractItemDelegateWrap(const Napi::CallbackInfo& info);
  ~QAbstractItemDelegateWrap();
  QAbstractItemDelegate* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
