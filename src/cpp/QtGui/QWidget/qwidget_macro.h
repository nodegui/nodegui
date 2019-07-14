#pragma once

#include "src/cpp/QtWidgets/QLayout/qlayout_wrap.h"
#include "src/cpp/core/YogaWidget/yogawidget_macro.h"
#include "src/cpp/core/Events/eventwidget_macro.h"
/*

    This macro adds common QWidgets exported methods 
    The exported methods are taken into this macro to avoid writing them in each and every widget we export.
 */

#ifndef QWIDGET_WRAPPED_METHODS_DECLARATION
#define QWIDGET_WRAPPED_METHODS_DECLARATION \
\
YOGAWIDGET_WRAPPED_METHODS_DECLARATION \
EVENTWIDGET_WRAPPED_METHODS_DECLARATION \
\
Napi::Value show(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    this->instance->show(); \
    return env.Null(); \
} \
\
Napi::Value resize(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    Napi::Number width = info[0].As<Napi::Number>(); \
    Napi::Number height = info[1].As<Napi::Number>(); \
    this->instance->resize(width.Int32Value(), height.Int32Value()); \
    return env.Null(); \
} \
\
Napi::Value close(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    this->instance->close(); \
    return env.Null(); \
} \
\
Napi::Value setLayout(const Napi::CallbackInfo& info){ \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    Napi::Object layoutObject = info[0].As<Napi::Object>(); \
    QLayoutWrap* layoutWrap = Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject); \
    this->instance->setLayout(layoutWrap->getInternalInstance()); \
    return env.Null(); \
} \
\
Napi::Value setStyleSheet(const Napi::CallbackInfo& info) { \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  Napi::String text = info[0].As<Napi::String>(); \
  std::string style = text.Utf8Value(); \
  this->instance->setStyleSheet(style.c_str()); \
  return env.Null(); \
} \
\
Napi::Value hide(const Napi::CallbackInfo& info) { \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    this->instance->hide(); \
    return env.Null(); \
} \
\
Napi::Value setObjectName(const Napi::CallbackInfo& info){ \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    Napi::String objectName = info[0].As<Napi::String>(); \
    this->instance->setObjectName(QString::fromStdString(objectName.Utf8Value())); \
    return env.Null(); \
} \
Napi::Value setMouseTracking(const Napi::CallbackInfo& info){ \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    Napi::Boolean isMouseTracked = info[0].As<Napi::Boolean>(); \
    this->instance->setMouseTracking(isMouseTracked.Value()); \
    return env.Null(); \
} \
Napi::Value setEnabled(const Napi::CallbackInfo& info){ \
    Napi::Env env = info.Env(); \
    Napi::HandleScope scope(env); \
    Napi::Boolean enabled = info[0].As<Napi::Boolean>(); \
    this->instance->setEnabled(enabled.Value()); \
    return env.Null(); \
} \
Napi::Value setFixedSize(const Napi::CallbackInfo& info){ \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  int width = info[0].As<Napi::Number>().Int32Value(); \
  int height = info[1].As<Napi::Number>().Int32Value(); \
  this->instance->setFixedSize(width, height); \
  return env.Null(); \
} \
Napi::Value setMaximumSize(const Napi::CallbackInfo& info){ \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  int width = info[0].As<Napi::Number>().Int32Value(); \
  int height = info[1].As<Napi::Number>().Int32Value(); \
  this->instance->setMaximumSize(width, height); \
  return env.Null(); \
} \
Napi::Value setMinimumSize(const Napi::CallbackInfo& info){ \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  int width = info[0].As<Napi::Number>().Int32Value(); \
  int height = info[1].As<Napi::Number>().Int32Value(); \
  this->instance->setMinimumSize(width, height); \
  return env.Null(); \
} \
Napi::Value repaint(const Napi::CallbackInfo& info){ \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  this->instance->repaint(); \
  return env.Null(); \
} \
Napi::Value update(const Napi::CallbackInfo& info){ \
  Napi::Env env = info.Env(); \
  Napi::HandleScope scope(env); \
  this->instance->update(); \
  return env.Null(); \
} \



#endif //QWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
\
 YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
 EVENTWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
 InstanceMethod("show", &WidgetWrapName::show),  \
 InstanceMethod("resize",&WidgetWrapName::resize), \
 InstanceMethod("close",&WidgetWrapName::close), \
 InstanceMethod("setLayout",&WidgetWrapName::setLayout), \
 InstanceMethod("setStyleSheet",&WidgetWrapName::setStyleSheet), \
 InstanceMethod("hide",&WidgetWrapName::hide), \
 InstanceMethod("setObjectName",&WidgetWrapName::setObjectName), \
 InstanceMethod("setMouseTracking",&WidgetWrapName::setMouseTracking), \
 InstanceMethod("setEnabled",&WidgetWrapName::setEnabled), \
 InstanceMethod("setFixedSize",&WidgetWrapName::setFixedSize), \
 InstanceMethod("setMaximumSize",&WidgetWrapName::setMaximumSize), \
 InstanceMethod("setMinimumSize",&WidgetWrapName::setMinimumSize), \
 InstanceMethod("repaint",&WidgetWrapName::repaint), \
 InstanceMethod("update",&WidgetWrapName::update), \

#endif // QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE



