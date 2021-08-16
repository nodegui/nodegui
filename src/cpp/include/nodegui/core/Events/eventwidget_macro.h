#pragma once
#include <QWidget>

#include "core/Component/component_macro.h"
#include "eventwidget.h"

/*

    This macro adds common YogaWidget's exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef EVENTWIDGET_WRAPPED_METHODS_DECLARATION
#define EVENTWIDGET_WRAPPED_METHODS_DECLARATION                      \
  COMPONENT_WRAPPED_METHODS_DECLARATION                              \
  Napi::Value initNodeEventEmitter(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                      \
    EventWidget* eventWidget =                                       \
        dynamic_cast<EventWidget*>(this->instance.data());           \
    if (eventWidget) {                                               \
      eventWidget->emitOnNode =                                      \
          Napi::Persistent(info[0].As<Napi::Function>());            \
      eventWidget->connectSignalsToEventEmitter();                   \
    }                                                                \
    return env.Null();                                               \
  }                                                                  \
  Napi::Value getNodeEventEmitter(const Napi::CallbackInfo& info) {  \
    Napi::Env env = info.Env();                                      \
    EventWidget* eventWidget =                                       \
        dynamic_cast<EventWidget*>(this->instance.data());           \
    if (eventWidget && eventWidget->emitOnNode) {                    \
      return eventWidget->emitOnNode.Value();                        \
    } else {                                                         \
      return env.Null();                                             \
    }                                                                \
  }                                                                  \
  Napi::Value subscribeToQtEvent(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                                      \
    Napi::String eventString = info[0].As<Napi::String>();           \
    EventWidget* eventWidget =                                       \
        dynamic_cast<EventWidget*>(this->instance.data());           \
    if (eventWidget) {                                               \
      eventWidget->subscribeToQtEvent(eventString.Utf8Value());      \
    }                                                                \
    return env.Null();                                               \
  }                                                                  \
  Napi::Value unSubscribeToQtEvent(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                      \
    Napi::String eventString = info[0].As<Napi::String>();           \
    EventWidget* eventWidget =                                       \
        dynamic_cast<EventWidget*>(this->instance.data());           \
    if (eventWidget) {                                               \
      eventWidget->unSubscribeToQtEvent(eventString.Utf8Value());    \
    }                                                                \
    return env.Null();                                               \
  }

#endif  // EVENTWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)         \
  InstanceMethod("initNodeEventEmitter",                          \
                 &WidgetWrapName::initNodeEventEmitter),          \
      InstanceMethod("getNodeEventEmitter",                       \
                     &WidgetWrapName::getNodeEventEmitter),       \
      InstanceMethod("subscribeToQtEvent",                        \
                     &WidgetWrapName::subscribeToQtEvent),        \
      InstanceMethod("unSubscribeToQtEvent",                      \
                     &WidgetWrapName::unSubscribeToQtEvent),

#endif  // EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef EVENTWIDGET_IMPLEMENTATIONS
#define EVENTWIDGET_IMPLEMENTATIONS(BaseWidgetName) \
  bool event(QEvent* event) override {              \
    if (EventWidget::event(event)) {                \
      return true;                                  \
    }                                               \
    return BaseWidgetName::event(event);            \
  }

#endif  // EVENTWIDGET_IMPLEMENTATIONS