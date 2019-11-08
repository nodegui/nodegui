#pragma once

#include <QLabel>

#include "core/NodeWidget/nodewidget.h"

class NLabel : public QLabel, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QLabel)
 public:
  using QLabel::QLabel;  // inherit all constructors of QLabel
};
