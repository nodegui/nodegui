#pragma once

#include <QWidget>

#include "eventwidget.h"

/*

    This macro adds common YogaWidget's exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef EVENTWIDGET_WRAPPED_METHODS_DECLARATION
#define EVENTWIDGET_WRAPPED_METHODS_DECLARATION                      \
                                                                     \
  Napi::Value initNodeEventEmitter(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                      \
    this->instance->emitOnNode =                                     \
        Napi::Persistent(info[0].As<Napi::Function>());              \
    this->instance->connectWidgetSignalsToEventEmitter();            \
    return env.Null();                                               \
  }                                                                  \
                                                                     \
  Napi::Value subscribeToQtEvent(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                                      \
    Napi::String eventString = info[0].As<Napi::String>();           \
    this->instance->subscribeToQtEvent(eventString.Utf8Value());     \
    return env.Null();                                               \
  }                                                                  \
  Napi::Value unSubscribeToQtEvent(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                      \
    Napi::String eventString = info[0].As<Napi::String>();           \
    this->instance->unSubscribeToQtEvent(eventString.Utf8Value());   \
    return env.Null();                                               \
  }

#endif  // EVENTWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
                                                                  \
  InstanceMethod("initNodeEventEmitter",                          \
                 &WidgetWrapName::initNodeEventEmitter),          \
      InstanceMethod("subscribeToQtEvent",                        \
                     &WidgetWrapName::subscribeToQtEvent),        \
      InstanceMethod("unSubscribeToQtEvent",                      \
                     &WidgetWrapName::unSubscribeToQtEvent),

#endif  // EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef EVENTWIDGET_IMPLEMENTATIONS
#define EVENTWIDGET_IMPLEMENTATIONS(BaseWidgetName) \
  bool event(QEvent* event) {                       \
    EventWidget::event(event);                      \
    return BaseWidgetName::event(event);            \
  }

#endif  // EVENTWIDGET_IMPLEMENTATIONS