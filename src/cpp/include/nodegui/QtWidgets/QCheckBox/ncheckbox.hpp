#pragma once

#include <QCheckBox>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NCheckBox : public QCheckBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QCheckBox)
 public:
  using QCheckBox::QCheckBox;  // inherit all constructors of QCheckBox

  void connectWidgetSignalsToEventEmitter() {
    QObject::connect(this, &QCheckBox::toggled, [=](bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "toggled"), Napi::Value::From(env, checked)});
    });
  }
};
