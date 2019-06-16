#pragma once

#include <QCheckBox>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NCheckBox: public QCheckBox, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS
public:
    using QCheckBox::QCheckBox; //inherit all constructors of QCheckBox
};


