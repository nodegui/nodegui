#pragma once
#include <QAction>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NAction : public QAction, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QAction)
 public:
  using QAction::QAction;  // inherit all constructors of QAction
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS
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
