#pragma once

#include <QHeaderView>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NHeaderView : public QHeaderView, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QHeaderView)
 public:
  using QHeaderView::QHeaderView;

  void connectSignalsToEventEmitter() { QABSTRACTITEMVIEW_SIGNALS }
};
