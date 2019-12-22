#pragma once

#include <QOpenGLWidget>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NOpenGLWidget : public QOpenGLWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QOpenGLWidget)

 public:
  using QOpenGLWidget::QOpenGLWidget;  // inherit all constructors of
                                       // QOpenGLWidget

  void connectSignalsToEventEmitter() {}
};
