#pragma once

#include <QWidget>
#include <QRadioButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NRadioButton: public QRadioButton, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QRadioButton::QRadioButton; //inherit all constructors of QRadioButton
    Q_OBJECT
};


