#pragma once

#include <QPushButton>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NPushButton : public QPushButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QPushButton)
 public:
  using QPushButton::QPushButton;  // inherit all constructors of QPushButton

  void connectSignalsToEventEmitter() { QABSTRACT_BUTTON_SIGNALS }
};
