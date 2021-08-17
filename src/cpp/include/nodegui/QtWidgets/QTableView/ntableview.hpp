#pragma once

#include <QTableView>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTableView/qtableview_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NTableView : public QTableView, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTableView)
 public:
  using QTableView::QTableView;

  virtual void connectSignalsToEventEmitter() { QTABLEVIEW_SIGNALS }
};
