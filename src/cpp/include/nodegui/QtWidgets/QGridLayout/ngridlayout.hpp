#pragma once
#include <QGridLayout>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QLayout/qlayout_macro.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NGridLayout : public QGridLayout, public EventWidget {
  Q_OBJECT
 public:
  EVENTWIDGET_IMPLEMENTATIONS(QGridLayout)
  using QGridLayout::QGridLayout;
  void connectSignalsToEventEmitter() { QLAYOUT_SIGNALS }
};
