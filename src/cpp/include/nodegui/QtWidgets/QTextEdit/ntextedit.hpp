#pragma once

#include <QTextEdit>

#include "Extras/Export/export.h"
#include "QtWidgets/QTextEdit/qtextedit_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NTextEdit : public QTextEdit, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTextEdit)
 public:
  using QTextEdit::QTextEdit;  // inherit all constructors of QTextEdit

  void connectSignalsToEventEmitter() {
    QTEXTEDIT_SIGNALS
    // Qt Connects: Implement all signal connects here
  }
};
