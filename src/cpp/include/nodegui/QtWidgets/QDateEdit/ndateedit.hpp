#pragma once
#include <QDateEdit>

#include "Extras/Export/export.h"
#include "QtWidgets/QDateTimeEdit/qdatetimeedit_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NDateEdit : public QDateEdit, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDateEdit)
 public:
  // inherit all constructors of QDateEdit
  using QDateEdit::QDateEdit;

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QDATETIMEEDIT_SIGNALS
  }
};
