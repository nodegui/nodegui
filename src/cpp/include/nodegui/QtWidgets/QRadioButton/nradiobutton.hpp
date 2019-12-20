#pragma once

#include <QRadioButton>

#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class NRadioButton : public QRadioButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QRadioButton)
 public:
  using QRadioButton::QRadioButton;  // inherit all constructors of QRadioButton
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACT_BUTTON_SIGNALS
  }
};
