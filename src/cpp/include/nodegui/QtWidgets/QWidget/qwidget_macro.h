#pragma once

#include <QSize>
#include <QStyle>

#include "QtCore/QObject/qobject_macro.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QCursor/qcursor_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "core/YogaWidget/yogawidget_macro.h"
/*

    This macro adds common QWidgets exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QWIDGET_WRAPPED_METHODS_DECLARATION
#define QWIDGET_WRAPPED_METHODS_DECLARATION                                   \
                                                                              \
  QOBJECT_WRAPPED_METHODS_DECLARATION                                         \
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION                                      \
                                                                              \
  Napi::Value show(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->show();                                                   \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value resize(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Number width = info[0].As<Napi::Number>();                          \
    Napi::Number height = info[1].As<Napi::Number>();                         \
    this->instance->resize(width.Int32Value(), height.Int32Value());          \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value close(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    bool hasClosed = this->instance->close();                                 \
    return Napi::Boolean::New(env, hasClosed);                                \
  }                                                                           \
  Napi::Value mapFromGlobal(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object posObject = info[0].As<Napi::Object>();                      \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);    \
    QPoint pt =                                                               \
        this->instance->mapFromGlobal(*posWrap->getInternalInstance());       \
    auto instance = QPointWrap::constructor.New(                              \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});      \
    return instance;                                                          \
  }                                                                           \
  Napi::Value mapFromParent(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object posObject = info[0].As<Napi::Object>();                      \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);    \
    QPoint pt =                                                               \
        this->instance->mapFromParent(*posWrap->getInternalInstance());       \
    auto instance = QPointWrap::constructor.New(                              \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});      \
    return instance;                                                          \
  }                                                                           \
  Napi::Value mapToGlobal(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object posObject = info[0].As<Napi::Object>();                      \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);    \
    QPoint pt = this->instance->mapToGlobal(*posWrap->getInternalInstance()); \
    auto instance = QPointWrap::constructor.New(                              \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});      \
    return instance;                                                          \
  }                                                                           \
  Napi::Value mapToParent(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object posObject = info[0].As<Napi::Object>();                      \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);    \
    QPoint pt = this->instance->mapToParent(*posWrap->getInternalInstance()); \
    auto instance = QPointWrap::constructor.New(                              \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});      \
    return instance;                                                          \
  }                                                                           \
  Napi::Value isVisible(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    bool isVisible = this->instance->isVisible();                             \
    return Napi::Boolean::New(env, isVisible);                                \
  }                                                                           \
                                                                              \
  Napi::Value setLayout(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object layoutObject = info[0].As<Napi::Object>();                   \
    QLayoutWrap* layoutWrap =                                                 \
        Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject);                  \
    this->instance->setLayout(layoutWrap->getInternalInstance());             \
    return env.Null();                                                        \
  }                                                                           \
                                                                              \
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::String text = info[0].As<Napi::String>();                           \
    std::string style = text.Utf8Value();                                     \
    QString newStyle = QString::fromStdString(style);                         \
    QString currentStyleSheet = this->instance->styleSheet();                 \
    if (newStyle != currentStyleSheet) {                                      \
      this->instance->setStyleSheet(newStyle);                                \
    }                                                                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setCursor(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    if (info[0].IsNumber()) {                                                 \
      Napi::Number cursor = info[0].As<Napi::Number>();                       \
      this->instance->setCursor(                                              \
          static_cast<Qt::CursorShape>(cursor.Int32Value()));                 \
    } else {                                                                  \
      Napi::Object obj = info[0].As<Napi::Object>();                          \
      QCursorWrap* wrap = Napi::ObjectWrap<QCursorWrap>::Unwrap(obj);         \
      this->instance->setCursor(*wrap->getInternalInstance());                \
    }                                                                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setWindowIcon(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object iconObject = info[0].As<Napi::Object>();                     \
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);    \
    this->instance->setWindowIcon(*iconWrap->getInternalInstance());          \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setWindowState(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Number state = info[0].As<Napi::Number>();                          \
    this->instance->setWindowState(                                           \
        static_cast<Qt::WindowState>(state.Int32Value()));                    \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value windowState(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int state = static_cast<int>(this->instance->windowState());              \
    return Napi::Value::From(env, state);                                     \
  }                                                                           \
  Napi::Value setWindowTitle(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::String napiTitle = info[0].As<Napi::String>();                      \
    std::string title = napiTitle.Utf8Value();                                \
    this->instance->setWindowTitle(title.c_str());                            \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value windowTitle(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    QString title = this->instance->windowTitle();                            \
    return Napi::String::New(env, title.toStdString());                       \
  }                                                                           \
  Napi::Value styleSheet(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    QString stylesheet = this->instance->styleSheet();                        \
    return Napi::String::New(env, stylesheet.toStdString());                  \
  }                                                                           \
  Napi::Value hide(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->hide();                                                   \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value move(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int x = info[0].As<Napi::Number>().Int32Value();                          \
    int y = info[1].As<Napi::Number>().Int32Value();                          \
    this->instance->move(x, y);                                               \
    return env.Null();                                                        \
  }                                                                           \
                                                                              \
  Napi::Value setMouseTracking(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Boolean isMouseTracked = info[0].As<Napi::Boolean>();               \
    this->instance->setMouseTracking(isMouseTracked.Value());                 \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value hasMouseTracking(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    bool isMouseTracked = this->instance->hasMouseTracking();                 \
    return Napi::Value::From(env, isMouseTracked);                            \
  }                                                                           \
  Napi::Value setEnabled(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Boolean enabled = info[0].As<Napi::Boolean>();                      \
    this->instance->setEnabled(enabled.Value());                              \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value isEnabled(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    bool enabled = this->instance->isEnabled();                               \
    return Napi::Value::From(env, enabled);                                   \
  }                                                                           \
  Napi::Value setFixedSize(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int width = info[0].As<Napi::Number>().Int32Value();                      \
    int height = info[1].As<Napi::Number>().Int32Value();                     \
    this->instance->setFixedSize(width, height);                              \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setGeometry(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int x = info[0].As<Napi::Number>().Int32Value();                          \
    int y = info[1].As<Napi::Number>().Int32Value();                          \
    int width = info[2].As<Napi::Number>().Int32Value();                      \
    int height = info[3].As<Napi::Number>().Int32Value();                     \
    this->instance->setGeometry(x, y, width, height);                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setMaximumSize(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int width = info[0].As<Napi::Number>().Int32Value();                      \
    int height = info[1].As<Napi::Number>().Int32Value();                     \
    this->instance->setMaximumSize(width, height);                            \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value setMinimumSize(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int width = info[0].As<Napi::Number>().Int32Value();                      \
    int height = info[1].As<Napi::Number>().Int32Value();                     \
    this->instance->setMinimumSize(width, height);                            \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value repaint(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->repaint();                                                \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value update(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->update();                                                 \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value updateGeometry(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->updateGeometry();                                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value pos(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    QPoint pos = this->instance->pos();                                       \
    Napi::Object posObj = Napi::Object::New(env);                             \
    posObj.Set("x", pos.x());                                                 \
    posObj.Set("y", pos.y());                                                 \
    return posObj;                                                            \
  }                                                                           \
  Napi::Value size(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    QSize size = this->instance->size();                                      \
    auto sizeWrap = QSizeWrap::constructor.New({Napi::External<QSize>::New(   \
        env, new QSize(size.width(), size.height()))});                       \
    return sizeWrap;                                                          \
  }                                                                           \
  Napi::Value setAttribute(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int attributeId = info[0].As<Napi::Number>().Int32Value();                \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                      \
    this->instance->setAttribute(                                             \
        static_cast<Qt::WidgetAttribute>(attributeId), switchOn);             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value testAttribute(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int attributeId = info[0].As<Napi::Number>().Int32Value();                \
    bool isOn = this->instance->testAttribute(                                \
        static_cast<Qt::WidgetAttribute>(attributeId));                       \
    return Napi::Boolean::New(env, isOn);                                     \
  }                                                                           \
  Napi::Value setWindowOpacity(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    float opacity = info[0].As<Napi::Number>().FloatValue();                  \
    this->instance->setWindowOpacity(opacity);                                \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value windowOpacity(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    float opacity = this->instance->windowOpacity();                          \
    return Napi::Value::From(env, opacity);                                   \
  }                                                                           \
  Napi::Value setWindowFlag(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    int windowType = info[0].As<Napi::Number>().Int32Value();                 \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                      \
    this->instance->setWindowFlag(static_cast<Qt::WindowType>(windowType),    \
                                  switchOn);                                  \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value adjustSize(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->adjustSize();                                             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value activateWindow(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->activateWindow();                                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value raise(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->raise();                                                  \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value lower(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->lower();                                                  \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showFullScreen(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->showFullScreen();                                         \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showMaximized(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->showMaximized();                                          \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showMinimized(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->showMinimized();                                          \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value showNormal(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->showNormal();                                             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value addAction(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    Napi::Object actionObject = info[0].As<Napi::Object>();                   \
    QActionWrap* actionWrap =                                                 \
        Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);                  \
    this->instance->addAction(actionWrap->getInternalInstance());             \
    return env.Null();                                                        \
  }                                                                           \
  Napi::Value repolish(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                               \
    Napi::HandleScope scope(env);                                             \
    this->instance->style()->unpolish(this->instance);                        \
    this->instance->style()->polish(this->instance);                          \
    return env.Null();                                                        \
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
      InstanceMethod("mapFromGlobal", &WidgetWrapName::mapFromGlobal),       \
      InstanceMethod("mapFromParent", &WidgetWrapName::mapFromParent),       \
      InstanceMethod("mapToGlobal", &WidgetWrapName::mapToGlobal),           \
      InstanceMethod("mapToParent", &WidgetWrapName::mapToParent),           \
      InstanceMethod("setLayout", &WidgetWrapName::setLayout),               \
      InstanceMethod("setStyleSheet", &WidgetWrapName::setStyleSheet),       \
      InstanceMethod("setCursor", &WidgetWrapName::setCursor),               \
      InstanceMethod("setWindowIcon", &WidgetWrapName::setWindowIcon),       \
      InstanceMethod("setWindowState", &WidgetWrapName::setWindowState),     \
      InstanceMethod("windowState", &WidgetWrapName::windowState),           \
      InstanceMethod("setWindowTitle", &WidgetWrapName::setWindowTitle),     \
      InstanceMethod("windowTitle", &WidgetWrapName::windowTitle),           \
      InstanceMethod("styleSheet", &WidgetWrapName::styleSheet),             \
      InstanceMethod("hide", &WidgetWrapName::hide),                         \
      InstanceMethod("move", &WidgetWrapName::move),                         \
      InstanceMethod("setMouseTracking", &WidgetWrapName::setMouseTracking), \
      InstanceMethod("hasMouseTracking", &WidgetWrapName::hasMouseTracking), \
      InstanceMethod("setEnabled", &WidgetWrapName::setEnabled),             \
      InstanceMethod("isEnabled", &WidgetWrapName::isEnabled),               \
      InstanceMethod("setFixedSize", &WidgetWrapName::setFixedSize),         \
      InstanceMethod("setGeometry", &WidgetWrapName::setGeometry),           \
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
      InstanceMethod("setWindowFlag", &WidgetWrapName::setWindowFlag),       \
      InstanceMethod("adjustSize", &WidgetWrapName::adjustSize),             \
      InstanceMethod("activateWindow", &WidgetWrapName::activateWindow),     \
      InstanceMethod("raise", &WidgetWrapName::raise),                       \
      InstanceMethod("lower", &WidgetWrapName::lower),                       \
      InstanceMethod("showFullScreen", &WidgetWrapName::showFullScreen),     \
      InstanceMethod("showMaximized", &WidgetWrapName::showMaximized),       \
      InstanceMethod("showMinimized", &WidgetWrapName::showMinimized),       \
      InstanceMethod("showNormal", &WidgetWrapName::showNormal),             \
      InstanceMethod("addAction", &WidgetWrapName::addAction),               \
      InstanceMethod("repolish", &WidgetWrapName::repolish),

#endif  // QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QWIDGET_SIGNALS
#define QWIDGET_SIGNALS                                                        \
  QOBJECT_SIGNALS                                                              \
  QObject::connect(                                                            \
      this, &QWidget::windowTitleChanged, [=](const QString& title) {          \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        this->emitOnNode.Call({Napi::String::New(env, "windowTitleChanged"),   \
                               Napi::Value::From(env, title.toStdString())});  \
      });                                                                      \
  QObject::connect(this, &QWidget::windowIconChanged, [=](const QIcon& icon) { \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    auto instance = QIconWrap::constructor.New(                                \
        {Napi::External<QIcon>::New(env, new QIcon(icon))});                   \
    this->emitOnNode.Call(                                                     \
        {Napi::String::New(env, "windowIconChanged"), instance});              \
  });                                                                          \
  QObject::connect(                                                            \
      this, &QWidget::customContextMenuRequested, [=](const QPoint& pos) {     \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto instance = Napi::Object::New(env);                                \
        instance.Set("x", Napi::Number::New(env, pos.x()));                    \
        instance.Set("y", Napi::Number::New(env, pos.y()));                    \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "customContextMenuRequested"), instance}); \
      });

#endif  // QWIDGET_SIGNALS
