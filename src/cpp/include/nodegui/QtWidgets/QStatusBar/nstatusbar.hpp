#pragma once
#include <QStatusBar>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NStatusBar : public QStatusBar, public NodeWidget {
  Q_OBJECT

 public:
  NODEWIDGET_IMPLEMENTATIONS(QStatusBar)
  using QStatusBar::QStatusBar;  // inherit all constructors of QStatusBar

  void connectSignalsToEventEmitter() {
    QObject::connect(
        this, &QStatusBar::messageChanged, [=](const QString &message) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto newMessage = message.toStdString();
          auto newMessageWrap = Napi::Value::From(env, newMessage);

          this->emitOnNode.Call(
              {Napi::String::New(env, "messageChanged"), newMessageWrap});
        });

    QWIDGET_SIGNALS
  }
};