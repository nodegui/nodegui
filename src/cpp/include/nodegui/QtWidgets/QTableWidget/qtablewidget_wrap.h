#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QTableWidget/ntablewidget.hpp"

class DLL_EXPORT QTableWidgetWrap : public Napi::ObjectWrap<QTableWidgetWrap> {
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
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
  // FROM TABLEVIEW
  Napi::Value hideColumn(const Napi::CallbackInfo& info);
  Napi::Value hideRow(const Napi::CallbackInfo& info);
  Napi::Value resizeColumnToContents(const Napi::CallbackInfo& info);
  Napi::Value resizeColumnsToContents(const Napi::CallbackInfo& info);
  Napi::Value resizeRowToContents(const Napi::CallbackInfo& info);
  Napi::Value resizeRowsToContents(const Napi::CallbackInfo& info);
  Napi::Value selectColumn(const Napi::CallbackInfo& info);
  Napi::Value selectRow(const Napi::CallbackInfo& info);
  Napi::Value setShowGrid(const Napi::CallbackInfo& info);
  Napi::Value showGrid(const Napi::CallbackInfo& info);
  Napi::Value showColumn(const Napi::CallbackInfo& info);
  Napi::Value showRow(const Napi::CallbackInfo& info);
  Napi::Value sortByColumn(const Napi::CallbackInfo& info);
  Napi::Value setColumnWidth(const Napi::CallbackInfo& info);
  Napi::Value setRowHeight(const Napi::CallbackInfo& info);
  Napi::Value setSortingEnabled(const Napi::CallbackInfo& info);
  Napi::Value isSortingEnabled(const Napi::CallbackInfo& info);
};
