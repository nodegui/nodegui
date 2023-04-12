#pragma once

#include <QSplitter>

#include "Extras/Export/export.h"
#include "QtWidgets/QSplitter/qsplitter_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NSplitter : public QSplitter, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSplitter)
 public:
  using QSplitter::QSplitter;

  virtual void connectSignalsToEventEmitter() { QSPLITTER_SIGNALS }
};
