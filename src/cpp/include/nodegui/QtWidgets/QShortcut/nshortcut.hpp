#pragma once

#include <QShortcut>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NShortcut : public QShortcut, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QShortcut)
 public:
  using QShortcut::QShortcut;  // inherit all constructors of QShortcut
  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QShortcut::activated, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "activated")});
    });
    QObject::connect(this, &QShortcut::activatedAmbiguously, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "activatedAmbiguously")});
    });
  }
};
