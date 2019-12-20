#pragma once

#include <QLabel>

#include "core/NodeWidget/nodewidget.h"

class NLabel : public QLabel, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QLabel)
 public:
  using QLabel::QLabel;  // inherit all constructors of QLabel

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QLabel::linkActivated, [=](const QString &link) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "linkActivated"),
                             Napi::String::New(env, link.toStdString())});
    });
    QObject::connect(this, &QLabel::linkHovered, [=](const QString &link) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "linkHovered"),
                             Napi::String::New(env, link.toStdString())});
    });
  }
};
