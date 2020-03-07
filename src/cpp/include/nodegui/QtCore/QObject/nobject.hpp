#pragma once
#include <QObject>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NObject : public QObject, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QObject)
 public:
  using QObject::QObject;

  void connectSignalsToEventEmitter() { QOBJECT_SIGNALS }
};
