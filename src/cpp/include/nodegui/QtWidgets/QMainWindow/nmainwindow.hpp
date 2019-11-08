#pragma once

#include <QEvent>
#include <QMainWindow>

#include "core/NodeWidget/nodewidget.h"

class NMainWindow : public QMainWindow, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMainWindow)
 public:
  using QMainWindow::QMainWindow;  // inherit all constructors of QMainWindow
};
