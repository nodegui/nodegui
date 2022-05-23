#pragma once

#include "QtCore/QSize/qsize_wrap.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "QtWidgets/QScrollBar/qscrollbar_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractScrollArea exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION
#define QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION                \
                                                                       \
  QFRAME_WRAPPED_METHODS_DECLARATION                                   \
                                                                       \
  Napi::Value maximumViewportSize(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                        \
    QSize size = this->instance->maximumViewportSize();                \
    auto instance = QSizeWrap::constructor.New(                        \
        {Napi::External<QSize>::New(env, new QSize(size))});           \
    return instance;                                                   \
  }                                                                    \
                                                                       \
  Napi::Value setHorizontalScrollBar(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env();                                        \
    Napi::Object scrollBarObject = info[0].As<Napi::Object>();         \
    QScrollBarWrap* scrollBarWrap =                                    \
        Napi::ObjectWrap<QScrollBarWrap>::Unwrap(scrollBarObject);     \
    QScrollBar* scrollBar = scrollBarWrap->getInternalInstance();      \
    this->instance->setHorizontalScrollBar(scrollBar);                 \
    return env.Null();                                                 \
  }                                                                    \
                                                                       \
  Napi::Value setVerticalScrollBar(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                                        \
    Napi::Object scrollBarObject = info[0].As<Napi::Object>();         \
    QScrollBarWrap* scrollBarWrap =                                    \
        Napi::ObjectWrap<QScrollBarWrap>::Unwrap(scrollBarObject);     \
    QScrollBar* scrollBar = scrollBarWrap->getInternalInstance();      \
    this->instance->setVerticalScrollBar(scrollBar);                   \
    return env.Null();                                                 \
  }                                                                    \
                                                                       \
  Napi::Value setViewport(const Napi::CallbackInfo& info) {            \
    Napi::Env env = info.Env();                                        \
    Napi::Object viewPortObject = info[0].As<Napi::Object>();          \
    NodeWidgetWrap* viewPortWidgetWrap =                               \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(viewPortObject);      \
    QWidget* viewPort = viewPortWidgetWrap->getInternalInstance();     \
    this->instance->setViewport(viewPort);                             \
    return env.Null();                                                 \
  }                                                                    \
                                                                       \
  Napi::Value viewport(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                        \
    QWidget* viewPort = this->instance->viewport();                    \
    auto instance = WrapperCache::instance.getWrapper(env, viewPort);  \
    return instance;                                                   \
  }

#endif  // QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)      \
                                                                               \
  QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                         \
                                                                               \
  InstanceMethod("maximumViewportSize", &WidgetWrapName::maximumViewportSize), \
      InstanceMethod("setHorizontalScrollBar",                                 \
                     &WidgetWrapName::setVerticalScrollBar),                   \
      InstanceMethod("setVerticalScrollBar",                                   \
                     &WidgetWrapName::setVerticalScrollBar),                   \
      InstanceMethod("setViewport", &WidgetWrapName::setViewport),             \
      InstanceMethod("viewport", &WidgetWrapName::viewport),

#endif  // QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACTSCROLLAREA_SIGNALS
#define QABSTRACTSCROLLAREA_SIGNALS QFRAME_SIGNALS

#endif
