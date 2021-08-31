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

  virtual void connectSignalsToEventEmitter(){QABSTRACTITEMVIEW_SIGNALS}

  QModelIndex _protected_indexAt(const QPoint &p) const {
    return indexAt(p);
  }

  void _protected_scrollTo(const QModelIndex &index, ScrollHint hint) {
    scrollTo(index, hint);
  }
};
