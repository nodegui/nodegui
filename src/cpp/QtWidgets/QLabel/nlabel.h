#ifndef N_LABEL_H
#define N_LABEL_H
#include <QWidget>
#include <QLabel>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NLabel: public QLabel, public YogaWidget
{

public:
    using QLabel::QLabel; //inherit all constructors of QLabel
    SET_YOGA_WIDGET_Q_PROPERTIES
    Q_OBJECT
};


#endif // N_LABEL_H
