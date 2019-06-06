#pragma once
#include <QWidget>
#include <QWidget>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NWidget: public QWidget, public YogaWidget
{

public:
    using QWidget::QWidget; //inherit all constructors of QWidget
    SET_YOGA_WIDGET_Q_PROPERTIES
    Q_OBJECT
};


