#pragma once

#include "QtCore/QAbstractItemModel/qabstractitemmodel_wrap.h"
#include "QtCore/QModelIndex/qmodelindex_wrap.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractItemView exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION
#define QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION                       \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION                           \
  Napi::Value setCurrentIndex(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    Napi::Object indexObject = info[0].As<Napi::Object>();                  \
    QModelIndexWrap* indexWrap =                                            \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);             \
    this->instance->setCurrentIndex(*indexWrap->getInternalInstance());     \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value currentIndex(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    QModelIndex current = this->instance->currentIndex();                   \
    auto instance = QModelIndexWrap::constructor.New(                       \
        {Napi::External<QModelIndex>::New(env, new QModelIndex(current))}); \
    return instance;                                                        \
  }                                                                         \
  Napi::Value setIndexWidget(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    Napi::Object indexObject = info[0].As<Napi::Object>();                  \
    Napi::Object widgetObject = info[1].As<Napi::Object>();                 \
    QModelIndexWrap* indexWrap =                                            \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);             \
    NodeWidgetWrap* widgetWrap =                                            \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);             \
    this->instance->setIndexWidget(*indexWrap->getInternalInstance(),       \
                                   widgetWrap->getInternalInstance());      \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value indexWidget(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    Napi::Object indexObject = info[0].As<Napi::Object>();                  \
    QModelIndexWrap* indexWrap =                                            \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);             \
    QWidget* widget =                                                       \
        this->instance->indexWidget(*indexWrap->getInternalInstance());     \
    auto instance = QWidgetWrap::constructor.New(                           \
        {Napi::External<QWidget>::New(env, widget),                         \
         Napi::Boolean::New(env, true)});                                   \
    return instance;                                                        \
  }                                                                         \
  Napi::Value resetHorizontalScrollMode(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    this->instance->resetHorizontalScrollMode();                            \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value resetVerticalScrollMode(const Napi::CallbackInfo& info) {     \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    this->instance->resetVerticalScrollMode();                              \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value rootIndex(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    QModelIndex root = this->instance->rootIndex();                         \
    auto instance = QModelIndexWrap::constructor.New(                       \
        {Napi::External<QModelIndex>::New(env, new QModelIndex(root))});    \
    return instance;                                                        \
  }                                                                         \
  Napi::Value scrollToBottom(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    this->instance->scrollToBottom();                                       \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value scrollToTop(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    this->instance->scrollToTop();                                          \
    return env.Null();                                                      \
  }                                                                         \
  Napi::Value setModel(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                             \
    Napi::HandleScope scope(env);                                           \
    Napi::Object modelObject = info[0].As<Napi::Object>();                  \
    QAbstractItemModelWrap* modelWrap =                                     \
        Napi::ObjectWrap<QAbstractItemModelWrap>::Unwrap(modelObject);      \
    QAbstractItemView* instance = this->instance;                           \
    instance->setModel(modelWrap->getInternalInstance());                   \
    return env.Null();                                                      \
  }

#endif  // QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)      \
  InstanceMethod("setCurrentIndex", &WidgetWrapName::setCurrentIndex),   \
      InstanceMethod("currentIndex", &WidgetWrapName::currentIndex),     \
      InstanceMethod("setIndexWidget", &WidgetWrapName::setIndexWidget), \
      InstanceMethod("indexWidget", &WidgetWrapName::indexWidget),       \
      InstanceMethod("resetHorizontalScrollMode",                        \
                     &WidgetWrapName::resetHorizontalScrollMode),        \
      InstanceMethod("resetVerticalScrollMode",                          \
                     &WidgetWrapName::resetVerticalScrollMode),          \
      InstanceMethod("rootIndex", &WidgetWrapName::rootIndex),           \
      InstanceMethod("scrollToBottom", &WidgetWrapName::scrollToBottom), \
      InstanceMethod("scrollToTop", &WidgetWrapName::scrollToTop),       \
      InstanceMethod("setModel", &WidgetWrapName::setModel),

#endif  // QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACTITEMVIEW_SIGNALS
#define QABSTRACTITEMVIEW_SIGNALS                                       \
  QABSTRACTSCROLLAREA_SIGNALS                                           \
  QObject::connect(this, &QAbstractItemView::viewportEntered, [=]() {   \
    Napi::Env env = this->emitOnNode.Env();                             \
    Napi::HandleScope scope(env);                                       \
    this->emitOnNode.Call({Napi::String::New(env, "viewportEntered")}); \
  });

#endif  // QABSTRACTITEMVIEW_SIGNALS
