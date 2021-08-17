#pragma once

#include <QDoubleSpinBox>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSpinBox/qabstractspinbox_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NDoubleSpinBox : public QDoubleSpinBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDoubleSpinBox)
 public:
  using QDoubleSpinBox::QDoubleSpinBox;  // inherit all constructors of
                                         // QDoubleSpinBox

  virtual void connectSignalsToEventEmitter() {
    QABSTRACTSPINBOX_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
        [=](double val) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),
                                 Napi::Number::New(env, val)});
        });
  }
};
