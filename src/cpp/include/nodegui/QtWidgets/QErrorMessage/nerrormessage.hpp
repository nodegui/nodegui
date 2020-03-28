#pragma once

#include <QErrorMessage>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NErrorMessage : public QErrorMessage, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QErrorMessage)
 public:
  using QErrorMessage::QErrorMessage;

  void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    // Qt Connects: Implement all signal connects here
  }
};
