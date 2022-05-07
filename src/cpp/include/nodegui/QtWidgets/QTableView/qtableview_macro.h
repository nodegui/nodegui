#pragma once

#include <QTableView>

#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"
#include "QtWidgets/QHeaderView/qheaderview_wrap.h"

/*

    This macro adds common QTableView exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QTABLEVIEW_WRAPPED_METHODS_DECLARATION
#define QTABLEVIEW_WRAPPED_METHODS_DECLARATION                                \
                                                                              \
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION                               \
                                                                              \
  Napi::Value clearSpans(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    this->instance->clearSpans();                                             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value columnAt(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                               \
    int x = info[0].As<Napi::Number>().Int32Value();                          \
    return Napi::Number::New(env, this->instance->columnAt(x));               \
  }                                                                           \
  Napi::Value columnSpan(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    return Napi::Number::New(env, this->instance->columnSpan(row, column));   \
  }                                                                           \
  Napi::Value columnViewportPosition(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    return Napi::Number::New(env,                                             \
                             this->instance->columnViewportPosition(column)); \
  }                                                                           \
  Napi::Value columnWidth(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    return Napi::Number::New(env, this->instance->columnWidth(column));       \
  }                                                                           \
  Napi::Value isColumnHidden(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    return Napi::Boolean::New(env, this->instance->isColumnHidden(column));   \
  }                                                                           \
  Napi::Value isRowHidden(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    return Napi::Boolean::New(env, this->instance->isRowHidden(row));         \
  }                                                                           \
  Napi::Value rowAt(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                               \
    int y = info[0].As<Napi::Number>().Int32Value();                          \
    return Napi::Number::New(env, this->instance->rowAt(y));                  \
  }                                                                           \
  Napi::Value rowHeight(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    return Napi::Number::New(env, this->instance->rowHeight(row));            \
  }                                                                           \
  Napi::Value rowSpan(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    return Napi::Number::New(env, this->instance->rowSpan(row, column));      \
  }                                                                           \
  Napi::Value rowViewportPosition(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    return Napi::Number::New(env, this->instance->rowViewportPosition(row));  \
  }                                                                           \
  Napi::Value setColumnHidden(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    bool hide = info[1].As<Napi::Boolean>().Value();                          \
    this->instance->setColumnHidden(column, hide);                            \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setColumnWidth(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    int width = info[1].As<Napi::Number>().Int32Value();                      \
    this->instance->setColumnWidth(column, width);                            \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setRowHeight(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    int height = info[1].As<Napi::Number>().Int32Value();                     \
    this->instance->setRowHeight(row, height);                                \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setRowHidden(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    bool hide = info[1].As<Napi::Boolean>().Value();                          \
    this->instance->setRowHidden(row, hide);                                  \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setSpan(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    int column = info[1].As<Napi::Number>().Int32Value();                     \
    int rowSpanCount = info[2].As<Napi::Number>().Int32Value();               \
    int columnSpanCount = info[3].As<Napi::Number>().Int32Value();            \
    this->instance->setSpan(row, column, rowSpanCount, columnSpanCount);      \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value hideColumn(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    this->instance->hideColumn(column);                                       \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value hideRow(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    this->instance->hideRow(row);                                             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value resizeColumnToContents(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    this->instance->resizeColumnToContents(column);                           \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value resizeColumnsToContents(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                               \
    this->instance->resizeColumnsToContents();                                \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value resizeRowToContents(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    this->instance->resizeRowToContents(row);                                 \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value resizeRowsToContents(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                               \
    this->instance->resizeRowsToContents();                                   \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value selectColumn(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    this->instance->selectColumn(column);                                     \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value selectRow(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    this->instance->selectRow(row);                                           \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showColumn(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    this->instance->showColumn(column);                                       \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showRow(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                               \
    int row = info[0].As<Napi::Number>().Int32Value();                        \
    this->instance->showRow(row);                                             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value sortByColumn(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    int column = info[0].As<Napi::Number>().Int32Value();                     \
    int orderInt = info[1].As<Napi::Number>().Int32Value();                   \
    Qt::SortOrder order = static_cast<Qt::SortOrder>(orderInt);               \
    this->instance->sortByColumn(column, order);                              \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value horizontalHeader(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                               \
    auto header = this->instance->horizontalHeader();                         \
    auto instance = WrapperCache::instance.getWrapper(env, header);           \
    return instance;                                                          \
  }                                                                           \
  Napi::Value verticalHeader(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    auto header = this->instance->verticalHeader();                           \
    auto instance = WrapperCache::instance.getWrapper(env, header);           \
    return instance;                                                          \
  }

#endif  // QTABLEVIEW_WRAPPED_METHODS_DECLARATION

#ifndef QTABLEVIEW_WRAPPED_METHODS_EXPORT_DEFINE
#define QTABLEVIEW_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)             \
                                                                             \
  QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)            \
                                                                             \
  InstanceMethod("clearSpans", &WidgetWrapName::clearSpans),                 \
      InstanceMethod("columnAt", &WidgetWrapName::columnAt),                 \
      InstanceMethod("columnSpan", &WidgetWrapName::columnSpan),             \
      InstanceMethod("columnViewportPosition",                               \
                     &WidgetWrapName::columnViewportPosition),               \
      InstanceMethod("columnWidth", &WidgetWrapName::columnWidth),           \
      InstanceMethod("isColumnHidden", &WidgetWrapName::isColumnHidden),     \
      InstanceMethod("isRowHidden", &WidgetWrapName::isRowHidden),           \
      InstanceMethod("rowAt", &WidgetWrapName::rowAt),                       \
      InstanceMethod("rowHeight", &WidgetWrapName::rowHeight),               \
      InstanceMethod("rowSpan", &WidgetWrapName::rowSpan),                   \
      InstanceMethod("rowViewportPosition",                                  \
                     &WidgetWrapName::rowViewportPosition),                  \
      InstanceMethod("setColumnHidden", &WidgetWrapName::setColumnHidden),   \
      InstanceMethod("setColumnWidth", &WidgetWrapName::setColumnWidth),     \
      InstanceMethod("setRowHeight", &WidgetWrapName::setRowHeight),         \
      InstanceMethod("setRowHidden", &WidgetWrapName::setRowHidden),         \
      InstanceMethod("setSpan", &WidgetWrapName::setSpan),                   \
      InstanceMethod("hideColumn", &WidgetWrapName::hideColumn),             \
      InstanceMethod("hideRow", &WidgetWrapName::hideRow),                   \
      InstanceMethod("resizeColumnToContents",                               \
                     &WidgetWrapName::resizeColumnToContents),               \
      InstanceMethod("resizeColumnsToContents",                              \
                     &WidgetWrapName::resizeColumnsToContents),              \
      InstanceMethod("resizeRowToContents",                                  \
                     &WidgetWrapName::resizeRowToContents),                  \
      InstanceMethod("resizeRowsToContents",                                 \
                     &WidgetWrapName::resizeRowsToContents),                 \
      InstanceMethod("selectColumn", &WidgetWrapName::selectColumn),         \
      InstanceMethod("selectRow", &WidgetWrapName::selectRow),               \
      InstanceMethod("showColumn", &WidgetWrapName::showColumn),             \
      InstanceMethod("showRow", &WidgetWrapName::showRow),                   \
      InstanceMethod("sortByColumn", &WidgetWrapName::sortByColumn),         \
      InstanceMethod("horizontalHeader", &WidgetWrapName::horizontalHeader), \
      InstanceMethod("verticalHeader", &WidgetWrapName::verticalHeader)

#endif  // QTABLEVIEW_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QTABLEVIEW_SIGNALS
#define QTABLEVIEW_SIGNALS QABSTRACTITEMVIEW_SIGNALS

#endif  // QTABLEVIEW_SIGNALS
