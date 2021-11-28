#pragma once

#include "QtCore/QObject/qobject_macro.h"

/*

    This macro adds common QGraphicsEffect exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every graphicseffect we export.
 */

#ifndef QGRAPHICSEFFECT_WRAPPED_METHODS_DECLARATION
#define QGRAPHICSEFFECT_WRAPPED_METHODS_DECLARATION    \
                                                       \
  QOBJECT_WRAPPED_METHODS_DECLARATION                  \
                                                       \
  Napi::Value update(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                        \
    this->instance->update();                          \
    return env.Null();                                 \
  }

#endif  // QGRAPHICSEFFECT_WRAPPED_METHODS_DECLARATION

#ifndef QGRAPHICSEFFECT_WRAPPED_METHODS_EXPORT_DEFINE
#define QGRAPHICSEFFECT_WRAPPED_METHODS_EXPORT_DEFINE(GraphicsEffectWrapName) \
                                                                              \
  QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(GraphicsEffectWrapName)               \
                                                                              \
  InstanceMethod("update", &GraphicsEffectWrapName::update),

#endif  // QGRAPHICSEFFECT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QGRAPHICSEFFECT_SIGNALS
#define QGRAPHICSEFFECT_SIGNALS                                                \
                                                                               \
  QOBJECT_SIGNALS                                                              \
                                                                               \
  QObject::connect(this, &QGraphicsEffect::enabledChanged, [=](bool enabled) { \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call({Napi::String::New(env, "enabledChanged"),           \
                           Napi::Boolean::New(env, enabled)});                 \
  });

#endif  // QGRAPHICSEFFECT_SIGNALS
