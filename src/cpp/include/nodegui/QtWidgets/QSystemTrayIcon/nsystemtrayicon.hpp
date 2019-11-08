#pragma once

#include <QSystemTrayIcon>

#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NSystemTrayIcon : public QSystemTrayIcon, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QSystemTrayIcon)
 public:
  using QSystemTrayIcon::QSystemTrayIcon;  // inherit all constructors of
                                           // QSystemTrayIcon
  void connectWidgetSignalsToEventEmitter() {}
};
