#pragma once

#include <QFrame>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QFrame/qframe_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NFrame : public QFrame, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QFrame)
 public:
  using QFrame::QFrame;

  virtual void connectSignalsToEventEmitter() { QFRAME_SIGNALS }
};
