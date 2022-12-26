#pragma once
#include <QAbstractButton>
#include <QButtonGroup>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NButtonGroup : public QButtonGroup, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QButtonGroup)
 public:
  using QButtonGroup::QButtonGroup;  // inherit all constructors of QButtonGroup
  virtual void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
    // Qt Connects: Implement all signal connects here
    connect(this, &QButtonGroup::idClicked, [=](int id) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "idClicked"), Napi::Number::New(env, id)});
    });
    connect(this, &QButtonGroup::idPressed, [=](int id) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "idPressed"), Napi::Number::New(env, id)});
    });
    connect(this, &QButtonGroup::idReleased, [=](int id) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "idReleased"), Napi::Number::New(env, id)});
    });
    connect(this, &QButtonGroup::idToggled, [=](int id, bool checked) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "idToggled"),
                             Napi::Number::New(env, id),
                             Napi::Boolean::New(env, checked)});
    });
  }
};
