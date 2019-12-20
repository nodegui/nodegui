#pragma once

#include <QDial>

#include "core/NodeWidget/nodewidget.h"

class NDial : public QDial, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDial)
 public:
  using QDial::QDial;  // inherit all constructors of QDial

  void connectWidgetSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QDial::valueChanged, [=](int value) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),
                             Napi::Number::New(env, value)});
    });
    QObject::connect(this, &QDial::rangeChanged, [=](int min, int max) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "rangeChanged"),
                             Napi::Number::New(env, min),
                             Napi::Number::New(env, max)});
    });
    QObject::connect(this, &QDial::sliderMoved, [=](int value) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "sliderMoved"),
                             Napi::Number::New(env, value)});
    });
    QObject::connect(this, &QDial::sliderPressed, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "sliderPressed")});
    });
    QObject::connect(this, &QDial::sliderReleased, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "sliderReleased")});
    });
  }
};
