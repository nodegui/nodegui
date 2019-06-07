#pragma once

#include <QWidget>
#include <QLineEdit>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NLineEdit: public QLineEdit, public YogaWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QLineEdit::QLineEdit; //inherit all constructors of QLineEdit
    Q_OBJECT
};


