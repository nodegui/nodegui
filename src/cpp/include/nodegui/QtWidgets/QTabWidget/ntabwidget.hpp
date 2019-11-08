#pragma once

#include <QTabWidget>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NTabWidget : public QTabWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTabWidget)
 public:
  using QTabWidget::QTabWidget;  // inherit all constructors of QTabWidget

  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QTabWidget::currentChanged, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "currentChanged"),
                             Napi::Value::From(env, index)});
    });
    QObject::connect(this, &QTabWidget::tabBarClicked, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "tabBarClicked"),
                             Napi::Value::From(env, index)});
    });
    QObject::connect(this, &QTabWidget::tabBarDoubleClicked, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "tabBarDoubleClicked"),
                             Napi::Value::From(env, index)});
    });

    QObject::connect(this, &QTabWidget::tabCloseRequested, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "tabCloseRequested"),
                             Napi::Value::From(env, index)});
    });
  }
};
