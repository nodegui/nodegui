#pragma once

#include <QSplitter>

#include "Extras/Export/export.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NSplitter : public QSplitter, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSplitter)
 public:
  using QSplitter::QSplitter;

  virtual void connectSignalsToEventEmitter() {
    QFRAME_SIGNALS
    QObject::connect(this, &QSplitter::splitterMoved, [=](int pos, int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "splitterMoved"),
                             Napi::Number::New(env, pos),
                             Napi::Number::New(env, index)});
    });
  }
};
