#pragma once

#include <QMainWindow>
#include "src/cpp/core/NodeWidget/nodewidget.h"
#include <QEvent>

class NMainWindow: public QMainWindow, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS(QMainWindow)
public:
    using QMainWindow::QMainWindow; //inherit all constructors of QMainWindow
};


