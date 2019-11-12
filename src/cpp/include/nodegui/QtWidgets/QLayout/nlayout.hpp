#pragma once
#include <QLayout>

#include "core/Events/eventwidget_macro.h"

class NLayout : public QLayout, public EventWidget {
 public:
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(NLayout)
  using QLayout::QLayout;
};
