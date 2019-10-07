#pragma once

#include <QMenuBar>
#include <nodegui/core/NodeWidget/nodewidget.h>

class NMenuBar: public QMenuBar, public NodeWidget
{
    Q_OBJECT
    NODEWIDGET_IMPLEMENTATIONS(QMenuBar)
public:
    using QMenuBar::QMenuBar; //inherit all constructors of QMenuBar
};


