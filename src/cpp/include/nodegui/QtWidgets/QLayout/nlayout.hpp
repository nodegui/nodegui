#pragma once
#include <QLayout>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QLayout/qlayout_macro.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NLayout : public QLayout, public EventWidget {
  Q_OBJECT
 public:
  EVENTWIDGET_IMPLEMENTATIONS(QLayout)
  using QLayout::QLayout;
  void connectSignalsToEventEmitter() { QLAYOUT_SIGNALS }
};
