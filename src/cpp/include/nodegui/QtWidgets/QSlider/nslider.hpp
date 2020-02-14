#pragma once
#include <QSlider>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractSlider/qabstractslider_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NSlider : public QSlider, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSlider)
 public:
  using QSlider::QSlider;  // inherit all constructors of QSlider

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACT_SLIDER_SIGNALS
  }
};
