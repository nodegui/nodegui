#pragma once
#include <QObject>

#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class NObject : public QObject, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QObject)
 public:
  using QObject::QObject;
};
