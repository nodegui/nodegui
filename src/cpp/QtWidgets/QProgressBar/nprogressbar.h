#pragma once

#include <QWidget>
#include <QProgressBar>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"

class NProgressBar: public QProgressBar, public YogaWidget, public EventWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QProgressBar::QProgressBar; //inherit all constructors of QProgressBar
    Q_OBJECT
};


