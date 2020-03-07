#pragma once
#include <QSystemTrayIcon>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NSystemTrayIcon : public QSystemTrayIcon, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QSystemTrayIcon)
 public:
  // inherit all constructors of QSystemTrayIcon
  using QSystemTrayIcon::QSystemTrayIcon;
  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
    QObject::connect(this, &QSystemTrayIcon::activated, [=](int reason) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({
          Napi::String::New(env, "activated"),
          Napi::Value::From(env, reason),
      });
    });

    QObject::connect(this, &QSystemTrayIcon::messageClicked, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({
          Napi::String::New(env, "messageClicked"),
      });
    });
  }
};
