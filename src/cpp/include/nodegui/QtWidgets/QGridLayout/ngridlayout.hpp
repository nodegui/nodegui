#pragma once
#include <QGridLayout>

#include "core/Events/eventwidget_macro.h"

class NGridLayout : public QGridLayout, public EventWidget {
 public:
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(NGridLayout)
  using QGridLayout::QGridLayout;
};
