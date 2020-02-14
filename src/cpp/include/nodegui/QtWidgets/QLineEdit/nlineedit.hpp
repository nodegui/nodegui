#pragma once
#include <QLineEdit>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NLineEdit : public QLineEdit, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QLineEdit)
 public:
  using QLineEdit::QLineEdit;  // inherit all constructors of QLineEdit

  void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QLineEdit::cursorPositionChanged,
                     [=](int oldPost, int newPos) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "cursorPositionChanged"),
                            Napi::Value::From(env, oldPost),
                            Napi::Value::From(env, newPos)});
                     });
    QObject::connect(this, &QLineEdit::editingFinished, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "editingFinished")});
    });
    QObject::connect(this, &QLineEdit::inputRejected, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "inputRejected")});
    });
    QObject::connect(this, &QLineEdit::returnPressed, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "returnPressed")});
    });
    QObject::connect(this, &QLineEdit::selectionChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "selectionChanged")});
    });
    QObject::connect(this, &QLineEdit::textChanged, [=](QString text) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "textChanged"),
                             Napi::Value::From(env, text.toStdString())});
    });
    QObject::connect(this, &QLineEdit::textEdited, [=](QString text) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "textEdited"),
                             Napi::Value::From(env, text.toStdString())});
    });
  }
};