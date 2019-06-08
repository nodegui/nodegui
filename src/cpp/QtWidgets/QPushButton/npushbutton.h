#pragma once

#include <QWidget>
#include <QPushButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "napi.h"

class NPushButton: public QPushButton, public YogaWidget
{
public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QPushButton::QPushButton; //inherit all constructors of QPushButton
    Q_OBJECT
};


