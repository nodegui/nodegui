#pragma once
#include <QWidget>
#include <type_traits>

#include "core/Component/component_macro.h"
#include "eventwidget.h"

/*

    This macro adds common YogaWidget's exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

template <typename W>
struct InitHelper {
  static void connectSignalsToEventEmitter(W* instance) {
    if constexpr (std::is_base_of<EventWidget, W>::value) {
      // Call the possibly non-virtual `connectSignalsToEventEmitter()` on the
      // class directly. This is common when the type is one of our
      // `NFooBarWidget` subclasses and not a plain Qt `QFooBarWidget`.
      instance->connectSignalsToEventEmitter();
    } else {
      // This branch is used when we need to support wrapping `NFooBarWidget`
      // and `QFooBarWidget` instances at runtime.
      // `connectSignalsToEventEmitter()` must be virtual for this to work
      // correctly though.
      EventWidget* eventWidget = dynamic_cast<EventWidget*>(instance);
      if (eventWidget) {
        eventWidget->connectSignalsToEventEmitter();
      }
    }
  }
};

#ifndef EVENTWIDGET_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE
#define EVENTWIDGET_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(source) \
  COMPONENT_WRAPPED_METHODS_DECLARATION                                   \
  Napi::Value initNodeEventEmitter(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                           \
    EventWidget* eventWidget = dynamic_cast<EventWidget*>(source);        \
    if (eventWidget) {                                                    \
      eventWidget->emitOnNode =                                           \
          Napi::Persistent(info[0].As<Napi::Function>());                 \
    }                                                                     \
    InitHelper<std::remove_pointer<decltype(source)>::type>::             \
        connectSignalsToEventEmitter(source);                             \
    return env.Null();                                                    \
  }                                                                       \
  Napi::Value getNodeEventEmitter(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                           \
    EventWidget* eventWidget = dynamic_cast<EventWidget*>(source);        \
    if (eventWidget && eventWidget->emitOnNode) {                         \
      return eventWidget->emitOnNode.Value();                             \
    } else {                                                              \
      return env.Null();                                                  \
    }                                                                     \
  }                                                                       \
  Napi::Value subscribeToQtEvent(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                                           \
    Napi::String eventString = info[0].As<Napi::String>();                \
    EventWidget* eventWidget = dynamic_cast<EventWidget*>(source);        \
    bool success = false;                                                 \
    if (eventWidget) {                                                    \
      eventWidget->subscribeToQtEvent(eventString.Utf8Value());           \
      success = true;                                                     \
    }                                                                     \
    return Napi::Boolean::New(env, success);                              \
  }                                                                       \
  Napi::Value unSubscribeToQtEvent(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                           \
    Napi::String eventString = info[0].As<Napi::String>();                \
    EventWidget* eventWidget = dynamic_cast<EventWidget*>(source);        \
    if (eventWidget) {                                                    \
      eventWidget->unSubscribeToQtEvent(eventString.Utf8Value());         \
    }                                                                     \
    return env.Null();                                                    \
  }
#endif  // EVENTWIDGET_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE

#ifndef EVENTWIDGET_WRAPPED_METHODS_DECLARATION
#define EVENTWIDGET_WRAPPED_METHODS_DECLARATION              \
  EVENTWIDGET_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE( \
      this->instance.data())
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