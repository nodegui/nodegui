#pragma once
#include <QBoxLayout>

#include "core/Events/eventwidget_macro.h"

class NBoxLayout : public QBoxLayout, public EventWidget {
 public:
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QBoxLayout)
  using QBoxLayout::QBoxLayout;
};
