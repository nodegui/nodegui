#pragma once

#include <QWidget>
#include <QProgressBar>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NProgressBar: public QProgressBar, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QProgressBar::QProgressBar; //inherit all constructors of QProgressBar
    Q_OBJECT
};


