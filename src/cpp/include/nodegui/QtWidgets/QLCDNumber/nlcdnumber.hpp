#pragma once

#include <QLCDNumber>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NLCDNumber : public QLCDNumber, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QLCDNumber)
 public:
  using QLCDNumber::QLCDNumber;  // inherit all constructors of QLCDNumber

  virtual void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS
    QObject::connect(this, &QLCDNumber::overflow, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "overflow")});
    });
  }
};
