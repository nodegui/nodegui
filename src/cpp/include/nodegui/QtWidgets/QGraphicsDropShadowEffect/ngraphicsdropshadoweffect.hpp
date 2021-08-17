#pragma once

#include <QGraphicsDropShadowEffect>

#include "Extras/Export/export.h"
#include "QtWidgets/QGraphicsEffect/qgraphicseffect_macro.h"
#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NGraphicsDropShadowEffect : public QGraphicsDropShadowEffect,
                                             public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QGraphicsDropShadowEffect)
 public:
  using QGraphicsDropShadowEffect::QGraphicsDropShadowEffect;

  virtual void connectSignalsToEventEmitter() {
    QGRAPHICSEFFECT_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, &QGraphicsDropShadowEffect::blurRadiusChanged,
        [=](qreal blurRadius) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "blurRadiusChanged"),
                                 Napi::Number::New(env, blurRadius)});
        });
  }
};
