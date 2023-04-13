#pragma once

#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QFrame/qframe_wrap.h"

/*

    This macro adds common QSplitter exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QSPLITTER_WRAPPED_METHODS_DECLARATION
#define QSPLITTER_WRAPPED_METHODS_DECLARATION                                  \
                                                                               \
  QFRAME_WRAPPED_METHODS_DECLARATION                                           \
                                                                               \
  Napi::Value addWidget(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    Napi::Object widgetObject = info[0].As<Napi::Object>();                    \
    NodeWidgetWrap* widgetWrap =                                               \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);                \
                                                                               \
    this->instance->addWidget(widgetWrap->getInternalInstance());              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value childrenCollapsible(const Napi::CallbackInfo& info) {            \
    Napi::Env env = info.Env();                                                \
    return Napi::Boolean::New(env, this->instance->childrenCollapsible());     \
  }                                                                            \
  Napi::Value count(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    return Napi::Number::New(env, this->instance->count());                    \
  }                                                                            \
  Napi::Value indexOf(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                                \
    Napi::Object widgetObject = info[0].As<Napi::Object>();                    \
    NodeWidgetWrap* widgetWrap =                                               \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);                \
    return Napi::Number::New(                                                  \
        env, this->instance->indexOf(widgetWrap->getInternalInstance()));      \
  }                                                                            \
  Napi::Value insertWidget(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    int index = info[0].As<Napi::Number>().Int32Value();                       \
    Napi::Object widgetObject = info[1].As<Napi::Object>();                    \
    NodeWidgetWrap* widgetWrap =                                               \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);                \
    this->instance->insertWidget(index, widgetWrap->getInternalInstance());    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value isCollapsible(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    int index = info[0].As<Napi::Number>().Int32Value();                       \
    return Napi::Boolean::New(env, this->instance->isCollapsible(index));      \
  }                                                                            \
  Napi::Value orientation(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    return Napi::Number::New(env,                                              \
                             static_cast<int>(this->instance->orientation())); \
  }                                                                            \
  Napi::Value setCollapsible(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int index = info[0].As<Napi::Number>().Int32Value();                       \
    bool collapse = info[1].As<Napi::Boolean>().Value();                       \
    this->instance->setCollapsible(index, collapse);                           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setOrientation(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int orientation = info[0].As<Napi::Number>().Int32Value();                 \
    this->instance->setOrientation(static_cast<Qt::Orientation>(orientation)); \
    return env.Null();                                                         \
  }

#endif  // QSPLITTER_WRAPPED_METHODS_DECLARATION

#ifndef QSPLITTER_WRAPPED_METHODS_EXPORT_DEFINE
#define QSPLITTER_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)          \
                                                                         \
  QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                   \
                                                                         \
  InstanceMethod("addWidget", &WidgetWrapName::addWidget),               \
      InstanceMethod("childrenCollapsible",                              \
                     &WidgetWrapName::childrenCollapsible),              \
      InstanceMethod("count", &WidgetWrapName::count),                   \
      InstanceMethod("indexOf", &WidgetWrapName::indexOf),               \
      InstanceMethod("insertWidget", &WidgetWrapName::insertWidget),     \
      InstanceMethod("isCollapsible", &WidgetWrapName::isCollapsible),   \
      InstanceMethod("orientation", &WidgetWrapName::orientation),       \
      InstanceMethod("setCollapsible", &WidgetWrapName::setCollapsible), \
      InstanceMethod("setOrientation", &WidgetWrapName::setOrientation),

#endif  // QSPLITTER_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QSPLITTER_SIGNALS
#define QSPLITTER_SIGNALS                                                     \
  QWIDGET_SIGNALS                                                             \
  QObject::connect(this, &QSplitter::splitterMoved, [=](int pos, int index) { \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "splitterMoved"),           \
                           Napi::Number::New(env, pos),                       \
                           Napi::Number::New(env, index)});                   \
  });

#endif  // QSPLITTER_SIGNALS
