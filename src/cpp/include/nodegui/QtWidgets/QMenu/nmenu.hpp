#pragma once
#include "Extras/Utils/nutils.h"

#include <nodegui/core/NodeWidget/nodewidget.h>

#include <QMenu>

#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT NMenu : public QMenu, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMenu)
 public:
  using QMenu::QMenu;  // inherit all constructors of QMenu
  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};
