#pragma once

#include <QDebug>
#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "core/Events/eventwidget_macro.h"
/*

    This macro adds common QObject exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QOBJECT_WRAPPED_METHODS_DECLARATION
#define QOBJECT_WRAPPED_METHODS_DECLARATION                                  \
                                                                             \
  EVENTWIDGET_WRAPPED_METHODS_DECLARATION                                    \
                                                                             \
  Napi::Value inherits(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                              \
    Napi::HandleScope scope(env);                                            \
    Napi::String className = info[0].As<Napi::String>();                     \
    bool doesIt = this->instance->inherits(className.Utf8Value().c_str());   \
    return Napi::Value::From(env, doesIt);                                   \
  }                                                                          \
  Napi::Value setProperty(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                              \
    Napi::HandleScope scope(env);                                            \
    Napi::String name = info[0].As<Napi::String>();                          \
    Napi::Value value = info[1];                                             \
    auto variant =                                                           \
        QSharedPointer<QVariant>(extrautils::convertToQVariant(env, value)); \
    auto result =                                                            \
        this->instance->setProperty(name.Utf8Value().c_str(), *variant);     \
    return Napi::Value::From(env, result);                                   \
  }                                                                          \
  Napi::Value property(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                              \
    Napi::HandleScope scope(env);                                            \
    Napi::String name = info[0].As<Napi::String>();                          \
    Napi::Value value = info[1];                                             \
    QVariant* variant =                                                      \
        new QVariant(this->instance->property(name.Utf8Value().c_str()));    \
    auto variantWrap = QVariantWrap::constructor.New(                        \
        {Napi::External<QVariant>::New(env, variant)});                      \
    return variantWrap;                                                      \
  }                                                                          \
  Napi::Value setObjectName(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                              \
    Napi::HandleScope scope(env);                                            \
    Napi::String objectName = info[0].As<Napi::String>();                    \
    this->instance->setObjectName(                                           \
        QString::fromStdString(objectName.Utf8Value()));                     \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value objectName(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                              \
    Napi::HandleScope scope(env);                                            \
    QString objectName = this->instance->objectName();                       \
    return Napi::String::New(env, objectName.toStdString());                 \
  }

#endif  // QOBJECT_WRAPPED_METHODS_DECLARATION

#ifndef QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE
#define QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName)          \
                                                                          \
  EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName)            \
                                                                          \
  InstanceMethod("inherits", &ComponentWrapName::inherits),               \
      InstanceMethod("setProperty", &ComponentWrapName::setProperty),     \
      InstanceMethod("property", &ComponentWrapName::property),           \
      InstanceMethod("setObjectName", &ComponentWrapName::setObjectName), \
      InstanceMethod("objectName", &ComponentWrapName::objectName),

#endif  // QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QOBJECT_SIGNALS
#define QOBJECT_SIGNALS                                                       \
  QObject::connect(this, &QObject::objectNameChanged,                         \
                   [=](const QString& objectName) {                           \
                     Napi::Env env = this->emitOnNode.Env();                  \
                     Napi::HandleScope scope(env);                            \
                     this->emitOnNode.Call(                                   \
                         {Napi::String::New(env, "objectNameChanged"),        \
                          Napi::Value::From(env, objectName.toStdString())}); \
                   });

#endif  // QOBJECT_SIGNALS
