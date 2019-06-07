#pragma once

#include <QWidget>
#include <QCheckBox>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NCheckBox: public QCheckBox, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QCheckBox::QCheckBox; //inherit all constructors of QCheckBox
    Q_OBJECT
};


