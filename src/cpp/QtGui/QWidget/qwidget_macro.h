#ifndef QWIDGET_MACRO_H
#define QWIDGET_MACRO_H

#include "../../QtWidgets/QLayout/qlayout_wrap.h"

#define QWIDGET_WRAPPED_METHODS_DECLARATION \
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
    QLayoutWrap* layoutParent = Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject); \
    this->instance->setLayout(layoutParent->getInternalInstance()); \
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
} 

#define QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
\
 InstanceMethod("show", &WidgetWrapName::show),  \
 InstanceMethod("resize",&WidgetWrapName::resize), \
 InstanceMethod("close",&WidgetWrapName::close), \
 InstanceMethod("setLayout",&WidgetWrapName::setLayout), \
 InstanceMethod("setStyleSheet",&WidgetWrapName::setStyleSheet), \


#endif