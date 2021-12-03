#pragma once

#include <QSize>

#include "QtCore/QObject/qobject_macro.h"

/*

    This macro adds common QLayout exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every layout we export.
 */

#ifndef QLAYOUT_WRAPPED_METHODS_DECLARATION
#define QLAYOUT_WRAPPED_METHODS_DECLARATION                        \
  QOBJECT_WRAPPED_METHODS_DECLARATION                              \
                                                                   \
  Napi::Value activate(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                    \
    bool wasRedone = this->instance->activate();                   \
    return Napi::Boolean::New(env, wasRedone);                     \
  }                                                                \
  Napi::Value setEnabled(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                    \
    bool enable = info[0].As<Napi::Boolean>().Value();             \
    this->instance->setEnabled(enable);                            \
    return env.Null();                                             \
  }                                                                \
  Napi::Value isEnabled(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                    \
    bool enabled = this->instance->isEnabled();                    \
    return Napi::Boolean::New(env, enabled);                       \
  }                                                                \
  Napi::Value setContentsMargins(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                    \
    int left = info[0].As<Napi::Number>().Int32Value();            \
    int top = info[1].As<Napi::Number>().Int32Value();             \
    int right = info[2].As<Napi::Number>().Int32Value();           \
    int bottom = info[3].As<Napi::Number>().Int32Value();          \
    this->instance->setContentsMargins(left, top, right, bottom);  \
    return env.Null();                                             \
  }                                                                \
  Napi::Value invalidate(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                    \
    this->instance->invalidate();                                  \
    return env.Null();                                             \
  }                                                                \
  Napi::Value update(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                    \
    this->instance->update();                                      \
    return env.Null();                                             \
  }

#endif  // QLAYOUT_WRAPPED_METHODS_DECLARATION

#ifndef QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE
#define QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(LayoutWrapName)    \
                                                                 \
  QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(LayoutWrapName)          \
  InstanceMethod("activate", &LayoutWrapName::activate),         \
      InstanceMethod("setEnabled", &LayoutWrapName::setEnabled), \
      InstanceMethod("isEnabled", &LayoutWrapName::isEnabled),   \
      InstanceMethod("setContentsMargins",                       \
                     &LayoutWrapName::setContentsMargins),       \
      InstanceMethod("invalidate", &LayoutWrapName::invalidate), \
      InstanceMethod("update", &LayoutWrapName::update),

#endif  // QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QLAYOUT_SIGNALS
#define QLAYOUT_SIGNALS QOBJECT_SIGNALS

#endif  // QLAYOUT_SIGNALS
