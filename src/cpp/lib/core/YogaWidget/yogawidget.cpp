#include "core/YogaWidget/yogawidget.h"

#include "spdlog/spdlog.h"

void YogaWidget::setYDisplay(QString rawValue) {
  try {
    std::string rawDisplay = rawValue.toStdString();
    int value = NodeStyle::NodeDisplay.at(rawDisplay);
    YGNodeStyleSetDisplay(this->getFlexNode(), static_cast<YGDisplay>(value));
    this->_yDisplay = rawValue;
    spdlog::info("set display: {}", rawDisplay);
  } catch (...) {
    spdlog::warn("Invalid value: display: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYAlignItems(QString rawValue) {
  try {
    std::string rawAlignItems = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignItems);
    YGNodeStyleSetAlignItems(this->getFlexNode(), static_cast<YGAlign>(value));
    this->_yAlignItems = rawValue;
    spdlog::info("set alignItems: {}", rawAlignItems);
  } catch (...) {
    spdlog::warn("Invalid value: alignItems: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYAlignContent(QString rawValue) {
  try {
    std::string rawAlignContent = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignContent);
    YGNodeStyleSetAlignContent(this->getFlexNode(),
                               static_cast<YGAlign>(value));
    this->_yAlignContent = rawValue;
    spdlog::info("set alignContent: {}", rawAlignContent);
  } catch (...) {
    spdlog::warn("Invalid value: alignContent: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYAlignSelf(QString rawValue) {
  try {
    std::string rawAlignSelf = rawValue.toStdString();
    int value = NodeStyle::NodeAlign.at(rawAlignSelf);
    YGNodeStyleSetAlignSelf(this->getFlexNode(), static_cast<YGAlign>(value));
    this->_yAlignSelf = rawValue;
    spdlog::info("set alignSelf: {}", rawAlignSelf);
  } catch (...) {
    spdlog::warn("Invalid value: alignSelf: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYJustifyContent(QString rawValue) {
  try {
    std::string rawJustifyContent = rawValue.toStdString();
    int value = NodeStyle::NodeJustifyContent.at(rawJustifyContent);
    YGNodeStyleSetJustifyContent(this->getFlexNode(),
                                 static_cast<YGJustify>(value));
    this->_yJustifyContent = rawValue;
    spdlog::info("set justifyContent: {}", rawJustifyContent);
  } catch (...) {
    spdlog::warn("Invalid value: justifyContent: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYDirection(QString rawValue) {
  try {
    std::string rawDirection = rawValue.toStdString();
    int value = NodeStyle::NodeDirection.at(rawDirection);
    YGNodeStyleSetDirection(this->getFlexNode(),
                            static_cast<YGDirection>(value));
    this->_yDirection = rawValue;
    spdlog::info("set direction: {}", rawDirection);
  } catch (...) {
    spdlog::warn("Invalid value: direction: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYFlexDirection(QString rawValue) {
  try {
    std::string rawFlexDirection = rawValue.toStdString();
    int value = NodeStyle::NodeFlexDirection.at(rawFlexDirection);
    YGNodeStyleSetFlexDirection(this->getFlexNode(),
                                static_cast<YGFlexDirection>(value));
    this->_yFlexDirection = rawValue;
    spdlog::info("set flexDirection: {}", rawFlexDirection);
  } catch (...) {
    spdlog::warn("Invalid value: flexDirection: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYOverflow(QString rawValue) {
  try {
    std::string rawOverflow = rawValue.toStdString();
    int value = NodeStyle::NodeOverflow.at(rawOverflow);
    YGNodeStyleSetOverflow(this->getFlexNode(), static_cast<YGOverflow>(value));
    this->_yOverflow = rawValue;
    spdlog::info("set overflow: {}", rawOverflow);
  } catch (...) {
    spdlog::warn("Invalid value: overflow: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYPosition(QString rawValue) {
  try {
    std::string rawPosition = rawValue.toStdString();
    int value = NodeStyle::NodePosition.at(rawPosition);
    YGNodeStyleSetPositionType(this->getFlexNode(),
                               static_cast<YGPositionType>(value));
    this->_yPosition = rawValue;
    spdlog::info("set positionType: {}", rawPosition);
  } catch (...) {
    spdlog::warn("Invalid value: positionType: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYFlexWrap(QString rawValue) {
  try {
    std::string rawFlexWrap = rawValue.toStdString();
    int value = NodeStyle::NodeWrap.at(rawFlexWrap);
    YGNodeStyleSetFlexWrap(this->getFlexNode(), static_cast<YGWrap>(value));
    this->_yFlexWrap = rawValue;
    spdlog::info("set flexWrap: {}", rawFlexWrap);
  } catch (...) {
    spdlog::warn("Invalid value: flexWrap: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYFlex(float rawValue) {
  try {
    YGNodeStyleSetFlex(this->getFlexNode(), rawValue);
    this->_yFlex = rawValue;
    spdlog::info("set flex: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: flex: {}", rawValue);
  }
}
void YogaWidget::setYFlexGrow(float rawValue) {
  try {
    YGNodeStyleSetFlexGrow(this->getFlexNode(), rawValue);
    this->_yFlexGrow = rawValue;
    spdlog::info("set flexGrow: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: flexGrow: {}", rawValue);
  }
}
void YogaWidget::setYFlexShrink(float rawValue) {
  try {
    YGNodeStyleSetFlexShrink(this->getFlexNode(), rawValue);
    this->_yFlexShrink = rawValue;
    spdlog::info("set flexShrink: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: flexShrink: {}", rawValue);
  }
}
void YogaWidget::setYAspectRatio(float rawValue) {
  try {
    YGNodeStyleSetAspectRatio(this->getFlexNode(), rawValue);
    this->_yAspectRatio = rawValue;
    spdlog::info("set aspectRatio: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: aspectRatio: {}", rawValue);
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
    spdlog::info("set top: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: top: {}", rawValue.toStdString());
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
    spdlog::info("set right: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: right: {}", rawValue.toStdString());
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
    spdlog::info("set bottom: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: bottom: {}", rawValue.toStdString());
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
    spdlog::info("set left: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: left: {}", rawValue.toStdString());
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
    spdlog::info("set flexBasis: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: flexBasis: {}", rawValue.toStdString());
  }
}

void YogaWidget::setYMinWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMinWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMinWidth(this->getFlexNode(), measurement.value);
    this->_yMinWidth = rawValue;
    spdlog::info("set minWidth: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: minWidth: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYMinHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMinHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMinHeight(this->getFlexNode(), measurement.value);
    this->_yMinHeight = rawValue;
    spdlog::info("set minHeight: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: minHeight: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetWidth(this->getFlexNode(), measurement.value);
    this->_yWidth = rawValue;
    spdlog::info("set yWidth: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: yWidth: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetHeight(this->getFlexNode(), measurement.value);
    this->_yHeight = rawValue;
    spdlog::info("set yHeight: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: yHeight: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYMaxWidth(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMaxWidthPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMaxWidth(this->getFlexNode(), measurement.value);
    this->_yMaxWidth = rawValue;
    spdlog::info("set maxWidth: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: maxWidth: {}", rawValue.toStdString());
  }
}
void YogaWidget::setYMaxHeight(QString rawValue) {
  try {
    NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
    (measurement.unit == YGUnitPercent)
        ? YGNodeStyleSetMaxHeightPercent(this->getFlexNode(), measurement.value)
        : YGNodeStyleSetMaxHeight(this->getFlexNode(), measurement.value);
    this->_yMaxHeight = rawValue;
    spdlog::info("set maxHeight: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: maxHeight: {}", rawValue.toStdString());
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
    spdlog::info("set paddingTop: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingTop: {}", rawValue.toStdString());
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
    spdlog::info("set paddingRight: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingRight: {}", rawValue.toStdString());
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
    spdlog::info("set paddingBottom: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingBottom: {}", rawValue.toStdString());
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
    spdlog::info("set paddingLeft: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingLeft: {}", rawValue.toStdString());
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
    spdlog::info("set paddingHorizontal: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingHorizontal: {}",
                 rawValue.toStdString());
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
    spdlog::info("set paddingVertical: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: paddingVertical: {}", rawValue.toStdString());
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
    spdlog::info("set padding: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: padding: {}", rawValue.toStdString());
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
    spdlog::info("set marginTop: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginTop: {}", rawValue.toStdString());
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
    spdlog::info("set marginRight: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginRight: {}", rawValue.toStdString());
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
    spdlog::info("set marginBottom: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginBottom: {}", rawValue.toStdString());
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
    spdlog::info("set marginLeft: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginLeft: {}", rawValue.toStdString());
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
    spdlog::info("set marginHorizontal: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginHorizontal: {}", rawValue.toStdString());
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
    spdlog::info("set marginVertical: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: marginVertical: {}", rawValue.toStdString());
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
    spdlog::info("set margin: {}", rawValue.toStdString());
  } catch (...) {
    spdlog::warn("Invalid value: margin: {}", rawValue.toStdString());
  }
}

void YogaWidget::setYBorderTop(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeTop, rawValue);
    this->_yBorderTop = rawValue;
    spdlog::info("set borderTop: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderTop: {}", rawValue);
  }
}
void YogaWidget::setYBorderRight(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeRight, rawValue);
    this->_yBorderRight = rawValue;
    spdlog::info("set borderRight: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderRight: {}", rawValue);
  }
}
void YogaWidget::setYBorderBottom(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeBottom, rawValue);
    this->_yBorderBottom = rawValue;
    spdlog::info("set borderBottom: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderBottom: {}", rawValue);
  }
}
void YogaWidget::setYBorderLeft(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeLeft, rawValue);
    this->_yBorderLeft = rawValue;
    spdlog::info("set borderLeft: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderLeft: {}", rawValue);
  }
}
void YogaWidget::setYBorderHorizontal(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeHorizontal, rawValue);
    this->_yBorderHorizontal = rawValue;
    spdlog::info("set borderHorizontal: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderHorizontal: {}", rawValue);
  }
}
void YogaWidget::setYBorderVertical(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeVertical, rawValue);
    this->_yBorderVertical = rawValue;
    spdlog::info("set borderVertical: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: borderVertical: {}", rawValue);
  }
}

void YogaWidget::setYBorder(float rawValue) {
  try {
    YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeAll, rawValue);
    this->_yBorder = rawValue;
    spdlog::info("set border: {}", rawValue);
  } catch (...) {
    spdlog::warn("Invalid value: border: {}", rawValue);
  }
}
