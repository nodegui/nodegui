#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTableWidget/ntablewidget.hpp"
#include "QtWidgets/QWidget/qwidget_macro.h"

class QTableWidgetWrap : public Napi::ObjectWrap<QTableWidgetWrap> {
 private:
  QPointer<NTableWidget> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QTableWidgetWrap(const Napi::CallbackInfo& info);
  ~QTableWidgetWrap();
  NTableWidget* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value selectedRanges(const Napi::CallbackInfo& info);
  Napi::Value closePersistentEditor(const Napi::CallbackInfo& info);
  Napi::Value editItem(const Napi::CallbackInfo& info);
  Napi::Value setCellWidget(const Napi::CallbackInfo& info);
  Napi::Value setItem(const Napi::CallbackInfo& info);
  Napi::Value setHorizontalHeaderItem(const Napi::CallbackInfo& info);
  Napi::Value setHorizontalHeaderLabels(const Napi::CallbackInfo& info);
  Napi::Value setVerticalHeaderItem(const Napi::CallbackInfo& info);
  Napi::Value setVerticalHeaderLabels(const Napi::CallbackInfo& info);
  Napi::Value clear(const Napi::CallbackInfo& info);
  Napi::Value clearContents(const Napi::CallbackInfo& info);
  Napi::Value insertColumn(const Napi::CallbackInfo& info);
  Napi::Value removeColumn(const Napi::CallbackInfo& info);
  Napi::Value insertRow(const Napi::CallbackInfo& info);
  Napi::Value removeRow(const Napi::CallbackInfo& info);
  Napi::Value scrollToItem(const Napi::CallbackInfo& info);
  QWIDGET_WRAPPED_METHODS_DECLARATION
};
