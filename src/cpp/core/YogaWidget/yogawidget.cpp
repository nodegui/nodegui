#include "yogawidget.h"
#include "spdlog/spdlog.h"

void YogaWidget::setYDisplay(QString rawValue){

    try {
        std::string rawDisplay = rawValue.toStdString();
        int value = NodeStyle::NodeDisplay.at(rawDisplay);
        YGNodeStyleSetDisplay(this->getFlexNode(),static_cast<YGDisplay>(value));
        this->_yDisplay = rawValue;
        spdlog::info("Value set display {}", rawDisplay);
    }catch(...){
        spdlog::warn("Invalid value: display: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYAlignItems(QString rawValue){
    try {
        std::string rawAlignItems = rawValue.toStdString();
        int value = NodeStyle::NodeAlign.at(rawAlignItems);
        YGNodeStyleSetAlignItems(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignItems = rawValue;
        spdlog::info("Value set alignItems {}", rawAlignItems);
    }catch(...){
        spdlog::warn("Invalid value: alignItems: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYAlignContent(QString rawValue){
    try {
        std::string rawAlignContent = rawValue.toStdString();
        int value = NodeStyle::NodeAlign.at(rawAlignContent);
        YGNodeStyleSetAlignContent(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignContent = rawValue;
        qDebug()<<"Value set alignContent "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: alignContent: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYAlignSelf(QString rawValue){
    try {
        std::string rawAlignSelf = rawValue.toStdString();
        int value = NodeStyle::NodeAlign.at(rawAlignSelf);
        YGNodeStyleSetAlignSelf(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignSelf = rawValue;
        qDebug()<<"Value set alignSelf "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: alignSelf: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYJustifyContent(QString rawValue){
    try {
        std::string rawJustifyContent = rawValue.toStdString();
        int value = NodeStyle::NodeJustifyContent.at(rawJustifyContent);
        YGNodeStyleSetJustifyContent(this->getFlexNode(),static_cast<YGJustify>(value));
        this->_yJustifyContent = rawValue;
        qDebug()<<"Value set justifyContent "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: justifyContent: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYDirection(QString rawValue){
    try {
        std::string rawDirection = rawValue.toStdString();
        int value = NodeStyle::NodeDirection.at(rawDirection);
        YGNodeStyleSetDirection(this->getFlexNode(),static_cast<YGDirection>(value));
        this->_yDirection = rawValue;
        qDebug()<<"Value set direction "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: direction: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYFlexDirection(QString rawValue){
    try {
        std::string rawFlexDirection = rawValue.toStdString();
        int value = NodeStyle::NodeFlexDirection.at(rawFlexDirection);
        YGNodeStyleSetFlexDirection(this->getFlexNode(),static_cast<YGFlexDirection>(value));
        this->_yFlexDirection = rawValue;
        qDebug()<<"Value set flexDirection "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flexDirection: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYOverflow(QString rawValue){
    try {
        std::string rawOverflow = rawValue.toStdString();
        int value = NodeStyle::NodeOverflow.at(rawOverflow);
        YGNodeStyleSetOverflow(this->getFlexNode(),static_cast<YGOverflow>(value));
        this->_yOverflow = rawValue;
        qDebug()<<"Value set overflow "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: overflow: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPosition(QString rawValue){
    try {
        std::string rawPosition = rawValue.toStdString();
        int value = NodeStyle::NodePosition.at(rawPosition);
        YGNodeStyleSetPositionType(this->getFlexNode(),static_cast<YGPositionType>(value));
        this->_yPosition = rawValue;
        qDebug()<<"Value set positionType "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: positionType: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYFlexWrap(QString rawValue){
    try {
        std::string rawFlexWrap = rawValue.toStdString();
        int value = NodeStyle::NodeWrap.at(rawFlexWrap);
        YGNodeStyleSetFlexWrap(this->getFlexNode(),static_cast<YGWrap>(value));
        this->_yFlexWrap = rawValue;
        qDebug()<<"Value set flexWrap "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flexWrap: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYFlex(float rawValue){
    try {
        YGNodeStyleSetFlex(this->getFlexNode(),rawValue);
        this->_yFlex = rawValue;
        qDebug()<<"Value set flex "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flex: {}",rawValue);
    }
}
void YogaWidget::setYFlexGrow(float rawValue){
    try {
        YGNodeStyleSetFlexGrow(this->getFlexNode(),rawValue);
        this->_yFlexGrow = rawValue;
        qDebug()<<"Value set flexGrow "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flexGrow: {}",rawValue);
    }
}
void YogaWidget::setYFlexShrink(float rawValue){
    try {
        YGNodeStyleSetFlexShrink(this->getFlexNode(),rawValue);
        this->_yFlexShrink = rawValue;
        qDebug()<<"Value set flexShrink "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flexShrink: {}",rawValue);
    }
}
void YogaWidget::setYAspectRatio(float rawValue){
    try {
        YGNodeStyleSetAspectRatio(this->getFlexNode(),rawValue);
        this->_yAspectRatio = rawValue;
        qDebug()<<"Value set aspectRatio "<<rawValue;
    }catch(...){
        spdlog::warn("Invalid value: aspectRatio: {}",rawValue);
    }
}
void YogaWidget::setYNodeTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeTop,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeTop,measurement.value);
        this->_yTop = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: top: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYNodeRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeRight,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeRight,measurement.value);
        this->_yRight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: right: {}",rawValue.toStdString());
    }
}

void YogaWidget::setYNodeBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeBottom,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeBottom,measurement.value);
        this->_yBottom = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: bottom: {}",rawValue.toStdString());
    }
}

void YogaWidget::setYNodeLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeLeft,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeLeft,measurement.value);
        this->_yLeft = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: left: {}",rawValue.toStdString());
    }
}

void YogaWidget::setYFlexBasis(QString rawValue){
    try {
        if(rawValue == "auto"){
            YGNodeStyleSetFlexBasisAuto(this->getFlexNode());
        }else {
            NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
            (measurement.unit == YGUnitPercent)
                    ? YGNodeStyleSetFlexBasisPercent(this->getFlexNode(), measurement.value)
                    : YGNodeStyleSetFlexBasis(this->getFlexNode(),measurement.value);
        }
        this->_yFlexBasis = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: flexBasis: {}",rawValue.toStdString());
    }
}

void YogaWidget::setYMinWidth(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMinWidthPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMinWidth(this->getFlexNode(), measurement.value);
        this->_yMinWidth = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: minWidth: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMinHeight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMinHeightPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMinHeight(this->getFlexNode(), measurement.value);
        this->_yMinHeight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: minHeight: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMaxWidth(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMaxWidthPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMaxWidth(this->getFlexNode(), measurement.value);
        this->_yMaxWidth = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: maxWidth: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMaxHeight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMaxHeightPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMaxHeight(this->getFlexNode(), measurement.value);
        this->_yMaxHeight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: maxHeight: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeTop, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeTop, measurement.value);
        this->_yPaddingTop = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingTop: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeRight, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeRight, measurement.value);
        this->_yPaddingRight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingRight: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeBottom, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeBottom, measurement.value);
        this->_yPaddingBottom = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingBottom: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeLeft, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeLeft, measurement.value);
        this->_yPaddingLeft = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingLeft: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingHorizontal(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeHorizontal, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeHorizontal, measurement.value);
        this->_yPaddingHorizontal = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingHorizontal: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPaddingVertical(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeVertical, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeVertical, measurement.value);
        this->_yPaddingVertical = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: paddingVertical: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYPadding(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeAll, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeAll, measurement.value);
        this->_yPadding = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: padding: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeTop, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeTop, measurement.value);
        this->_yMarginTop = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginTop: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeRight, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeRight, measurement.value);
        this->_yMarginRight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginRight: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeBottom, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeBottom, measurement.value);
        this->_yMarginBottom = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginBottom: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeLeft, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeLeft, measurement.value);
        this->_yMarginLeft = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginLeft: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginHorizontal(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeHorizontal, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeHorizontal, measurement.value);
        this->_yMarginHorizontal = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginHorizontal: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginVertical(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeVertical, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeVertical, measurement.value);
        this->_yMarginVertical = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: marginVertical: {}",rawValue.toStdString());
    }
}
void YogaWidget::setYMarginAll(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeAll, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeAll, measurement.value);
        this->_yMargin = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: margin: {}",rawValue.toStdString());
    }
}

void YogaWidget::setYBorderTop(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeTop, rawValue);
        this->_yBorderTop = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderTop: {}",rawValue);
    }
}
void YogaWidget::setYBorderRight(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeRight, rawValue);
        this->_yBorderRight = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderRight: {}",rawValue);
    }
}
void YogaWidget::setYBorderBottom(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeBottom, rawValue);
        this->_yBorderBottom = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderBottom: {}",rawValue);
    }
}
void YogaWidget::setYBorderLeft(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeLeft, rawValue);
        this->_yBorderLeft = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderLeft: {}",rawValue);
    }
}
void YogaWidget::setYBorderHorizontal(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeHorizontal, rawValue);
        this->_yBorderHorizontal = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderHorizontal: {}",rawValue);
    }
}
void YogaWidget::setYBorderVertical(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeVertical, rawValue);
        this->_yBorderVertical = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: borderVertical: {}",rawValue);
    }
}

void YogaWidget::setYBorder(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeAll, rawValue);
        this->_yBorder = rawValue;
    }catch(...){
        spdlog::warn("Invalid value: border: {}",rawValue);
    }
}
