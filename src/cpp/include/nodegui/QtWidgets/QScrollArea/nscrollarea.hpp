#pragma once

#include <QScrollArea>

#include "core/NodeWidget/nodewidget.h"

class NScrollArea : public QScrollArea, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QScrollArea)
 public:
  using QScrollArea::QScrollArea;  // inherit all constructors of QScrollArea
};
