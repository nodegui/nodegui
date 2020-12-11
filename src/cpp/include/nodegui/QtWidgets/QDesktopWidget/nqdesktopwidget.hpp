#pragma once

#include <QApplication>
#include <QDesktopWidget>

#include "core/NodeWidget/nodewidget.h"

class NQDesktopWidget : public QDesktopWidget, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDesktopWidget)
 public:
  using QDesktopWidget::QDesktopWidget;  // inherit all constructors of
                                         // QStatusBar
};
