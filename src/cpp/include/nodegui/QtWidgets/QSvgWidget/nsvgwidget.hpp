#pragma once

#include <QSvgWidget>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NSvgWidget : public QSvgWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSvgWidget)
 public:
  using QSvgWidget::QSvgWidget;  // inherit all constructors of QSvgWidget

  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};
