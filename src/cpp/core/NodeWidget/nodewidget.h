#pragma once
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"

// class to unify all the custom features + add extra features if needed
class NodeWidget : public YogaWidget, public EventWidget {

};



#ifndef NODEWIDGET_IMPLEMENTATIONS
#define NODEWIDGET_IMPLEMENTATIONS \
\
Q_OBJECT \
public: \
    SET_YOGA_WIDGET_Q_PROPERTIES \
    bool event(QEvent* event) {  \
        EventWidget::event(event); \
        return QWidget::event(event); \
    } \

#endif //NODEWIDGET_IMPLEMENTATIONS

    