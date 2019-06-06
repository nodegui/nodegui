#pragma once

#include <QWidget>
#include <QLabel>
#include "src/cpp/core/YogaWidget/yogawidget.h"

class NLabel: public QLabel, public YogaWidget
{

public:
    // SET_YOGA_WIDGET_Q_PROPERTIES

    Q_PROPERTY(QString display MEMBER _yDisplay WRITE setYDisplay) 
    Q_PROPERTY(QString alignItems MEMBER _yAlignItems WRITE setYAlignItems) 
    Q_PROPERTY(QString alignContent MEMBER _yAlignContent WRITE setYAlignContent) 
    Q_PROPERTY(QString alignSelf MEMBER _yAlignSelf WRITE setYAlignSelf) 
    Q_PROPERTY(QString justifyContent MEMBER _yJustifyContent WRITE setYJustifyContent) 
    Q_PROPERTY(QString direction MEMBER _yDirection WRITE setYDirection) 
    Q_PROPERTY(QString flexDirection MEMBER _yFlexDirection WRITE setYFlexDirection) 
    Q_PROPERTY(QString overflow MEMBER _yOverflow WRITE setYOverflow) 
    Q_PROPERTY(QString position MEMBER _yPosition WRITE setYPosition) 
    Q_PROPERTY(QString flexWrap MEMBER _yFlexWrap WRITE setYFlexWrap) 
    Q_PROPERTY(float flex MEMBER _yFlex WRITE setYFlex) 
    Q_PROPERTY(float flexGrow MEMBER _yFlexGrow WRITE setYFlexGrow) 
    Q_PROPERTY(float flexShrink MEMBER _yFlexShrink WRITE setYFlexShrink) 
    Q_PROPERTY(float aspectRatio MEMBER _yAspectRatio WRITE setYAspectRatio) 
    Q_PROPERTY(QString top MEMBER _yTop WRITE setYNodeTop) 
    Q_PROPERTY(QString right MEMBER _yRight WRITE setYNodeRight) 
    Q_PROPERTY(QString bottom MEMBER _yBottom WRITE setYNodeBottom) 
    Q_PROPERTY(QString left MEMBER _yLeft WRITE setYNodeLeft) 
    Q_PROPERTY(QString flexBasis MEMBER _yFlexBasis WRITE setYFlexBasis) 
    Q_PROPERTY(QString minWidth MEMBER _yMinWidth WRITE setYMinWidth) 
    Q_PROPERTY(QString minHeight MEMBER _yMinHeight WRITE setYMinHeight) 
    Q_PROPERTY(QString maxWidth MEMBER _yMaxWidth WRITE setYMaxWidth) 
    Q_PROPERTY(QString maxHeight MEMBER _yMaxHeight WRITE setYMaxHeight) 
    Q_PROPERTY(QString paddingTop MEMBER _yPaddingTop WRITE setYPaddingTop) 
    Q_PROPERTY(QString paddingRight MEMBER _yPaddingRight WRITE setYPaddingRight) 
    Q_PROPERTY(QString paddingBottom MEMBER _yPaddingBottom WRITE setYPaddingBottom) 
    Q_PROPERTY(QString paddingLeft MEMBER _yPaddingLeft WRITE setYPaddingLeft) 
    Q_PROPERTY(QString paddingHorizontal MEMBER _yPaddingHorizontal WRITE setYPaddingHorizontal) 
    Q_PROPERTY(QString paddingVertical MEMBER _yPaddingVertical WRITE setYPaddingVertical) 
    Q_PROPERTY(QString padding MEMBER _yPadding WRITE setYPadding) 
    Q_PROPERTY(QString marginTop MEMBER _yMarginTop WRITE setYMarginTop) 
    Q_PROPERTY(QString marginRight MEMBER _yMarginRight WRITE setYMarginRight) 
    Q_PROPERTY(QString marginBottom MEMBER _yMarginBottom WRITE setYMarginBottom) 
    Q_PROPERTY(QString marginLeft MEMBER _yMarginLeft WRITE setYMarginLeft) 
    Q_PROPERTY(QString marginHorizontal MEMBER _yMarginHorizontal WRITE setYMarginHorizontal) 
    Q_PROPERTY(QString marginVertical MEMBER _yMarginVertical WRITE setYMarginVertical) 
    Q_PROPERTY(QString margin MEMBER _yMargin WRITE setYMarginAll) 
    Q_PROPERTY(float borderTop MEMBER _yBorderTop WRITE setYBorderTop) 
    Q_PROPERTY(float borderRight MEMBER _yBorderRight WRITE setYBorderRight) 
    Q_PROPERTY(float borderBottom MEMBER _yBorderBottom WRITE setYBorderBottom) 
    Q_PROPERTY(float borderLeft MEMBER _yBorderLeft WRITE setYBorderLeft) 
    Q_PROPERTY(float borderHorizontal MEMBER _yBorderHorizontal WRITE setYBorderHorizontal) 
    Q_PROPERTY(float borderVertical MEMBER _yBorderVertical WRITE setYBorderVertical) 
    Q_PROPERTY(float border MEMBER _yBorder WRITE setYBorder)

    using QLabel::QLabel; //inherit all constructors of QLabel
    
    Q_OBJECT
};


