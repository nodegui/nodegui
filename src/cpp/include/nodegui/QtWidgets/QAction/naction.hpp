#pragma once

#include <QAction>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NAction : public QAction, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QAction)
 public:
  using QAction::QAction;  // inherit all constructors of QAction
  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QAction::triggered, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "triggered"),
                             Napi::Value::From(env, checked)});
    });
    QObject::connect(this, &QAction::changed, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "changed")});
    });
    QObject::connect(this, &QAction::hovered, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "hovered")});
    });
    QObject::connect(this, &QAction::toggled, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "toggled"), Napi::Value::From(env, checked)});
    });
  }
};
