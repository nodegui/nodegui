#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"
#include "QtWidgets/QHeaderView/nheaderview.hpp"

class DLL_EXPORT QHeaderViewWrap : public Napi::ObjectWrap<QHeaderViewWrap> {
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QHeaderView> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QHeaderViewWrap(const Napi::CallbackInfo& info);
  ~QHeaderViewWrap();
  QHeaderView* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
