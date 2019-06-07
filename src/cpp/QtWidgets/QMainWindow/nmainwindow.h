#pragma once

#include <QWidget>
#include <QMainWindow>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NMainWindow: public QMainWindow, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QMainWindow::QMainWindow; //inherit all constructors of QMainWindow
    Q_OBJECT
};


