#pragma once
#include <QComboBox>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NComboBox : public QComboBox, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QComboBox)
  using QComboBox::QComboBox;

  void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, QOverload<int>::of(&QComboBox::currentIndexChanged),
        [=](int index) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentIndexChanged"),
                                 Napi::Number::From(env, index)});
        });
    QObject::connect(
        this, QOverload<const QString &>::of(&QComboBox::currentTextChanged),
        [=](const QString &text) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentTextChanged"),
                                 Napi::String::New(env, text.toStdString())});
        });
    QObject::connect(
        this, &QComboBox::editTextChanged, [=](const QString &text) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "editTextChanged"),
                                 Napi::String::New(env, text.toStdString())});
        });
  }
};
