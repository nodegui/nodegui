#pragma once

#include <QScrollBar>

#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "core/NodeWidget/nodewidget.h"

class NScrollBar : public QScrollBar, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QScrollBar)
 public:
  using QScrollBar::QScrollBar;  // inherit all constructors of QScrollBar

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACT_SLIDER_SIGNALS
  }
};
