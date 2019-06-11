#pragma once

#include <QWidget>
#include <QMainWindow>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "deps/spdlog/spdlog.h"
#include <QEvent>

class NMainWindow: public QMainWindow, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QMainWindow::QMainWindow; //inherit all constructors of QMainWindow
    
    void calculateLayout(){
        YGDirection direction = YGNodeStyleGetDirection(this->getFlexNode());
        YGNodeCalculateLayout(this->getFlexNode(),width(),height(),direction);
    }

    Q_OBJECT
public:
    bool eventFilter(QObject *object, QEvent *event)
    {
        if (event->type() == QEvent::LayoutRequest || event->type() == QEvent::ChildRemoved) {
            calculateLayout();  
        }
        return false;
    }
    void resizeEvent(QResizeEvent * event){
        calculateLayout();
    }
    
};


