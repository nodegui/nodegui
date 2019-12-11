#pragma once

#include <QTableWidget>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NTableWidget : public QTableWidget, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTableWidget)
  using QTableWidget::QTableWidget;
};
