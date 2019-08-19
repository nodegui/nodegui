#pragma once

#include "deps/spdlog/spdlog.h"
#include <QPlainTextEdit>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NPlainTextEdit : public QPlainTextEdit, public NodeWidget
{
  NODEWIDGET_IMPLEMENTATIONS
public:
  using QPlainTextEdit::QPlainTextEdit; //inherit all constructors of QPlainTextEdit

  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QPlainTextEdit::textChanged, [=]() {
      QString str = this->toPlainText();
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "textChanged"), Napi::Value::From(env, str.toStdString())});
    });
  }
};
