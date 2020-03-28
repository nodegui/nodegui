#pragma once

#include <QListView>

#include "Extras/Export/export.h"
#include "QtWidgets/QListView/qlistview_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NListView : public QListView, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QListView)
 public:
  using QListView::QListView;

  void connectSignalsToEventEmitter() { QLISTVIEW_SIGNALS }
};
