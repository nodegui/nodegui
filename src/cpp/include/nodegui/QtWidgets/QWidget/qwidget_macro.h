#pragma once

#include <QGraphicsEffect>
#include <QSize>
#include <QStyle>

#include "QtCore/QObject/qobject_wrap.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QCursor/qcursor_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtGui/QStyle/qstyle_wrap.h"
#include "QtGui/QWindow/qwindow_wrap.h"
#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "core/WrapperCache/wrappercache.h"
#include "core/YogaWidget/yogawidget_macro.h"
/*

    This macro adds common QWidgets exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QWIDGET_WRAPPED_METHODS_DECLARATION
#define QWIDGET_WRAPPED_METHODS_DECLARATION                                    \
                                                                               \
  QOBJECT_WRAPPED_METHODS_DECLARATION_WITH_EVENT_SOURCE(this->instance.data()) \
  YOGAWIDGET_WRAPPED_METHODS_DECLARATION                                       \
                                                                               \
  Napi::Value setParent(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    if (info[0].IsNull()) {                                                    \
      this->instance->setParent(nullptr);                                      \
    } else {                                                                   \
      QObject* parentObject = info[0].As<Napi::External<QObject>>().Data();    \
      QWidget* parentWidget = qobject_cast<QWidget*>(parentObject);            \
      if (parentWidget) {                                                      \
        this->instance->setParent(parentWidget);                               \
      }                                                                        \
    }                                                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value show(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    this->instance->show();                                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value resize(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                                \
    Napi::Number width = info[0].As<Napi::Number>();                           \
    Napi::Number height = info[1].As<Napi::Number>();                          \
    this->instance->resize(width.Int32Value(), height.Int32Value());           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value close(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    bool hasClosed = this->instance->close();                                  \
    return Napi::Boolean::New(env, hasClosed);                                 \
  }                                                                            \
  Napi::Value mapFromGlobal(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::Object posObject = info[0].As<Napi::Object>();                       \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);     \
    QPoint pt =                                                                \
        this->instance->mapFromGlobal(*posWrap->getInternalInstance());        \
    auto instance = QPointWrap::constructor.New(                               \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});       \
    return instance;                                                           \
  }                                                                            \
  Napi::Value mapFromParent(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::Object posObject = info[0].As<Napi::Object>();                       \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);     \
    QPoint pt =                                                                \
        this->instance->mapFromParent(*posWrap->getInternalInstance());        \
    auto instance = QPointWrap::constructor.New(                               \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});       \
    return instance;                                                           \
  }                                                                            \
  Napi::Value mapToGlobal(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    Napi::Object posObject = info[0].As<Napi::Object>();                       \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);     \
    QPoint pt = this->instance->mapToGlobal(*posWrap->getInternalInstance());  \
    auto instance = QPointWrap::constructor.New(                               \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});       \
    return instance;                                                           \
  }                                                                            \
  Napi::Value mapToParent(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    Napi::Object posObject = info[0].As<Napi::Object>();                       \
    QPointWrap* posWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(posObject);     \
    QPoint pt = this->instance->mapToParent(*posWrap->getInternalInstance());  \
    auto instance = QPointWrap::constructor.New(                               \
        {Napi::External<QPoint>::New(env, new QPoint(pt.x(), pt.y()))});       \
    return instance;                                                           \
  }                                                                            \
  Napi::Value setLayout(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    Napi::Object layoutObject = info[0].As<Napi::Object>();                    \
    QLayoutWrap* layoutWrap =                                                  \
        Napi::ObjectWrap<QLayoutWrap>::Unwrap(layoutObject);                   \
    this->instance->setLayout(layoutWrap->getInternalInstance());              \
    return env.Null();                                                         \
  }                                                                            \
                                                                               \
  Napi::Value setStyleSheet(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::String text = info[0].As<Napi::String>();                            \
    std::string style = text.Utf8Value();                                      \
    QString newStyle = QString::fromStdString(style);                          \
    QString currentStyleSheet = this->instance->styleSheet();                  \
    if (newStyle != currentStyleSheet) {                                       \
      this->instance->setStyleSheet(newStyle);                                 \
    }                                                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setCursor(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    if (info[0].IsNumber()) {                                                  \
      Napi::Number cursor = info[0].As<Napi::Number>();                        \
      this->instance->setCursor(                                               \
          static_cast<Qt::CursorShape>(cursor.Int32Value()));                  \
    } else {                                                                   \
      Napi::Object obj = info[0].As<Napi::Object>();                           \
      QCursorWrap* wrap = Napi::ObjectWrap<QCursorWrap>::Unwrap(obj);          \
      this->instance->setCursor(*wrap->getInternalInstance());                 \
    }                                                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setWindowIcon(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::Object iconObject = info[0].As<Napi::Object>();                      \
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);     \
    this->instance->setWindowIcon(*iconWrap->getInternalInstance());           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setWindowState(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    Napi::Number state = info[0].As<Napi::Number>();                           \
    this->instance->setWindowState(                                            \
        static_cast<Qt::WindowState>(state.Int32Value()));                     \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value windowState(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    int state = static_cast<int>(this->instance->windowState());               \
    return Napi::Value::From(env, state);                                      \
  }                                                                            \
  Napi::Value setWindowTitle(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    Napi::String napiTitle = info[0].As<Napi::String>();                       \
    std::string title = napiTitle.Utf8Value();                                 \
    this->instance->setWindowTitle(title.c_str());                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value windowTitle(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    QString title = this->instance->windowTitle();                             \
    return Napi::String::New(env, title.toStdString());                        \
  }                                                                            \
  Napi::Value styleSheet(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    QString stylesheet = this->instance->styleSheet();                         \
    return Napi::String::New(env, stylesheet.toStdString());                   \
  }                                                                            \
  Napi::Value hide(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    this->instance->hide();                                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value move(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    int x = info[0].As<Napi::Number>().Int32Value();                           \
    int y = info[1].As<Napi::Number>().Int32Value();                           \
    this->instance->move(x, y);                                                \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setFixedSize(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    int width = info[0].As<Napi::Number>().Int32Value();                       \
    int height = info[1].As<Napi::Number>().Int32Value();                      \
    this->instance->setFixedSize(width, height);                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setGeometry(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    int x = info[0].As<Napi::Number>().Int32Value();                           \
    int y = info[1].As<Napi::Number>().Int32Value();                           \
    int width = info[2].As<Napi::Number>().Int32Value();                       \
    int height = info[3].As<Napi::Number>().Int32Value();                      \
    this->instance->setGeometry(x, y, width, height);                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setMaximumSize(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int width = info[0].As<Napi::Number>().Int32Value();                       \
    int height = info[1].As<Napi::Number>().Int32Value();                      \
    this->instance->setMaximumSize(width, height);                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setMinimumSize(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int width = info[0].As<Napi::Number>().Int32Value();                       \
    int height = info[1].As<Napi::Number>().Int32Value();                      \
    this->instance->setMinimumSize(width, height);                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value repaint(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                                \
    this->instance->repaint();                                                 \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value update(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                                \
    this->instance->update();                                                  \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value updateGeometry(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->updateGeometry();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value pos(const Napi::CallbackInfo& info) {                            \
    Napi::Env env = info.Env();                                                \
    QPoint pos = this->instance->pos();                                        \
    Napi::Object posObj = Napi::Object::New(env);                              \
    posObj.Set("x", pos.x());                                                  \
    posObj.Set("y", pos.y());                                                  \
    return posObj;                                                             \
  }                                                                            \
  Napi::Value size(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    QSize size = this->instance->size();                                       \
    auto sizeWrap = QSizeWrap::constructor.New({Napi::External<QSize>::New(    \
        env, new QSize(size.width(), size.height()))});                        \
    return sizeWrap;                                                           \
  }                                                                            \
  Napi::Value setAttribute(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    int attributeId = info[0].As<Napi::Number>().Int32Value();                 \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                       \
    this->instance->setAttribute(                                              \
        static_cast<Qt::WidgetAttribute>(attributeId), switchOn);              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value testAttribute(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    int attributeId = info[0].As<Napi::Number>().Int32Value();                 \
    bool isOn = this->instance->testAttribute(                                 \
        static_cast<Qt::WidgetAttribute>(attributeId));                        \
    return Napi::Boolean::New(env, isOn);                                      \
  }                                                                            \
  Napi::Value setWindowOpacity(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                                \
    float opacity = info[0].As<Napi::Number>().FloatValue();                   \
    this->instance->setWindowOpacity(opacity);                                 \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value windowOpacity(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    float opacity = this->instance->windowOpacity();                           \
    return Napi::Value::From(env, opacity);                                    \
  }                                                                            \
  Napi::Value setWindowFlag(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    int windowType = info[0].As<Napi::Number>().Int32Value();                  \
    bool switchOn = info[1].As<Napi::Boolean>().Value();                       \
    this->instance->setWindowFlag(static_cast<Qt::WindowType>(windowType),     \
                                  switchOn);                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value adjustSize(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    this->instance->adjustSize();                                              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value activateWindow(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->activateWindow();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value raise(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    this->instance->raise();                                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value lower(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    this->instance->lower();                                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value showFullScreen(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->showFullScreen();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value showMaximized(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    this->instance->showMaximized();                                           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value showMinimized(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    this->instance->showMinimized();                                           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value showNormal(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    this->instance->showNormal();                                              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value addAction(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    Napi::Object actionObject = info[0].As<Napi::Object>();                    \
    QActionWrap* actionWrap =                                                  \
        Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);                   \
    this->instance->addAction(actionWrap->getInternalInstance());              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value removeAction(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    Napi::Object actionObject = info[0].As<Napi::Object>();                    \
    QActionWrap* actionWrap =                                                  \
        Napi::ObjectWrap<QActionWrap>::Unwrap(actionObject);                   \
    this->instance->removeAction(actionWrap->getInternalInstance());           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value repolish(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    this->instance->style()->unpolish(this->instance);                         \
    this->instance->style()->polish(this->instance);                           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setGraphicsEffect(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                                \
    Napi::Object effectObject = info[0].As<Napi::Object>();                    \
    QObjectWrap* effectWrap =                                                  \
        Napi::ObjectWrap<QObjectWrap>::Unwrap(effectObject);                   \
    QGraphicsEffect* effect =                                                  \
        qobject_cast<QGraphicsEffect*>(effectWrap->getInternalInstance());     \
    this->instance->setGraphicsEffect(effect);                                 \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setFocus(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    int reason = info[0].As<Napi::Number>().Int32Value();                      \
    this->instance->setFocus(static_cast<Qt::FocusReason>(reason));            \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value clearFocus(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    this->instance->clearFocus();                                              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setSizePolicy(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    QSizePolicy::Policy horizontal = static_cast<QSizePolicy::Policy>(         \
        info[0].As<Napi::Number>().Int32Value());                              \
    QSizePolicy::Policy vertical = static_cast<QSizePolicy::Policy>(           \
        info[1].As<Napi::Number>().Int32Value());                              \
    this->instance->setSizePolicy(horizontal, vertical);                       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value style(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    QStyle* style = this->instance->style();                                   \
    return QStyleWrap::constructor.New(                                        \
        {Napi::External<QStyle>::New(env, style)});                            \
  }                                                                            \
  Napi::Value isWindow(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    bool result = this->instance->isWindow();                                  \
    return Napi::Boolean::New(env, result);                                    \
  }                                                                            \
  Napi::Value isWindowModified(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                                \
    bool result = this->instance->isWindowModified();                          \
    return Napi::Boolean::New(env, result);                                    \
  }                                                                            \
  Napi::Value setHidden(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    bool hidden = info[0].As<Napi::Boolean>().Value();                         \
    this->instance->setHidden(hidden);                                         \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setVisible(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    bool visible = info[0].As<Napi::Boolean>().Value();                        \
    this->instance->setVisible(visible);                                       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setWindowModified(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                                \
    bool modified = info[0].As<Napi::Boolean>().Value();                       \
    this->instance->setWindowModified(modified);                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value windowHandle(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    QWindow* window = this->instance->windowHandle();                          \
    if (window) {                                                              \
      return WrapperCache::instance.get<QWindow, QWindowWrap>(env, window);    \
    } else {                                                                   \
      return env.Null();                                                       \
    }                                                                          \
  }                                                                            \
  Napi::Value setFixedHeight(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int h = info[0].As<Napi::Number>().Int32Value();                           \
    this->instance->setFixedHeight(h);                                         \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setFixedWidth(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    int w = info[0].As<Napi::Number>().Int32Value();                           \
    this->instance->setFixedWidth(w);                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value ensurePolished(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->ensurePolished();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value clearMask(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    this->instance->clearMask();                                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value grabKeyboard(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    this->instance->grabKeyboard();                                            \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value grabMouse(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    this->instance->grabMouse();                                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value hasHeightForWidth(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                                \
    bool result = this->instance->hasHeightForWidth();                         \
    return Napi::Boolean::New(env, result);                                    \
  }                                                                            \
  Napi::Value minimumSizeHint(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    QSize result = this->instance->minimumSizeHint();                          \
    auto resultInstance = QSizeWrap::constructor.New(                          \
        {Napi::External<QSize>::New(env, new QSize(result))});                 \
    return resultInstance;                                                     \
  }                                                                            \
  Napi::Value releaseKeyboard(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    this->instance->releaseKeyboard();                                         \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value releaseMouse(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    this->instance->releaseMouse();                                            \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value releaseShortcut(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    int id = info[0].As<Napi::Number>().Int32Value();                          \
    this->instance->releaseShortcut(id);                                       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setContentsMargins(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                                \
    int left = info[0].As<Napi::Number>().Int32Value();                        \
    int top = info[1].As<Napi::Number>().Int32Value();                         \
    int right = info[2].As<Napi::Number>().Int32Value();                       \
    int bottom = info[3].As<Napi::Number>().Int32Value();                      \
    this->instance->setContentsMargins(left, top, right, bottom);              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setShortcutAutoRepeat(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                                \
    int id = info[0].As<Napi::Number>().Int32Value();                          \
    bool enable = info[1].As<Napi::Boolean>().Value();                         \
    this->instance->setShortcutAutoRepeat(id, enable);                         \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setShortcutEnabled(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                                \
    int id = info[0].As<Napi::Number>().Int32Value();                          \
    bool enable = info[1].As<Napi::Boolean>().Value();                         \
    this->instance->setShortcutEnabled(id, enable);                            \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setSizeIncrement(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                                \
    int w = info[0].As<Napi::Number>().Int32Value();                           \
    int h = info[1].As<Napi::Number>().Int32Value();                           \
    this->instance->setSizeIncrement(w, h);                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setWindowRole(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    std::string roleNapiText = info[0].As<Napi::String>().Utf8Value();         \
    QString role = QString::fromUtf8(roleNapiText.c_str());                    \
    this->instance->setWindowRole(role);                                       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value underMouse(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    bool result = this->instance->underMouse();                                \
    return Napi::Boolean::New(env, result);                                    \
  }                                                                            \
  Napi::Value unsetCursor(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    this->instance->unsetCursor();                                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value unsetLayoutDirection(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                                \
    this->instance->unsetLayoutDirection();                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value unsetLocale(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    this->instance->unsetLocale();                                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value windowRole(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    QString result = this->instance->windowRole();                             \
    return Napi::String::New(env, result.toStdString());                       \
  }                                                                            \
  Napi::Value heightForWidth(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int w = info[0].As<Napi::Number>().Int32Value();                           \
    int result = this->instance->heightForWidth(w);                            \
    return Napi::Number::New(env, result);                                     \
  }

#endif  // QWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                  \
                                                                               \
  YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                     \
  QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                        \
  InstanceMethod("show", &WidgetWrapName::show),                               \
      InstanceMethod("resize", &WidgetWrapName::resize),                       \
      InstanceMethod("close", &WidgetWrapName::close),                         \
      InstanceMethod("mapFromGlobal", &WidgetWrapName::mapFromGlobal),         \
      InstanceMethod("mapFromParent", &WidgetWrapName::mapFromParent),         \
      InstanceMethod("mapToGlobal", &WidgetWrapName::mapToGlobal),             \
      InstanceMethod("mapToParent", &WidgetWrapName::mapToParent),             \
      InstanceMethod("setLayout", &WidgetWrapName::setLayout),                 \
      InstanceMethod("setStyleSheet", &WidgetWrapName::setStyleSheet),         \
      InstanceMethod("setCursor", &WidgetWrapName::setCursor),                 \
      InstanceMethod("setWindowIcon", &WidgetWrapName::setWindowIcon),         \
      InstanceMethod("setWindowState", &WidgetWrapName::setWindowState),       \
      InstanceMethod("windowState", &WidgetWrapName::windowState),             \
      InstanceMethod("setWindowTitle", &WidgetWrapName::setWindowTitle),       \
      InstanceMethod("windowTitle", &WidgetWrapName::windowTitle),             \
      InstanceMethod("styleSheet", &WidgetWrapName::styleSheet),               \
      InstanceMethod("hide", &WidgetWrapName::hide),                           \
      InstanceMethod("move", &WidgetWrapName::move),                           \
      InstanceMethod("setFixedSize", &WidgetWrapName::setFixedSize),           \
      InstanceMethod("setGeometry", &WidgetWrapName::setGeometry),             \
      InstanceMethod("setMaximumSize", &WidgetWrapName::setMaximumSize),       \
      InstanceMethod("setMinimumSize", &WidgetWrapName::setMinimumSize),       \
      InstanceMethod("repaint", &WidgetWrapName::repaint),                     \
      InstanceMethod("update", &WidgetWrapName::update),                       \
      InstanceMethod("updateGeometry", &WidgetWrapName::updateGeometry),       \
      InstanceMethod("pos", &WidgetWrapName::pos),                             \
      InstanceMethod("size", &WidgetWrapName::size),                           \
      InstanceMethod("setAttribute", &WidgetWrapName::setAttribute),           \
      InstanceMethod("testAttribute", &WidgetWrapName::testAttribute),         \
      InstanceMethod("setWindowOpacity", &WidgetWrapName::setWindowOpacity),   \
      InstanceMethod("windowOpacity", &WidgetWrapName::windowOpacity),         \
      InstanceMethod("setWindowFlag", &WidgetWrapName::setWindowFlag),         \
      InstanceMethod("adjustSize", &WidgetWrapName::adjustSize),               \
      InstanceMethod("activateWindow", &WidgetWrapName::activateWindow),       \
      InstanceMethod("raise", &WidgetWrapName::raise),                         \
      InstanceMethod("lower", &WidgetWrapName::lower),                         \
      InstanceMethod("showFullScreen", &WidgetWrapName::showFullScreen),       \
      InstanceMethod("showMaximized", &WidgetWrapName::showMaximized),         \
      InstanceMethod("showMinimized", &WidgetWrapName::showMinimized),         \
      InstanceMethod("showNormal", &WidgetWrapName::showNormal),               \
      InstanceMethod("addAction", &WidgetWrapName::addAction),                 \
      InstanceMethod("removeAction", &WidgetWrapName::removeAction),           \
      InstanceMethod("repolish", &WidgetWrapName::repolish),                   \
      InstanceMethod("setGraphicsEffect", &WidgetWrapName::setGraphicsEffect), \
      InstanceMethod("setFocus", &WidgetWrapName::setFocus),                   \
      InstanceMethod("clearFocus", &WidgetWrapName::clearFocus),               \
      InstanceMethod("setSizePolicy", &WidgetWrapName::setSizePolicy),         \
      InstanceMethod("style", &WidgetWrapName::style),                         \
      InstanceMethod("isWindow", &WidgetWrapName::isWindow),                   \
      InstanceMethod("isWindowModified", &WidgetWrapName::isWindowModified),   \
      InstanceMethod("setHidden", &WidgetWrapName::setHidden),                 \
      InstanceMethod("setVisible", &WidgetWrapName::setVisible),               \
      InstanceMethod("setWindowModified", &WidgetWrapName::setWindowModified), \
      InstanceMethod("windowHandle", &WidgetWrapName::windowHandle),           \
      InstanceMethod("setFixedHeight", &WidgetWrapName::setFixedHeight),       \
      InstanceMethod("setFixedWidth", &WidgetWrapName::setFixedWidth),         \
      InstanceMethod("ensurePolished", &WidgetWrapName::ensurePolished),       \
      InstanceMethod("clearMask", &WidgetWrapName::clearMask),                 \
      InstanceMethod("grabKeyboard", &WidgetWrapName::grabKeyboard),           \
      InstanceMethod("grabMouse", &WidgetWrapName::grabMouse),                 \
      InstanceMethod("hasHeightForWidth", &WidgetWrapName::hasHeightForWidth), \
      InstanceMethod("minimumSizeHint", &WidgetWrapName::minimumSizeHint),     \
      InstanceMethod("releaseKeyboard", &WidgetWrapName::releaseKeyboard),     \
      InstanceMethod("releaseMouse", &WidgetWrapName::releaseMouse),           \
      InstanceMethod("releaseShortcut", &WidgetWrapName::releaseShortcut),     \
      InstanceMethod("setContentsMargins",                                     \
                     &WidgetWrapName::setContentsMargins),                     \
      InstanceMethod("setShortcutAutoRepeat",                                  \
                     &WidgetWrapName::setShortcutAutoRepeat),                  \
      InstanceMethod("setShortcutEnabled",                                     \
                     &WidgetWrapName::setShortcutEnabled),                     \
      InstanceMethod("setSizeIncrement", &WidgetWrapName::setSizeIncrement),   \
      InstanceMethod("setWindowRole", &WidgetWrapName::setWindowRole),         \
      InstanceMethod("underMouse", &WidgetWrapName::underMouse),               \
      InstanceMethod("unsetCursor", &WidgetWrapName::unsetCursor),             \
      InstanceMethod("unsetLayoutDirection",                                   \
                     &WidgetWrapName::unsetLayoutDirection),                   \
      InstanceMethod("unsetLocale", &WidgetWrapName::unsetLocale),             \
      InstanceMethod("windowRole", &WidgetWrapName::windowRole),               \
      InstanceMethod("heightForWidth", &WidgetWrapName::heightForWidth),

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
