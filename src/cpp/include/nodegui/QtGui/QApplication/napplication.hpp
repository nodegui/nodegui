#pragma once
#include <QApplication>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "napi.h"

class DLL_EXPORT NApplication : public QApplication, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QApplication)
 public:
  using QApplication::QApplication;  // inherit all constructors of QApplication
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS
  }
};
