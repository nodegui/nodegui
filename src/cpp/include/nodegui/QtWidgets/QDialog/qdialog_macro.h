#pragma once

#include <QSize>

#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
/*

    This macro adds common QDialog exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QDIALOG_WRAPPED_METHODS_DECLARATION
#define QDIALOG_WRAPPED_METHODS_DECLARATION               \
                                                          \
  QWIDGET_WRAPPED_METHODS_DECLARATION                     \
                                                          \
  Napi::Value setResult(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    Napi::Number result = info[0].As<Napi::Number>();     \
    this->instance->setResult(result.Int32Value());       \
    return env.Null();                                    \
  }                                                       \
  Napi::Value result(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    int value = this->instance->result();                 \
    return Napi::Value::From(env, value);                 \
  }                                                       \
  Napi::Value exec(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    int value = static_cast<int>(this->instance->exec()); \
    return Napi::Number::From(env, value);                \
  }                                                       \
  Napi::Value open(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    this->instance->open();                               \
    return env.Null();                                    \
  }                                                       \
  Napi::Value reject(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                           \
    Napi::HandleScope scope(env);                         \
    this->instance->reject();                             \
    return env.Null();                                    \
  }
#endif

#ifndef QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE
#define QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(DialogWrapName)  \
                                                               \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(DialogWrapName)        \
  InstanceMethod("result", &DialogWrapName::result),           \
      InstanceMethod("setResult", &DialogWrapName::setResult), \
      InstanceMethod("exec", &DialogWrapName::exec),           \
      InstanceMethod("open", &DialogWrapName::open),           \
      InstanceMethod("reject", &DialogWrapName::reject),

#endif  // QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QDIALOG_SIGNALS
#define QDIALOG_SIGNALS                                          \
  QWIDGET_SIGNALS                                                \
  QObject::connect(this, &QDialog::accepted, [=]() {             \
    Napi::Env env = this->emitOnNode.Env();                      \
    Napi::HandleScope scope(env);                                \
    this->emitOnNode.Call({Napi::String::New(env, "accepted")}); \
  });

#endif  // QDIALOG_SIGNALS
