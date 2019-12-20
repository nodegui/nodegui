#pragma once

#include <QCheckBox>

#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NCheckBox : public QCheckBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QCheckBox)
 public:
  using QCheckBox::QCheckBox;  // inherit all constructors of QCheckBox

  void connectSignalsToEventEmitter() { QABSTRACT_BUTTON_SIGNALS }
};
