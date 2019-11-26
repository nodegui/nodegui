#include "core/YogaWidget/yogawidget.h"

#include <QDebug>

void YogaWidget::setYDisplay(QString rawValue) {
  try {
    std::string rawDisplay = rawValue.toStdString();
    int value = NodeStyle::NodeDisplay.at(rawDisplay);
    YGNodeStyleSetDisplay(this->getFlexNode(), static_cast<YGDisplay>(value));
    this->_yDisplay = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: display: " << rawValue;
  }
}
void YogaWidget::setYAlignItems(QString rawValue) {
  try {
    std::string rawAlignItems = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignItems);
    YGNodeStyleSetAlignItems(this->getFlexNode(), static_cast<YGAlign>(value));
    this->_yAlignItems = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: alignItems: " << rawValue;
  }
}
void YogaWidget::setYAlignContent(QString rawValue) {
  try {
    std::string rawAlignContent = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignContent);
    YGNodeStyleSetAlignContent(this->getFlexNode(),
                               static_cast<YGAlign>(value));
    this->_yAlignContent = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: alignContent: " << rawValue;
  }
}
void YogaWidget::setYAlignSelf(QString rawValue) {
  try {
    std::string rawAlignSelf = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignSelf);
    YGNodeStyleSetAlignSelf(this->getFlexNode(), static_cast<YGAlign>(value));
    this->_yAlignSelf = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: alignSelf: " << rawValue;
  }
}
void YogaWidget::setYJustifyContent(QString rawValue) {
  try {
    std::string rawJustifyContent = rawValue.toStdString();
    int value = NodeStyle::NodeJustifyContent.at(rawJustifyContent);
    YGNodeStyleSetJustifyContent(this->getFlexNode(),
                                 static_cast<YGJustify>(value));
    this->_yJustifyContent = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: justifyContent: " << rawValue;
  }
}
void YogaWidget::setYDirection(QString rawValue) {
  try {
    std::string rawDirection = rawValue.toStdString();
    int value = NodeStyle::NodeDirection.at(rawDirection);
    YGNodeStyleSetDirection(this->getFlexNode(),
                            static_cast<YGDirection>(value));
    this->_yDirection = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: direction: " << rawValue;
  }
}
void YogaWidget::setYFlexDirection(QString rawValue) {
  try {
    std::string rawFlexDirection = rawValue.toStdString();
    int value = NodeStyle::NodeFlexDirection.at(rawFlexDirection);
    YGNodeStyleSetFlexDirection(this->getFlexNode(),
                                static_cast<YGFlexDirection>(value));
    this->_yFlexDirection = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flexDirection: " << rawValue;
  }
}
void YogaWidget::setYOverflow(QString rawValue) {
  try {
    std::string rawOverflow = rawValue.toStdString();
    int value = NodeStyle::NodeOverflow.at(rawOverflow);
    YGNodeStyleSetOverflow(this->getFlexNode(), static_cast<YGOverflow>(value));
    this->_yOverflow = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: overflow: " << rawValue;
  }
}
void YogaWidget::setYPosition(QString rawValue) {
  try {
    std::string rawPosition = rawValue.toStdString();
    int value = NodeStyle::NodePosition.at(rawPosition);
    YGNodeStyleSetPositionType(this->getFlexNode(),
                               static_cast<YGPositionType>(value));
    this->_yPosition = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: positionType: " << rawValue;
  }
}
void YogaWidget::setYFlexWrap(QString rawValue) {
  try {
    std::string rawFlexWrap = rawValue.toStdString();
    int value = NodeStyle::NodeWrap.at(rawFlexWrap);
    YGNodeStyleSetFlexWrap(this->getFlexNode(), static_cast<YGWrap>(value));
    this->_yFlexWrap = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flexWrap: " << rawValue;
  }
}
void YogaWidget::setYFlex(float rawValue) {
  try {
    YGNodeStyleSetFlex(this->getFlexNode(), rawValue);
    this->_yFlex = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flex: " << rawValue;
  }
}
void YogaWidget::setYFlexGrow(float rawValue) {
  try {
    YGNodeStyleSetFlexGrow(this->getFlexNode(), rawValue);
    this->_yFlexGrow = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flexGrow: " << rawValue;
  }
}
void YogaWidget::setYFlexShrink(float rawValue) {
  try {
    YGNodeStyleSetFlexShrink(this->getFlexNode(), rawValue);
    this->_yFlexShrink = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flexShrink: " << rawValue;
  }
}
void YogaWidget::setYAspectRatio(float rawValue) {
  try {
    YGNodeStyleSetAspectRatio(this->getFlexNode(), rawValue);
    this->_yAspectRatio = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: aspectRatio: " << rawValue;
  }
}
void YogaWidget::setYNodeTop(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeTop,
                                        measurement.value)
        : YGNodeStyleSetPosition(this->getFlexNode(), YGEdgeTop,
                                 measurement.value);
    this->_yTop = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: top: " << rawValue;
  }
}
void YogaWidget::setYNodeRight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeRight,
                                        measurement.value)
        : YGNodeStyleSetPosition(this->getFlexNode(), YGEdgeRight,
                                 measurement.value);
    this->_yRight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: right: " << rawValue;
  }
}

void YogaWidget::setYNodeBottom(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeBottom,
                                        measurement.value)
        : YGNodeStyleSetPosition(this->getFlexNode(), YGEdgeBottom,
                                 measurement.value);
    this->_yBottom = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: bottom: " << rawValue;
  }
}

void YogaWidget::setYNodeLeft(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeLeft,
                                        measurement.value)
        : YGNodeStyleSetPosition(this->getFlexNode(), YGEdgeLeft,
                                 measurement.value);
    this->_yLeft = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: left: " << rawValue;
  }
}

void YogaWidget::setYFlexBasis(QString rawValue) {
  try {
    if (rawValue == "auto") {
      YGNodeStyleSetFlexBasisAuto(this->getFlexNode());
    } else {
      NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
      (measurement.unit == YGUnitPercent)
          ? YGNodeStyleSetFlexBasisPercent(this->getFlexNode(),
                                           measurement.value)
          : YGNodeStyleSetFlexBasis(this->getFlexNode(), measurement.value);
    }
    this->_yFlexBasis = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: flexBasis: " << rawValue;
  }
}

void YogaWidget::setYMinWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMinWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMinWidth(this->getFlexNode(), measurement.value);
    this->_yMinWidth = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: minWidth: " << rawValue;
  }
}
void YogaWidget::setYMinHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMinHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMinHeight(this->getFlexNode(), measurement.value);
    this->_yMinHeight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: minHeight: " << rawValue;
  }
}
void YogaWidget::setYWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetWidth(this->getFlexNode(), measurement.value);
    this->_yWidth = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: yWidth: " << rawValue;
  }
}
void YogaWidget::setYHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetHeight(this->getFlexNode(), measurement.value);
    this->_yHeight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: yHeight: " << rawValue;
  }
}
void YogaWidget::setYMaxWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMaxWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMaxWidth(this->getFlexNode(), measurement.value);
    this->_yMaxWidth = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: maxWidth: " << rawValue;
  }
}
void YogaWidget::setYMaxHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMaxHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMaxHeight(this->getFlexNode(), measurement.value);
    this->_yMaxHeight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: maxHeight: " << rawValue;
  }
}
void YogaWidget::setYPaddingTop(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeTop,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeTop,
                                measurement.value);
    this->_yPaddingTop = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingTop: " << rawValue;
  }
}
void YogaWidget::setYPaddingRight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeRight,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeRight,
                                measurement.value);
    this->_yPaddingRight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingRight: " << rawValue;
  }
}
void YogaWidget::setYPaddingBottom(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeBottom,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeBottom,
                                measurement.value);
    this->_yPaddingBottom = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingBottom: " << rawValue;
  }
}
void YogaWidget::setYPaddingLeft(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeLeft,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeLeft,
                                measurement.value);
    this->_yPaddingLeft = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingLeft: " << rawValue;
  }
}
void YogaWidget::setYPaddingHorizontal(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeHorizontal,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeHorizontal,
                                measurement.value);
    this->_yPaddingHorizontal = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingHorizontal: " << rawValue;
  }
}
void YogaWidget::setYPaddingVertical(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeVertical,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeVertical,
                                measurement.value);
    this->_yPaddingVertical = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: paddingVertical: " << rawValue;
  }
}
void YogaWidget::setYPadding(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeAll,
                                       measurement.value)
        : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeAll,
                                measurement.value);
    this->_yPadding = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: padding: " << rawValue;
  }
}
void YogaWidget::setYMarginTop(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeTop,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeTop,
                               measurement.value);
    this->_yMarginTop = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginTop: " << rawValue;
  }
}
void YogaWidget::setYMarginRight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeRight,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeRight,
                               measurement.value);
    this->_yMarginRight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginRight: " << rawValue;
  }
}
void YogaWidget::setYMarginBottom(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeBottom,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeBottom,
                               measurement.value);
    this->_yMarginBottom = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginBottom: " << rawValue;
  }
}
void YogaWidget::setYMarginLeft(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeLeft,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeLeft,
                               measurement.value);
    this->_yMarginLeft = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginLeft: " << rawValue;
  }
}
void YogaWidget::setYMarginHorizontal(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeHorizontal,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeHorizontal,
                               measurement.value);
    this->_yMarginHorizontal = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginHorizontal: " << rawValue;
  }
}
void YogaWidget::setYMarginVertical(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeVertical,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeVertical,
                               measurement.value);
    this->_yMarginVertical = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: marginVertical: " << rawValue;
  }
}
void YogaWidget::setYMarginAll(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeAll,
                                      measurement.value)
        : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeAll,
                               measurement.value);
    this->_yMargin = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: margin: " << rawValue;
  }
}

void YogaWidget::setYBorderTop(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeTop, rawValue);
    this->_yBorderTop = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderTop: " << rawValue;
  }
}
void YogaWidget::setYBorderRight(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeRight, rawValue);
    this->_yBorderRight = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderRight: " << rawValue;
  }
}
void YogaWidget::setYBorderBottom(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeBottom, rawValue);
    this->_yBorderBottom = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderBottom: " << rawValue;
  }
}
void YogaWidget::setYBorderLeft(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeLeft, rawValue);
    this->_yBorderLeft = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderLeft: " << rawValue;
  }
}
void YogaWidget::setYBorderHorizontal(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeHorizontal, rawValue);
    this->_yBorderHorizontal = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderHorizontal: " << rawValue;
  }
}
void YogaWidget::setYBorderVertical(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeVertical, rawValue);
    this->_yBorderVertical = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: borderVertical: " << rawValue;
  }
}

void YogaWidget::setYBorder(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeAll, rawValue);
    this->_yBorder = rawValue;
  } catch (...) {
    qWarning() << "Invalid value: border: " << rawValue;
  }
}
