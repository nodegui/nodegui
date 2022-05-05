#pragma once

#include <QDebug>

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "core/Events/eventwidget_macro.h"
#include "core/WrapperCache/wrappercache.h"

/*
  This macro adds common QObject exported methods
  The exported methods are taken into this macro to avoid writing them in each
  and every widget we export.
 */

#ifndef QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE
#define QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(source)        \
                                                                             \
  EVENTWIDGET_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(source)          \
                                                                             \
  Napi::Value __id__(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                              \
    return Napi::Value::From(                                                \
        env, extrautils::hashPointerTo53bit(                                 \
                 static_cast<QObject*>(this->instance.data())));             \
  }                                                                          \
  Napi::Value inherits(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                              \
    Napi::String className = info[0].As<Napi::String>();                     \
    bool doesIt = this->instance->inherits(className.Utf8Value().c_str());   \
    return Napi::Value::From(env, doesIt);                                   \
  }                                                                          \
  Napi::Value setProperty(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                              \
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
    Napi::String objectName = info[0].As<Napi::String>();                    \
    this->instance->setObjectName(                                           \
        QString::fromStdString(objectName.Utf8Value()));                     \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value objectName(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                              \
    QString objectName = this->instance->objectName();                       \
    return Napi::String::New(env, objectName.toStdString());                 \
  }                                                                          \
  Napi::Value dumpObjectTree(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                              \
    this->instance->dumpObjectTree();                                        \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value dumpObjectInfo(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                              \
    this->instance->dumpObjectInfo();                                        \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value __external_qobject__(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                              \
    return Napi::External<QObject>::New(                                     \
        env, static_cast<QObject*>(this->instance));                         \
  }                                                                          \
  Napi::Value startTimer(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                              \
    int interval = info[0].As<Napi::Number>().Int32Value();                  \
    Qt::TimerType timerType =                                                \
        static_cast<Qt::TimerType>(info[1].As<Napi::Number>().Int32Value()); \
    int result = this->instance->startTimer(interval, timerType);            \
    return Napi::Value::From(env, result);                                   \
  }                                                                          \
  Napi::Value killTimer(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                              \
    int id = info[0].As<Napi::Number>().Int32Value();                        \
    this->instance->killTimer(id);                                           \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value parent(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                              \
    QObject* parent = this->instance->parent();                              \
    if (parent) {                                                            \
      return WrapperCache::instance.getWrapper(env, parent);                 \
    } else {                                                                 \
      return env.Null();                                                     \
    }                                                                        \
  }                                                                          \
  Napi::Value deleteLater(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                              \
    this->instance->deleteLater();                                           \
    return env.Null();                                                       \
  }                                                                          \
  Napi::Value deleteObject(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                              \
    delete static_cast<QObject*>(this->instance);                            \
    return env.Null();                                                       \
  }

// Ideally this macro below should go in
// QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE but some wrappers
// need their own setParent()` implementation which handles different
// arguments.
#define QOBJECT_SET_PARENT_IMPL                                             \
  Napi::Value setParent(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                             \
    if (info[0].IsNull()) {                                                 \
      this->instance->setParent(nullptr);                                   \
    } else {                                                                \
      QObject* parentObject = info[0].As<Napi::External<QObject>>().Data(); \
      this->instance->setParent(parentObject);                              \
    }                                                                       \
    return env.Null();                                                      \
  }

#endif  // QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE

#ifndef QOBJECT_WRAPPED_METHODS_DECLARATION
#define QOBJECT_WRAPPED_METHODS_DECLARATION                                    \
  QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(this->instance.data()) \
  QOBJECT_SET_PARENT_IMPL
#endif  // QOBJECT_WRAPPED_METHODS_DECLARATION

#ifndef QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE
#define QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName)            \
                                                                            \
  EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName)              \
                                                                            \
  InstanceMethod("__id__", &ComponentWrapName::__id__),                     \
      InstanceMethod("__external_qobject__",                                \
                     &ComponentWrapName::__external_qobject__),             \
      InstanceMethod("inherits", &ComponentWrapName::inherits),             \
      InstanceMethod("setProperty", &ComponentWrapName::setProperty),       \
      InstanceMethod("property", &ComponentWrapName::property),             \
      InstanceMethod("setObjectName", &ComponentWrapName::setObjectName),   \
      InstanceMethod("objectName", &ComponentWrapName::objectName),         \
      InstanceMethod("dumpObjectTree", &ComponentWrapName::dumpObjectTree), \
      InstanceMethod("dumpObjectInfo", &ComponentWrapName::dumpObjectInfo), \
      InstanceMethod("setParent", &ComponentWrapName::setParent),           \
      InstanceMethod("startTimer", &ComponentWrapName::startTimer),         \
      InstanceMethod("killTimer", &ComponentWrapName::killTimer),           \
      InstanceMethod("parent", &ComponentWrapName::parent),                 \
      InstanceMethod("deleteLater", &ComponentWrapName::deleteLater),       \
      InstanceMethod("delete", &ComponentWrapName::deleteObject),

#endif  // QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QOBJECT_SIGNALS_ON_TARGET
#define QOBJECT_SIGNALS_ON_TARGET(target)                                     \
  QObject::connect(target, &QObject::objectNameChanged,                       \
                   [=](const QString& objectName) {                           \
                     Napi::Env env = this->emitOnNode.Env();                  \
                     Napi::HandleScope scope(env);                            \
                     this->emitOnNode.Call(                                   \
                         {Napi::String::New(env, "objectNameChanged"),        \
                          Napi::Value::From(env, objectName.toStdString())}); \
                   });
#endif  // QOBJECT_SIGNALS_ON_TARGET

#ifndef QOBJECT_SIGNALS
#define QOBJECT_SIGNALS QOBJECT_SIGNALS_ON_TARGET(this)
#endif  // QOBJECT_SIGNALS

/*
  Macro to register a function to wrap QObject pointers of a
  given subclass to wrapper instances. First parameter is the
  plain name of the QObject subclass (no quotes), seconds is the
  name of the wrapper class.
 */
#ifndef QOBJECT_REGISTER_WRAPPER
#define QOBJECT_REGISTER_WRAPPER(qobjectType, ComponentWrapName)         \
  WrapperCache::instance.registerWrapper(                                \
      QString(#qobjectType),                                             \
      [](Napi::Env env, QObject* qobject) -> Napi::Object {              \
        qobjectType* exactQObject = dynamic_cast<qobjectType*>(qobject); \
        Napi::Object wrapper = ComponentWrapName::constructor.New(       \
            {Napi::External<QObject>::New(env, exactQObject)});          \
        return wrapper;                                                  \
      });
#endif  // QOBJECT_REGISTER_WRAPPER

#include "QtCore/QObject/qobject_wrap.h"
