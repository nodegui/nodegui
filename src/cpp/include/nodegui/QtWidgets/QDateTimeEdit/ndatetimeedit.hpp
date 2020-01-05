#pragma once

#include <QDateTimeEdit>

#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NDateTimeEdit : public QDateTimeEdit, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDateTimeEdit)
 public:
  // inherit all constructors of QDateTimeEdit
  using QDateTimeEdit::QDateTimeEdit;

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QDATETIMEEDIT_SIGNALS
  }
};
