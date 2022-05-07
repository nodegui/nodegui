#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "nlistview.hpp"

class DLL_EXPORT QListViewWrap : public Napi::ObjectWrap<QListViewWrap> {
  QLISTVIEW_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<QListView> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QListViewWrap(const Napi::CallbackInfo& info);
  ~QListViewWrap();
  QListView* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
