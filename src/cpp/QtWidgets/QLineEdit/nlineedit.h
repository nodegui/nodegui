#pragma once

#include <QWidget>
#include <QLineEdit>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"

class NLineEdit: public QLineEdit, public YogaWidget, public EventWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QLineEdit::QLineEdit; //inherit all constructors of QLineEdit
    Q_OBJECT
};


