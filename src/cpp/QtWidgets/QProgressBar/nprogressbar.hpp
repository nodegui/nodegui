#pragma once

#include <QProgressBar>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NProgressBar: public QProgressBar, public NodeWidget
{
    Q_OBJECT
    NODEWIDGET_IMPLEMENTATIONS(QProgressBar)
public:
    using QProgressBar::QProgressBar; //inherit all constructors of QProgressBar
};


