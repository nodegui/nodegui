#pragma once
#include <QWidget>

#include "core/FlexLayout/flexitem.h"
#include "nodestyle.h"

/*
    YogaWidget class will be used to extend any regular Qt Widget class to give
   it Yoga Flex powers. Basically if you extend a widget with this class you can
   then set yoga properties like justify content etc via qt stylesheet.
 */

/*
All Widgets for which you need to set yoga props via qstylesheet should
1. inherit from YogaWidget
2. should add Q_OBJECT macro so that Q_PROPERTY inside YogaWidget can work.
3. should call the macro SET_YOGA_WIDGET_Q_PROPERTIES inside them to add all
necessary q_properties.
4. Lastly, since Q_OBJECT is used they should make a call to qt moc.
*/

// For this macro to work use moc like this: moc nlabel.h -o nlabel_moc.cpp
// --include ../../core/YogaWidget/yogawidget.h
#ifndef SET_YOGA_WIDGET_Q_PROPERTIES
#define SET_YOGA_WIDGET_Q_PROPERTIES                                           \
  Q_PROPERTY(QString yDisplay MEMBER _yDisplay WRITE setYDisplay)              \
  Q_PROPERTY(QString yAlignItems MEMBER _yAlignItems WRITE setYAlignItems)     \
  Q_PROPERTY(                                                                  \
      QString yAlignContent MEMBER _yAlignContent WRITE setYAlignContent)      \
  Q_PROPERTY(QString yAlignSelf MEMBER _yAlignSelf WRITE setYAlignSelf)        \
  Q_PROPERTY(QString yJustifyContent MEMBER _yJustifyContent WRITE             \
                 setYJustifyContent)                                           \
  Q_PROPERTY(QString yDirection MEMBER _yDirection WRITE setYDirection)        \
  Q_PROPERTY(                                                                  \
      QString yFlexDirection MEMBER _yFlexDirection WRITE setYFlexDirection)   \
  Q_PROPERTY(QString yOverflow MEMBER _yOverflow WRITE setYOverflow)           \
  Q_PROPERTY(QString yPosition MEMBER _yPosition WRITE setYPosition)           \
  Q_PROPERTY(QString yFlexWrap MEMBER _yFlexWrap WRITE setYFlexWrap)           \
  Q_PROPERTY(float yFlex MEMBER _yFlex WRITE setYFlex)                         \
  Q_PROPERTY(float yFlexGrow MEMBER _yFlexGrow WRITE setYFlexGrow)             \
  Q_PROPERTY(float yFlexShrink MEMBER _yFlexShrink WRITE setYFlexShrink)       \
  Q_PROPERTY(float yAspectRatio MEMBER _yAspectRatio WRITE setYAspectRatio)    \
  Q_PROPERTY(QString yTop MEMBER _yTop WRITE setYNodeTop)                      \
  Q_PROPERTY(QString yRight MEMBER _yRight WRITE setYNodeRight)                \
  Q_PROPERTY(QString yBottom MEMBER _yBottom WRITE setYNodeBottom)             \
  Q_PROPERTY(QString yLeft MEMBER _yLeft WRITE setYNodeLeft)                   \
  Q_PROPERTY(QString yFlexBasis MEMBER _yFlexBasis WRITE setYFlexBasis)        \
  Q_PROPERTY(QString yMinWidth MEMBER _yMinWidth WRITE setYMinWidth)           \
  Q_PROPERTY(QString yMinHeight MEMBER _yMinHeight WRITE setYMinHeight)        \
  Q_PROPERTY(QString yWidth MEMBER _yWidth WRITE setYWidth)                    \
  Q_PROPERTY(QString yHeight MEMBER _yHeight WRITE setYHeight)                 \
  Q_PROPERTY(QString yMaxWidth MEMBER _yMaxWidth WRITE setYMaxWidth)           \
  Q_PROPERTY(QString yMaxHeight MEMBER _yMaxHeight WRITE setYMaxHeight)        \
  Q_PROPERTY(QString yPaddingTop MEMBER _yPaddingTop WRITE setYPaddingTop)     \
  Q_PROPERTY(                                                                  \
      QString yPaddingRight MEMBER _yPaddingRight WRITE setYPaddingRight)      \
  Q_PROPERTY(                                                                  \
      QString yPaddingBottom MEMBER _yPaddingBottom WRITE setYPaddingBottom)   \
  Q_PROPERTY(QString yPaddingLeft MEMBER _yPaddingLeft WRITE setYPaddingLeft)  \
  Q_PROPERTY(QString yPaddingHorizontal MEMBER _yPaddingHorizontal WRITE       \
                 setYPaddingHorizontal)                                        \
  Q_PROPERTY(QString yPaddingVertical MEMBER _yPaddingVertical WRITE           \
                 setYPaddingVertical)                                          \
  Q_PROPERTY(QString yPadding MEMBER _yPadding WRITE setYPadding)              \
  Q_PROPERTY(QString yMarginTop MEMBER _yMarginTop WRITE setYMarginTop)        \
  Q_PROPERTY(QString yMarginRight MEMBER _yMarginRight WRITE setYMarginRight)  \
  Q_PROPERTY(                                                                  \
      QString yMarginBottom MEMBER _yMarginBottom WRITE setYMarginBottom)      \
  Q_PROPERTY(QString yMarginLeft MEMBER _yMarginLeft WRITE setYMarginLeft)     \
  Q_PROPERTY(QString yMarginHorizontal MEMBER _yMarginHorizontal WRITE         \
                 setYMarginHorizontal)                                         \
  Q_PROPERTY(QString yMarginVertical MEMBER _yMarginVertical WRITE             \
                 setYMarginVertical)                                           \
  Q_PROPERTY(QString yMargin MEMBER _yMargin WRITE setYMarginAll)              \
  Q_PROPERTY(float yBorderTop MEMBER _yBorderTop WRITE setYBorderTop)          \
  Q_PROPERTY(float yBorderRight MEMBER _yBorderRight WRITE setYBorderRight)    \
  Q_PROPERTY(float yBorderBottom MEMBER _yBorderBottom WRITE setYBorderBottom) \
  Q_PROPERTY(float yBorderLeft MEMBER _yBorderLeft WRITE setYBorderLeft)       \
  Q_PROPERTY(float yBorderHorizontal MEMBER _yBorderHorizontal WRITE           \
                 setYBorderHorizontal)                                         \
  Q_PROPERTY(                                                                  \
      float yBorderVertical MEMBER _yBorderVertical WRITE setYBorderVertical)  \
  Q_PROPERTY(float yBorder MEMBER _yBorder WRITE setYBorder)

#endif

class YogaWidget : public FlexItem {
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
