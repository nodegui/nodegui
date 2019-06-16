#pragma once

#include <QLineEdit>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NLineEdit: public QLineEdit, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS
public:
    using QLineEdit::QLineEdit; //inherit all constructors of QLineEdit
};


