#pragma once

#include <QWidget>
#include <QMainWindow>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"
#include "deps/spdlog/spdlog.h"
#include <QEvent>

class NMainWindow: public QMainWindow, public YogaWidget, public EventWidget
{

private:
    void calculateLayout(){
        YGDirection direction = YGNodeStyleGetDirection(this->getFlexNode());
        YGNodeCalculateLayout(this->getFlexNode(),width(),height(),direction);
    }
    bool eventFilter(QObject *object, QEvent *event) { // This will be installed on mainwidgetwrap
        switch(event->type()) {
            case QEvent::LayoutRequest:
            case QEvent::ChildRemoved: {
                calculateLayout(); break;
            }
            default: ; // do nothing
        }
        return false;
    }
    void resizeEvent(QResizeEvent * event){
        calculateLayout();
    }
public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QMainWindow::QMainWindow; //inherit all constructors of QMainWindow
    Q_OBJECT
};


