#pragma once

#include <QRadioButton>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NRadioButton: public QRadioButton, public NodeWidget
{   
    NODEWIDGET_IMPLEMENTATIONS(QRadioButton)
public:
    using QRadioButton::QRadioButton; //inherit all constructors of QRadioButton
};


