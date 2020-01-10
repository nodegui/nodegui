#pragma once

#include <QTimeEdit>

#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NTimeEdit : public QTimeEdit, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTimeEdit)
 public:
  // inherit all constructors of QTimeEdit
  using QTimeEdit::QTimeEdit;

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QDATETIMEEDIT_SIGNALS
  }
};