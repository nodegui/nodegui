#pragma once
#include <QProgressBar>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NProgressBar : public QProgressBar, public NodeWidget {
  Q_OBJECT
 public:
  NODEWIDGET_IMPLEMENTATIONS(QProgressBar)
  using QProgressBar::QProgressBar;  // inherit all constructors of QProgressBar
  void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QProgressBar::valueChanged, [=](int value) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),
                             Napi::Value::From(env, value)});
    });
  }
};
