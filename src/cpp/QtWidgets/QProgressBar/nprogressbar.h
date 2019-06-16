#pragma once

#include <QProgressBar>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NProgressBar: public QProgressBar, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS
public:
    using QProgressBar::QProgressBar; //inherit all constructors of QProgressBar
};


