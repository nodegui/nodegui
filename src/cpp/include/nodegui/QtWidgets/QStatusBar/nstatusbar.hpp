#pragma once

#include <QStatusBar>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NStatusBar : public QStatusBar, public NodeWidget {
  Q_OBJECT

 public:
  NODEWIDGET_IMPLEMENTATIONS(QStatusBar)
  using QStatusBar::QStatusBar;  // inherit all constructors of QStatusBar

  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};