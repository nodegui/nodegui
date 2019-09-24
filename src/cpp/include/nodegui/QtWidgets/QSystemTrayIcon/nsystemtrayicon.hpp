#pragma once

#include <QSystemTrayIcon>
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NSystemTrayIcon: public QSystemTrayIcon, public NodeWidget
{
    Q_OBJECT
    NODEWIDGET_IMPLEMENTATIONS(QSystemTrayIcon)
public:
    using QSystemTrayIcon::QSystemTrayIcon; //inherit all constructors of QSystemTrayIcon
    void connectWidgetSignalsToEventEmitter() {
    }
};


