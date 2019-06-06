#pragma once
#include <QWidget>
#include <QWidget>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NWidget: public QWidget, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QWidget::QWidget; //inherit all constructors of QWidget
    Q_OBJECT
};


