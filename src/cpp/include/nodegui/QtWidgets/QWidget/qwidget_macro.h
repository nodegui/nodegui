#pragma once

#include <QSize>

#include "QtCore/QObject/qobject_macro.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "core/YogaWidget/yogawidget_macro.h"
/*

    This macro adds common QWidgets exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QWIDGET_WRAPPED_METHODS_DECLARATION
#define QWIDGET_WRAPPED_METHODS_DECLARATION                                \
                                                                           \
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION                                   \
  QOBJECT_WRAPPED_METHODS_DECLARATION                                      \
                                                                           \
  Napi::Value show(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    this->instance->show();                                                \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value resize(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Number width = info[0].As<Napi::Number>();                       \
    Napi::Number height = info[1].As<Napi::Number>();                      \
    this->instance->resize(width.Int32Value(), height.Int32Value());       \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value close(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    bool hasClosed = this->instance->close();                              \
    return Napi::Boolean::New(env, hasClosed);                             \
  }                                                                        \
  Napi::Value isVisible(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    bool isVisible = this->instance->isVisible();                          \
    return Napi::Boolean::New(env, isVisible);                             \
  }                                                                        \
                                                                           \
  Napi::Value setLayout(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Object layoutObject = info[0].As<Napi::Object>();                \
    QLayoutWrap* layoutWrap =                                              \
        Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject);               \
    this->instance->setLayout(layoutWrap->getInternalInstance());          \
    return env.Null();                                                     \
  }                                                                        \
                                                                           \
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::String text = info[0].As<Napi::String>();                        \
    std::string style = text.Utf8Value();                                  \
    this->instance->setStyleSheet(style.c_str());                          \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setCursor(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Number cursor = info[0].As<Napi::Number>();                      \
    this->instance->setCursor(                                             \
        static_cast<Qt::CursorShape>(cursor.Int32Value()));                \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setWindowIcon(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Object iconObject = info[0].As<Napi::Object>();                  \
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject); \
    this->instance->setWindowIcon(*iconWrap->getInternalInstance());       \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setWindowState(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Number state = info[0].As<Napi::Number>();                       \
    this->instance->setWindowState(                                        \
        static_cast<Qt::WindowState>(state.Int32Value()));                 \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setWindowTitle(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::String napiTitle = info[0].As<Napi::String>();                   \
    std::string title = napiTitle.Utf8Value();                             \
    this->instance->setWindowTitle(title.c_str());                         \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value styleSheet(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    QString stylesheet = this->instance->styleSheet();                     \
    return Napi::String::New(env, stylesheet.toStdString());               \
  }                                                                        \
  Napi::Value hide(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    this->instance->hide();                                                \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value move(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int x = info[0].As<Napi::Number>().Int32Value();                       \
    int y = info[1].As<Napi::Number>().Int32Value();                       \
    this->instance->move(x, y);                                            \
    return env.Null();                                                     \
  }                                                                        \
                                                                           \
  Napi::Value setMouseTracking(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Boolean isMouseTracked = info[0].As<Napi::Boolean>();            \
    this->instance->setMouseTracking(isMouseTracked.Value());              \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value hasMouseTracking(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    bool isMouseTracked = this->instance->hasMouseTracking();              \
    return Napi::Value::From(env, isMouseTracked);                         \
  }                                                                        \
  Napi::Value setEnabled(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    Napi::Boolean enabled = info[0].As<Napi::Boolean>();                   \
    this->instance->setEnabled(enabled.Value());                           \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value isEnabled(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    bool enabled = this->instance->isEnabled();                            \
    return Napi::Value::From(env, enabled);                                \
  }                                                                        \
  Napi::Value setFixedSize(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int width = info[0].As<Napi::Number>().Int32Value();                   \
    int height = info[1].As<Napi::Number>().Int32Value();                  \
    this->instance->setFixedSize(width, height);                           \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setGeometry(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int x = info[0].As<Napi::Number>().Int32Value();                       \
    int y = info[1].As<Napi::Number>().Int32Value();                       \
    int width = info[2].As<Napi::Number>().Int32Value();                   \
    int height = info[3].As<Napi::Number>().Int32Value();                  \
    this->instance->setGeometry(x, y, width, height);                      \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value geometry(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    QRect geometry = this->instance->geometry();                           \
    Napi::Object geometryObj = Napi::Object::New(env);                     \
    geometryObj.Set("width", geometry.width());                            \
    geometryObj.Set("height", geometry.height());                          \
    geometryObj.Set("x", geometry.x());                                    \
    geometryObj.Set("y", geometry.y());                                    \
    return geometryObj;                                                    \
  }                                                                        \
  Napi::Value setMaximumSize(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int width = info[0].As<Napi::Number>().Int32Value();                   \
    int height = info[1].As<Napi::Number>().Int32Value();                  \
    this->instance->setMaximumSize(width, height);                         \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value setMinimumSize(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int width = info[0].As<Napi::Number>().Int32Value();                   \
    int height = info[1].As<Napi::Number>().Int32Value();                  \
    this->instance->setMinimumSize(width, height);                         \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value repaint(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    this->instance->repaint();                                             \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value update(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    this->instance->update();                                              \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value updateGeometry(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    this->instance->updateGeometry();                                      \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value pos(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    QPoint pos = this->instance->pos();                                    \
    Napi::Object posObj = Napi::Object::New(env);                          \
    posObj.Set("x", pos.x());                                              \
    posObj.Set("y", pos.y());                                              \
    return posObj;                                                         \
  }                                                                        \
  Napi::Value size(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    QSize size = this->instance->size();                                   \
    Napi::Object sizeObj = Napi::Object::New(env);                         \
    sizeObj.Set("width", size.width());                                    \
    sizeObj.Set("height", size.height());                                  \
    return sizeObj;                                                        \
  }                                                                        \
  Napi::Value setAttribute(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int attributeId = info[0].As<Napi::Number>().Int32Value();             \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                   \
    this->instance->setAttribute(                                          \
        static_cast<Qt::WidgetAttribute>(attributeId), switchOn);          \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value testAttribute(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int attributeId = info[0].As<Napi::Number>().Int32Value();             \
    bool isOn = this->instance->testAttribute(                             \
        static_cast<Qt::WidgetAttribute>(attributeId));                    \
    return Napi::Boolean::New(env, isOn);                                  \
  }                                                                        \
  Napi::Value setWindowOpacity(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    float opacity = info[0].As<Napi::Number>().FloatValue();               \
    this->instance->setWindowOpacity(opacity);                             \
    return env.Null();                                                     \
  }                                                                        \
  Napi::Value windowOpacity(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    float opacity = this->instance->windowOpacity();                       \
    return Napi::Value::From(env, opacity);                                \
  }                                                                        \
  Napi::Value setWindowFlag(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                            \
    Napi::HandleScope scope(env);                                          \
    int windowType = info[0].As<Napi::Number>().Int32Value();              \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                   \
    this->instance->setWindowFlag(static_cast<Qt::WindowType>(windowType), \
                                  switchOn);                               \
    return env.Null();                                                     \
  }

#endif  // QWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                \
                                                                             \
  YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                   \
  QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                      \
  InstanceMethod("show", &WidgetWrapName::show),                             \
      InstanceMethod("resize", &WidgetWrapName::resize),                     \
      InstanceMethod("isVisible", &WidgetWrapName::isVisible),               \
      InstanceMethod("close", &WidgetWrapName::close),                       \
      InstanceMethod("setLayout", &WidgetWrapName::setLayout),               \
      InstanceMethod("setStyleSheet", &WidgetWrapName::setStyleSheet),       \
      InstanceMethod("setCursor", &WidgetWrapName::setCursor),               \
      InstanceMethod("setWindowIcon", &WidgetWrapName::setWindowIcon),       \
      InstanceMethod("setWindowState", &WidgetWrapName::setWindowState),     \
      InstanceMethod("setWindowTitle", &WidgetWrapName::setWindowTitle),     \
      InstanceMethod("styleSheet", &WidgetWrapName::styleSheet),             \
      InstanceMethod("hide", &WidgetWrapName::hide),                         \
      InstanceMethod("move", &WidgetWrapName::move),                         \
      InstanceMethod("setMouseTracking", &WidgetWrapName::setMouseTracking), \
      InstanceMethod("hasMouseTracking", &WidgetWrapName::hasMouseTracking), \
      InstanceMethod("setEnabled", &WidgetWrapName::setEnabled),             \
      InstanceMethod("isEnabled", &WidgetWrapName::isEnabled),               \
      InstanceMethod("setFixedSize", &WidgetWrapName::setFixedSize),         \
      InstanceMethod("setGeometry", &WidgetWrapName::setGeometry),           \
      InstanceMethod("geometry", &WidgetWrapName::geometry),                 \
      InstanceMethod("setMaximumSize", &WidgetWrapName::setMaximumSize),     \
      InstanceMethod("setMinimumSize", &WidgetWrapName::setMinimumSize),     \
      InstanceMethod("repaint", &WidgetWrapName::repaint),                   \
      InstanceMethod("update", &WidgetWrapName::update),                     \
      InstanceMethod("updateGeometry", &WidgetWrapName::updateGeometry),     \
      InstanceMethod("pos", &WidgetWrapName::pos),                           \
      InstanceMethod("size", &WidgetWrapName::size),                         \
      InstanceMethod("setAttribute", &WidgetWrapName::setAttribute),         \
      InstanceMethod("testAttribute", &WidgetWrapName::testAttribute),       \
      InstanceMethod("setWindowOpacity", &WidgetWrapName::setWindowOpacity), \
      InstanceMethod("windowOpacity", &WidgetWrapName::windowOpacity),       \
      InstanceMethod("setWindowFlag", &WidgetWrapName::setWindowFlag),

#endif  // QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
