#pragma once
#include <QEvent>
#include <QMainWindow>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NMainWindow : public QMainWindow, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMainWindow)
 public:
  using QMainWindow::QMainWindow;  // inherit all constructors of QMainWindow
  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};
