#include "QtCore/QPointF/qpointf_wrap.h"

#ifndef QSINGLEPOINTEVENT_WRAPPED_METHODS_DECLARATION
#define QSINGLEPOINTEVENT_WRAPPED_METHODS_DECLARATION                       \
  Napi::Value button(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                             \
    int button = static_cast<int>(this->instance->button());                \
    return Napi::Number::From(env, button);                                 \
  }                                                                         \
  Napi::Value buttons(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                             \
    int buttons = static_cast<int>(this->instance->buttons());              \
    return Napi::Number::From(env, buttons);                                \
  }                                                                         \
  Napi::Value position(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                             \
    QPointF point = this->instance->position();                             \
    qreal x = static_cast<qreal>(point.x());                                \
    qreal y = static_cast<qreal>(point.y());                                \
    Napi::Object obj = Napi::Object::New(env);                              \
    obj.Set("x", Napi::Number::From(env, x));                               \
    obj.Set("y", Napi::Number::From(env, y));                               \
    return obj;                                                             \
  }                                                                         \
  Napi::Value globalPosition(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                             \
    QPointF point = static_cast<QPointF>(this->instance->globalPosition()); \
    qreal x = static_cast<qreal>(point.x());                                \
    qreal y = static_cast<qreal>(point.y());                                \
    Napi::Object obj = Napi::Object::New(env);                              \
    obj.Set("x", Napi::Number::From(env, x));                               \
    obj.Set("y", Napi::Number::From(env, y));                               \
    return obj;                                                             \
  }                                                                         \
  Napi::Value scenePosition(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                             \
    QPointF point = this->instance->scenePosition();                        \
    qreal x = static_cast<qreal>(point.x());                                \
    qreal y = static_cast<qreal>(point.y());                                \
    Napi::Object obj = Napi::Object::New(env);                              \
    obj.Set("x", Napi::Number::From(env, x));                               \
    obj.Set("y", Napi::Number::From(env, y));                               \
    return obj;                                                             \
  }
#endif

#ifndef QSINGLEPOINTEVENT_WRAPPED_METHODS_EXPORT_DEFINE
#define QSINGLEPOINTEVENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
  InstanceMethod("button", &WidgetWrapName::button),                     \
      InstanceMethod("buttons", &WidgetWrapName::buttons),               \
      InstanceMethod("position", &WidgetWrapName::position),             \
      InstanceMethod("globalPosition", &WidgetWrapName::globalPosition), \
      InstanceMethod("scenePosition", &WidgetWrapName::scenePosition),
#endif
