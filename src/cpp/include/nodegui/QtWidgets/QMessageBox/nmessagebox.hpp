#pragma once

#include <QMessageBox>

#include "QtWidgets/QPushButton/qpushbutton_wrap.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NMessageBox : public QMessageBox, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMessageBox)
  using QMessageBox::QMessageBox;

  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};
