#pragma once
#include <QCheckBox>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NCheckBox : public QCheckBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QCheckBox)
 public:
  using QCheckBox::QCheckBox;  // inherit all constructors of QCheckBox

  void connectSignalsToEventEmitter() {
    QABSTRACT_BUTTON_SIGNALS
    QObject::connect(this, &QCheckBox::stateChanged, [=](int state) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "stateChanged"),
                             Napi::Value::From(env, state)});
    });
  }
};
