#pragma once
#include <QPainter>
#include <QStyle>
#include <QStyleOption>
#include <QWidget>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NWidget : public QWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QWidget)
 public:
  using QWidget::QWidget;
  // https://doc.qt.io/qt-5/stylesheet-reference.html
  void paintEvent(QPaintEvent* e) override {
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(e);
  }

  void connectSignalsToEventEmitter() { QWIDGET_SIGNALS }
};
