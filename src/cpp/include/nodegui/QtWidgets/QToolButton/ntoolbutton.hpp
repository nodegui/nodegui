#pragma once

#include <QAction>
#include <QToolButton>

#include "QtWidgets/QAction/qaction_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NToolButton : public QToolButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QToolButton)
 public:
  using QToolButton::QToolButton;  // inherit all constructors of QToolButton

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QToolButton::clicked, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "clicked"), Napi::Value::From(env, checked)});
    });
    QObject::connect(this, &QToolButton::released, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "released")});
    });
    QObject::connect(this, &QToolButton::pressed, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "pressed")});
    });
    QObject::connect(this, &QToolButton::toggled, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "toggled"), Napi::Value::From(env, checked)});
    });
    QObject::connect(this, &QToolButton::triggered, [=](QAction *action) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);

      // disable deletion of the native instance for these by passing true
      auto instance = QActionWrap::constructor.New(
          {Napi::External<QAction>::New(env, action),
           Napi::Boolean::New(env, true)});
      this->emitOnNode.Call({Napi::String::New(env, "triggered"), instance});
    });
  }
};
