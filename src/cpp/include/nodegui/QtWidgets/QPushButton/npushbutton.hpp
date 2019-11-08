#pragma once

#include <QPushButton>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NPushButton : public QPushButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QPushButton)
 public:
  using QPushButton::QPushButton;  // inherit all constructors of QPushButton

  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QPushButton::clicked, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "clicked"), Napi::Value::From(env, checked)});
    });
    QObject::connect(this, &QPushButton::released, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "released")});
    });
    QObject::connect(this, &QPushButton::pressed, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "pressed")});
    });
    QObject::connect(this, &QPushButton::toggled, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "toggled"), Napi::Value::From(env, checked)});
    });
  }
};
