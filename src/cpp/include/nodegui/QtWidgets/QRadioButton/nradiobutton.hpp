#pragma once

#include <QRadioButton>

#include "core/NodeWidget/nodewidget.h"

class NRadioButton : public QRadioButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QRadioButton)
 public:
  using QRadioButton::QRadioButton;  // inherit all constructors of QRadioButton
};
