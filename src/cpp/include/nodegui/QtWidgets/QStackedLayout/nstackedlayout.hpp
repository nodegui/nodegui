#pragma once
#include <QStackedLayout>

#include "Extras/Export/export.h"
#include "QtWidgets/QLayout/qlayout_macro.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NStackedLayout : public QStackedLayout, public EventWidget {
  Q_OBJECT
 public:
  EVENTWIDGET_IMPLEMENTATIONS(QStackedLayout)
  using QStackedLayout::QStackedLayout;
  virtual void connectSignalsToEventEmitter() {
    QLAYOUT_SIGNALS
    QObject::connect(this, &QStackedLayout::currentChanged, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "currentChanged"),
                             Napi::Value::From(env, index)});
    });
    QObject::connect(this, &QStackedLayout::widgetRemoved, [=](int index) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "widgetRemoved"),
                             Napi::Value::From(env, index)});
    });
  }
};
