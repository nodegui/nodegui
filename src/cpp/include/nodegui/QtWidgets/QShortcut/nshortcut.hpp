#pragma once
#include <QShortcut>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NShortcut : public QShortcut, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QShortcut)
 public:
  using QShortcut::QShortcut;  // inherit all constructors of QShortcut
  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
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
