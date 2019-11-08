#pragma once

#include <QSize>

#include "core/Component/component_macro.h"
/*

    This macro adds common QLayout exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every layout we export.
 */

#ifndef QLAYOUT_WRAPPED_METHODS_DECLARATION
#define QLAYOUT_WRAPPED_METHODS_DECLARATION                \
                                                           \
  Napi::Value activate(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                            \
    Napi::HandleScope scope(env);                          \
    bool wasRedone = this->instance->activate();           \
    return Napi::Boolean::New(env, wasRedone);             \
  }                                                        \
  Napi::Value invalidate(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                            \
    Napi::HandleScope scope(env);                          \
    this->instance->invalidate();                          \
    return env.Null();                                     \
  }                                                        \
  Napi::Value update(const Napi::CallbackInfo& info) {     \
    Napi::Env env = info.Env();                            \
    Napi::HandleScope scope(env);                          \
    this->instance->update();                              \
    return env.Null();                                     \
  }

#endif  // QLAYOUT_WRAPPED_METHODS_DECLARATION

#ifndef QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE
#define QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(LayoutWrapName)    \
                                                                 \
  COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE                        \
  InstanceMethod("activate", &LayoutWrapName::activate),         \
      InstanceMethod("invalidate", &LayoutWrapName::invalidate), \
      InstanceMethod("update", &LayoutWrapName::update),

#endif  // QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE
