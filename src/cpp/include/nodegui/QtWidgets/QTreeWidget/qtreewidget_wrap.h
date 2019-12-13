#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "ntreewidget.hpp"

class QTreeWidgetWrap : public Napi::ObjectWrap<QTreeWidgetWrap> {
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

  // Napi::Value addTopLevelItems(const Napi::CallbackInfo& info);
  // Napi::Value setHeaderHidden(const Napi::CallbackInfo& info);
  // Napi::Value setHorizontalScrollBarPolicy(const Napi::CallbackInfo& info);
  // Napi::Value setVerticalScrollBarPolicy(const Napi::CallbackInfo& info);
  // Napi::Value takeTopLevelItem(const Napi::CallbackInfo& info);
  // Napi::Value findItems(const Napi::CallbackInfo& info);
  QWIDGET_WRAPPED_METHODS_DECLARATION
};
