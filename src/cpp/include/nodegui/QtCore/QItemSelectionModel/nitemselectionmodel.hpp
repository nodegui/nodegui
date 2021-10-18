#pragma once
#include <QItemSelectionModel>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NItemSelectionModel : public QItemSelectionModel,
                                       public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QItemSelectionModel)
 public:
  Napi::FunctionReference dispatchOnNode;

  virtual void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS
  }
};
