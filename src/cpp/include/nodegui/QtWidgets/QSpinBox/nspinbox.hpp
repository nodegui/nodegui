#pragma once

#include <QSpinBox>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSpinBox/qabstractspinbox_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NSpinBox : public QSpinBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSpinBox)
 public:
  using QSpinBox::QSpinBox;  // inherit all constructors of QSpinBox

  void connectSignalsToEventEmitter() {
    QABSTRACTSPINBOX_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, QOverload<int>::of(&QSpinBox::valueChanged), [=](int val) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),
                                 Napi::Value::From(env, val)});
        });
  }
};
