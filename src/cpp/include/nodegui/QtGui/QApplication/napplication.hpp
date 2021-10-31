#pragma once
#include <QApplication>
#include <QGuiApplication>
#include <QWindow>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "QtGui/QScreen/qscreen_wrap.h"
#include "core/WrapperCache/wrappercache.h"
#include "napi.h"

class DLL_EXPORT NApplication : public QApplication, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QApplication)
 public:
  using QApplication::QApplication;  // inherit all constructors of QApplication
  virtual void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS

    QObject::connect(
        this, &QGuiApplication::focusWindowChanged, [=](QWindow* focusWindow) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "focusWindowChanged")});
        });

    QObject::connect(
        this, &QGuiApplication::primaryScreenChanged, [=](QScreen* screen) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance =
              WrapperCache::instance.get<QScreen, QScreenWrap>(env, screen);
          this->emitOnNode.Call(
              {Napi::String::New(env, "primaryScreenChanged"), instance});
        });

    QObject::connect(this, &QGuiApplication::screenAdded, [=](QScreen* screen) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance =
          WrapperCache::instance.get<QScreen, QScreenWrap>(env, screen);
      this->emitOnNode.Call({Napi::String::New(env, "screenAdded"), instance});
    });

    QObject::connect(
        this, &QGuiApplication::screenRemoved, [=](QScreen* screen) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance =
              WrapperCache::instance.get<QScreen, QScreenWrap>(env, screen);
          this->emitOnNode.Call(
              {Napi::String::New(env, "screenRemoved"), instance});
        });
  }
};
