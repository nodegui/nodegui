#pragma once
#include <QWidget>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"

class NWidget: public QWidget, public YogaWidget, public EventWidget
{

public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QWidget::QWidget; //inherit all constructors of QWidget
    // https://doc.qt.io/qt-5/stylesheet-reference.html
    void paintEvent(QPaintEvent *)
    {
        QStyleOption opt;
        opt.init(this);
        QPainter p(this);
        style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    }
    Q_OBJECT
};


