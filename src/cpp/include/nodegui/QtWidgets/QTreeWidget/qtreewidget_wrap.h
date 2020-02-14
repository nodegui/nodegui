#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ntreewidget.hpp"

class DLL_EXPORT QTreeWidgetWrap : public Napi::ObjectWrap<QTreeWidgetWrap> {
  QWIDGET_WRAPPED_METHODS_DECLARATION
 private:
  QPointer<NTreeWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);

  QTreeWidgetWrap(const Napi::CallbackInfo &info);

  ~QTreeWidgetWrap();

  NTreeWidget *getInternalInstance();

  // class constructor
  static Napi::FunctionReference constructor;

  Napi::Value addTopLevelItem(const Napi::CallbackInfo &info);
  Napi::Value selectedItems(const Napi::CallbackInfo &info);
  Napi::Value setColumnCount(const Napi::CallbackInfo &info);
  Napi::Value setHeaderLabel(const Napi::CallbackInfo &info);
  Napi::Value setHeaderLabels(const Napi::CallbackInfo &info);
  Napi::Value setItemWidget(const Napi::CallbackInfo &info);
  Napi::Value currentItem(const Napi::CallbackInfo &info);

  // Napi::Value addTopLevelItems(const Napi::CallbackInfo& info);
  // Napi::Value setHorizontalScrollBarPolicy(const Napi::CallbackInfo& info);
  // Napi::Value setVerticalScrollBarPolicy(const Napi::CallbackInfo& info);
  // Napi::Value takeTopLevelItem(const Napi::CallbackInfo& info);
  // Napi::Value findItems(const Napi::CallbackInfo& info);
};
