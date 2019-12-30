#pragma once

#include <QListView>
#include <QSize>

#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"

/*

    This macro adds common QListView exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QListView_WRAPPED_METHODS_DECLARATION
#define QListView_WRAPPED_METHODS_DECLARATION                         \
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION                       \
  Napi::Value clearPropertyFlags(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                       \
    Napi::HandleScope scope(env);                                     \
    this->instance->clearPropertyFlags();                             \
    return env.Null();                                                \
  }                                                                   \
  Napi::Value setRowHidden(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                       \
    Napi::HandleScope scope(env);                                     \
    int row = info[0].As<Napi::Number>().Int32Value();                \
    int hide = info[1].As<Napi::Boolean>().Value();                   \
    this->instance->setRowHidden(row, hide);                          \
    return env.Null();                                                \
  }                                                                   \
  Napi::Value isRowHidden(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                       \
    Napi::HandleScope scope(env);                                     \
    int row = info[0].As<Napi::Number>().Int32Value();                \
    return Napi::Boolean::New(env, this->instance->isRowHidden(row)); \
  }

#endif  // QListView_WRAPPED_METHODS_DECLARATION

#ifndef QListView_WRAPPED_METHODS_EXPORT_DEFINE
#define QListView_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)              \
  QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)            \
  InstanceMethod("clearPropertyFlags", &WidgetWrapName::clearPropertyFlags), \
      InstanceMethod("setRowHidden", &WidgetWrapName::setRowHidden),         \
      InstanceMethod("isRowHidden", &WidgetWrapName::isRowHidden),

#endif  // QListView_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QListView_SIGNALS
#define QListView_SIGNALS QABSTRACTITEMVIEW_SIGNALS

#endif  // QListView_SIGNALS
