#pragma once

#include "core/Component/component_macro.h"
#include "core/Events/eventwidget_macro.h"
/*

    This macro adds common QObject exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QOBJECT_WRAPPED_METHODS_DECLARATION
#define QOBJECT_WRAPPED_METHODS_DECLARATION                                \
                                                                           \
  EVENTWIDGET_WRAPPED_METHODS_DECLARATION                                  \
                                                                           \
  Napi::Value inherits(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::String className = info[0].As<Napi::String>();                   \
    bool doesIt = this->instance->inherits(className.Utf8Value().c_str()); \
    return Napi::Value::From(env, doesIt);                                 \
  }

#endif  // QOBJECT_WRAPPED_METHODS_DECLARATION

#ifndef QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE
#define QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName) \
                                                                 \
  EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName)   \
  COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE                        \
                                                                 \
  InstanceMethod("inherits", &ComponentWrapName::inherits),

#endif  // QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE
