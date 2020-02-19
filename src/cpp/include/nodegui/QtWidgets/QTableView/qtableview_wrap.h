#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTableView/ntableview.hpp"
#include "QtWidgets/QTableView/qtableview_macro.h"

class DLL_EXPORT QTableViewWrap : public Napi::ObjectWrap<QTableViewWrap> {
 private:
  QPointer<NTableView> instance;
  bool disableDeletion;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTableViewWrap(const Napi::CallbackInfo& info);
  ~QTableViewWrap();
  NTableView* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  QTABLEVIEW_WRAPPED_METHODS_DECLARATION
};
