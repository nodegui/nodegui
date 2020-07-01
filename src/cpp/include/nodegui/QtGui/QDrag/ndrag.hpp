#pragma once
#include <QDrag>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NDrag : public QDrag, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QDrag)
 public:
  using QDrag::QDrag;

  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
    QObject::connect(this, &QDrag::actionChanged,
                     [=](Qt::DropAction action) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "actionChanged"),
                            Napi::Number::From(env, static_cast<int>(action))});
                     });
  }
};
