#pragma once

#include <nodegui/core/NodeWidget/nodewidget.h>

#include <QMenu>

class NMenu : public QMenu, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMenu)
 public:
  using QMenu::QMenu;  // inherit all constructors of QMenu
};
