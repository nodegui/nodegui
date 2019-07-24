#pragma once
#include <QWidget>
#include <QDebug>
#include "nodestyle.h"
#include "src/cpp/core/FlexLayout/flexitem.h"

/*
    YogaWidget class will be used to extend any regular Qt Widget class to give it Yoga Flex powers.
    Basically if you extend a widget with this class you can then set yoga properties like justify content etc via qt stylesheet.
 */

/*
All Widgets for which you need to set yoga props via qstylesheet should 
1. inherit from YogaWidget 
2. should add Q_OBJECT macro so that Q_PROPERTY inside YogaWidget can work.
3. should call the macro SET_YOGA_WIDGET_Q_PROPERTIES inside them to add all necessary q_properties.
4. Lastly, since Q_OBJECT is used they should make a call to qt moc.
*/


// For this macro to work use moc like this: moc nlabel.h -o nlabel_moc.cpp --include ../../core/YogaWidget/yogawidget.h
#ifndef SET_YOGA_WIDGET_Q_PROPERTIES
#define SET_YOGA_WIDGET_Q_PROPERTIES \
    Q_PROPERTY(QString display MEMBER _yDisplay WRITE setYDisplay) \
    Q_PROPERTY(QString alignItems MEMBER _yAlignItems WRITE setYAlignItems) \
    Q_PROPERTY(QString alignContent MEMBER _yAlignContent WRITE setYAlignContent) \
    Q_PROPERTY(QString alignSelf MEMBER _yAlignSelf WRITE setYAlignSelf) \
    Q_PROPERTY(QString justifyContent MEMBER _yJustifyContent WRITE setYJustifyContent) \
    Q_PROPERTY(QString direction MEMBER _yDirection WRITE setYDirection) \
    Q_PROPERTY(QString flexDirection MEMBER _yFlexDirection WRITE setYFlexDirection) \
    Q_PROPERTY(QString overflow MEMBER _yOverflow WRITE setYOverflow) \
    Q_PROPERTY(QString position MEMBER _yPosition WRITE setYPosition) \
    Q_PROPERTY(QString flexWrap MEMBER _yFlexWrap WRITE setYFlexWrap) \
    Q_PROPERTY(float flex MEMBER _yFlex WRITE setYFlex) \
    Q_PROPERTY(float flexGrow MEMBER _yFlexGrow WRITE setYFlexGrow) \
    Q_PROPERTY(float flexShrink MEMBER _yFlexShrink WRITE setYFlexShrink) \
    Q_PROPERTY(float aspectRatio MEMBER _yAspectRatio WRITE setYAspectRatio) \
    Q_PROPERTY(QString top MEMBER _yTop WRITE setYNodeTop) \
    Q_PROPERTY(QString right MEMBER _yRight WRITE setYNodeRight) \
    Q_PROPERTY(QString bottom MEMBER _yBottom WRITE setYNodeBottom) \
    Q_PROPERTY(QString left MEMBER _yLeft WRITE setYNodeLeft) \
    Q_PROPERTY(QString flexBasis MEMBER _yFlexBasis WRITE setYFlexBasis) \
    Q_PROPERTY(QString minWidth MEMBER _yMinWidth WRITE setYMinWidth) \
    Q_PROPERTY(QString minHeight MEMBER _yMinHeight WRITE setYMinHeight) \
    Q_PROPERTY(QString qWidth MEMBER _yWidth WRITE setYWidth) \
    Q_PROPERTY(QString qHeight MEMBER _yHeight WRITE setYHeight) \
    Q_PROPERTY(QString maxWidth MEMBER _yMaxWidth WRITE setYMaxWidth) \
    Q_PROPERTY(QString maxHeight MEMBER _yMaxHeight WRITE setYMaxHeight) \
    Q_PROPERTY(QString paddingTop MEMBER _yPaddingTop WRITE setYPaddingTop) \
    Q_PROPERTY(QString paddingRight MEMBER _yPaddingRight WRITE setYPaddingRight) \
    Q_PROPERTY(QString paddingBottom MEMBER _yPaddingBottom WRITE setYPaddingBottom) \
    Q_PROPERTY(QString paddingLeft MEMBER _yPaddingLeft WRITE setYPaddingLeft) \
    Q_PROPERTY(QString paddingHorizontal MEMBER _yPaddingHorizontal WRITE setYPaddingHorizontal) \
    Q_PROPERTY(QString paddingVertical MEMBER _yPaddingVertical WRITE setYPaddingVertical) \
    Q_PROPERTY(QString padding MEMBER _yPadding WRITE setYPadding) \
    Q_PROPERTY(QString marginTop MEMBER _yMarginTop WRITE setYMarginTop) \
    Q_PROPERTY(QString marginRight MEMBER _yMarginRight WRITE setYMarginRight) \
    Q_PROPERTY(QString marginBottom MEMBER _yMarginBottom WRITE setYMarginBottom) \
    Q_PROPERTY(QString marginLeft MEMBER _yMarginLeft WRITE setYMarginLeft) \
    Q_PROPERTY(QString marginHorizontal MEMBER _yMarginHorizontal WRITE setYMarginHorizontal) \
    Q_PROPERTY(QString marginVertical MEMBER _yMarginVertical WRITE setYMarginVertical) \
    Q_PROPERTY(QString margin MEMBER _yMargin WRITE setYMarginAll) \
    Q_PROPERTY(float borderTop MEMBER _yBorderTop WRITE setYBorderTop) \
    Q_PROPERTY(float borderRight MEMBER _yBorderRight WRITE setYBorderRight) \
    Q_PROPERTY(float borderBottom MEMBER _yBorderBottom WRITE setYBorderBottom) \
    Q_PROPERTY(float borderLeft MEMBER _yBorderLeft WRITE setYBorderLeft) \
    Q_PROPERTY(float borderHorizontal MEMBER _yBorderHorizontal WRITE setYBorderHorizontal) \
    Q_PROPERTY(float borderVertical MEMBER _yBorderVertical WRITE setYBorderVertical) \
    Q_PROPERTY(float border MEMBER _yBorder WRITE setYBorder)\

#endif


class YogaWidget: public FlexItem
{
public:
    QString _yDisplay;
    QString _yAlignItems;
    QString _yAlignContent;
    QString _yAlignSelf;
    QString _yJustifyContent;
    QString _yDirection;
    QString _yFlexDirection;
    QString _yOverflow;
    QString _yPosition;
    QString _yFlexWrap;
    float _yFlex;
    float _yFlexGrow;
    float _yFlexShrink;
    float _yAspectRatio;
    QString _yTop;
    QString _yRight;
    QString _yBottom;
    QString _yLeft;
    QString _yFlexBasis;
    QString _yMinWidth;
    QString _yMinHeight;
    QString _yMaxWidth;
    QString _yMaxHeight;
    QString _yWidth;
    QString _yHeight;
    QString _yPaddingTop;
    QString _yPaddingRight;
    QString _yPaddingBottom;
    QString _yPaddingLeft;
    QString _yPaddingHorizontal;
    QString _yPaddingVertical;
    QString _yPadding;
    QString _yMarginTop;
    QString _yMarginRight;
    QString _yMarginBottom;
    QString _yMarginLeft;
    QString _yMarginHorizontal;
    QString _yMarginVertical;
    QString _yMargin;
    float _yBorderTop;
    float _yBorderRight;
    float _yBorderBottom;
    float _yBorderLeft;
    float _yBorderHorizontal;
    float _yBorderVertical;
    float _yBorder;

    void setYDisplay(QString display);
    void setYAlignItems(QString alignItems);
    void setYAlignContent(QString alignContent);
    void setYAlignSelf(QString alignSelf);
    void setYJustifyContent(QString justifyContent);
    void setYDirection(QString direction);
    void setYFlexDirection(QString flexDirection);
    void setYOverflow(QString overflow);
    void setYPosition(QString position);
    void setYFlexWrap(QString flexWrap);
    void setYFlex(float flex);
    void setYFlexGrow(float flexGrow);
    void setYFlexShrink(float flexShrink);
    void setYAspectRatio(float aspectRatio);
    void setYNodeTop(QString rawValue);
    void setYNodeRight(QString rawValue);
    void setYNodeBottom(QString rawValue);
    void setYNodeLeft(QString rawValue);
    void setYFlexBasis(QString rawValue);
    void setYMinWidth(QString rawValue);
    void setYMinHeight(QString rawValue);
    void setYWidth(QString rawValue);
    void setYHeight(QString rawValue);
    void setYMaxWidth(QString rawValue);
    void setYMaxHeight(QString rawValue);
    void setYPaddingTop(QString rawValue);
    void setYPaddingRight(QString rawValue);
    void setYPaddingBottom(QString rawValue);
    void setYPaddingLeft(QString rawValue);
    void setYPaddingHorizontal(QString rawValue);
    void setYPaddingVertical(QString rawValue);
    void setYPadding(QString rawValue);
    void setYMarginTop(QString rawValue);
    void setYMarginRight(QString rawValue);
    void setYMarginBottom(QString rawValue);
    void setYMarginLeft(QString rawValue);
    void setYMarginHorizontal(QString rawValue);
    void setYMarginVertical(QString rawValue);
    void setYMarginAll(QString rawValue);
    void setYBorderTop(float rawValue);
    void setYBorderRight(float rawValue);
    void setYBorderBottom(float rawValue);
    void setYBorderLeft(float rawValue);
    void setYBorderHorizontal(float rawValue);
    void setYBorderVertical(float rawValue);
    void setYBorder(float rawValue);
};


