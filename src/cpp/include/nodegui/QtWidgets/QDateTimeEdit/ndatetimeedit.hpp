#pragma once
#include <napi.h>

#include <QDateTimeEdit>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NDateTimeEdit : public QDateTimeEdit, public NodeWidget {
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
