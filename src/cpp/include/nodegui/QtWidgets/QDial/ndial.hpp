#pragma once
#include <QDial>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NDial : public QDial, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QDial)
 public:
  using QDial::QDial;  // inherit all constructors of QDial

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACT_SLIDER_SIGNALS
  }
};
