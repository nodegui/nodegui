#pragma once
#include <QBoxLayout>

#include "QtWidgets/QLayout/qlayout_macro.h"
#include "core/Events/eventwidget_macro.h"

class NBoxLayout : public QBoxLayout, public EventWidget {
  Q_OBJECT
 public:
  EVENTWIDGET_IMPLEMENTATIONS(QBoxLayout)
  using QBoxLayout::QBoxLayout;
  void connectSignalsToEventEmitter() { QLAYOUT_SIGNALS }
};
