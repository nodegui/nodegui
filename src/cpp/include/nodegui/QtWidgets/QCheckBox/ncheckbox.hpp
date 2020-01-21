#pragma once
#include "Extras/Utils/nutils.h"

#include <QCheckBox>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NCheckBox : public QCheckBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QCheckBox)
 public:
  using QCheckBox::QCheckBox;  // inherit all constructors of QCheckBox

  void connectSignalsToEventEmitter() { QABSTRACT_BUTTON_SIGNALS }
};
