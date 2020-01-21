#pragma once
#include "Extras/Utils/nutils.h"

#include <QDialog>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NDialog : public QDialog, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDialog)
 public:
  using QDialog::QDialog;

  void connectSignalsToEventEmitter() { QDIALOG_SIGNALS }
};
