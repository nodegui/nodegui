#pragma once
#include <QWidget>
#include <QWidget>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"

class NWidget: public QWidget, public YogaWidget, public EventWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QWidget::QWidget; //inherit all constructors of QWidget
    Q_OBJECT
};


