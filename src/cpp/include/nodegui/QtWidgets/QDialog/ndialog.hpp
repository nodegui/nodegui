#pragma once

#include <QDialog>
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"

class NDialog : public QDialog, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDialog)
 public:
  using QDialog::QDialog;

  void connectSignalsToEventEmitter() { QDIALOG_SIGNALS }
};
