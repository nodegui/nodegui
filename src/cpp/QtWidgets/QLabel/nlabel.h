#pragma once

#include <QWidget>
#include <QLabel>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NLabel: public QLabel, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QLabel::QLabel; //inherit all constructors of QLabel
    Q_OBJECT
};


