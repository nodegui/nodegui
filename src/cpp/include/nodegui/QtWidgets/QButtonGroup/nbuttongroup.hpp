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
  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
    // Qt Connects: Implement all signal connects here
    connect(this, QOverload<int>::of(&QButtonGroup::buttonClicked),
            [=](int id) {
              Napi::Env env = this->emitOnNode.Env();
              Napi::HandleScope scope(env);
              this->emitOnNode.Call({Napi::String::New(env, "buttonClicked"),
                                     Napi::Number::New(env, id)});
            });
  }
};
