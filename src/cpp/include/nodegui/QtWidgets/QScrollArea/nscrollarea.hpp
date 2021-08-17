#pragma once

#include <QScrollArea>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NScrollArea : public QScrollArea, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QScrollArea)
 public:
  using QScrollArea::QScrollArea;  // inherit all constructors of QScrollArea

  virtual void connectSignalsToEventEmitter() { QABSTRACTSCROLLAREA_SIGNALS }

  // By-pass `protected` access and expose it.
  void setViewportMargins(int left, int top, int right, int bottom) {
    QScrollArea::setViewportMargins(left, top, right, bottom);
  }
  QMargins viewportMargins() const { return QScrollArea::viewportMargins(); }
};
