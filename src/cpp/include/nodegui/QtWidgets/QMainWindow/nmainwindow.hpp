#pragma once

#include <QMainWindow>
#include "core/NodeWidget/nodewidget.h"
#include <QEvent>

class NMainWindow: public QMainWindow, public NodeWidget
{
    Q_OBJECT
    NODEWIDGET_IMPLEMENTATIONS(QMainWindow)
public:
    using QMainWindow::QMainWindow; //inherit all constructors of QMainWindow
};


