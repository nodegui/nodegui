#pragma once

#include <QGraphicsBlurEffect>

#include "Extras/Export/export.h"
#include "QtWidgets/QGraphicsEffect/qgraphicseffect_macro.h"
#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NGraphicsBlurEffect : public QGraphicsBlurEffect,
                                       public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QGraphicsBlurEffect)
 public:
  using QGraphicsBlurEffect::QGraphicsBlurEffect;

  virtual void connectSignalsToEventEmitter() {
    QGRAPHICSEFFECT_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QGraphicsBlurEffect::blurHintsChanged,
                     [=](QGraphicsBlurEffect::BlurHints hints) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "blurHintsChanged"),
                            Napi::Number::New(env, static_cast<int>(hints))});
                     });
    QObject::connect(
        this, &QGraphicsBlurEffect::blurRadiusChanged, [=](qreal radius) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "blurRadiusChanged"),
                                 Napi::Number::New(env, radius)});
        });
  }
};
