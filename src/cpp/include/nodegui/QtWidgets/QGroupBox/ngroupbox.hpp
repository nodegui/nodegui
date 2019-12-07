#pragma once

#include <QGroupBox>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NGroupBox : public QGroupBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QGroupBox)
 public:
  using QGroupBox::QGroupBox;  // inherit all constructors of QGroupBox

  void connectWidgetSignalsToEventEmitter() {
    QObject::connect(this, &QGroupBox::clicked, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "clicked"), Napi::Value::From(env, checked)});
    });
    QObject::connect(this, &QGroupBox::toggled, [=](bool on) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "toggled"), Napi::Value::From(env, on)});
    });
  }
};
