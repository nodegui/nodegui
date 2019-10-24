#pragma once

#include <QAction>
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NAction: public QAction, public EventWidget
{
    Q_OBJECT
    EVENTWIDGET_IMPLEMENTATIONS(QAction)
public:
    using QAction::QAction; //inherit all constructors of QAction
    void connectWidgetSignalsToEventEmitter() {
    }
};


