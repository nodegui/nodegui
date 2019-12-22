#pragma once

#include <QScrollArea>

#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "core/NodeWidget/nodewidget.h"

class NScrollArea : public QScrollArea, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QScrollArea)
 public:
  using QScrollArea::QScrollArea;  // inherit all constructors of QScrollArea
  void connectSignalsToEventEmitter() { QABSTRACTSCROLLAREA_SIGNALS }
};
