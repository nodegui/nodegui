#include "yogawidget.h"

void YogaWidget::setYDisplay(QString display){

    try {
        int value = NodeStyle::NodeDisplay.at(display.toStdString());
        YGNodeStyleSetDisplay(this->getFlexNode(),static_cast<YGDisplay>(value));
        this->_yDisplay = display;
        qDebug()<<"Value set display "<<display;
    }catch(std::exception &e){
        qDebug()<<"Error: display "<<display<<" "<<e.what();
    }
}
void YogaWidget::setYAlignItems(QString alignItems){
    try {
        int value = NodeStyle::NodeAlign.at(alignItems.toStdString());
        YGNodeStyleSetAlignItems(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignItems = alignItems;
        qDebug()<<"Value set alignItems "<<alignItems;
    }catch(std::exception &e){
        qDebug()<<"Error: alignItems: "<<alignItems<<" "<<e.what();
    }
}
void YogaWidget::setYAlignContent(QString alignContent){
    try {
        int value = NodeStyle::NodeAlign.at(alignContent.toStdString());
        YGNodeStyleSetAlignContent(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignContent = alignContent;
        qDebug()<<"Value set alignContent "<<alignContent;
    }catch(std::exception &e){
        qDebug()<<"Error: alignContent: "<<alignContent<<" "<<e.what();
    }
}
void YogaWidget::setYAlignSelf(QString alignSelf){
    try {
        int value = NodeStyle::NodeAlign.at(alignSelf.toStdString());
        YGNodeStyleSetAlignSelf(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignSelf = alignSelf;
        qDebug()<<"Value set alignSelf "<<alignSelf;
    }catch(std::exception &e){
        qDebug()<<"Error: alignSelf: "<<alignSelf<<" "<<e.what();
    }
}
void YogaWidget::setYJustifyContent(QString justifyContent){
    try {
        int value = NodeStyle::NodeJustifyContent.at(justifyContent.toStdString());
        YGNodeStyleSetJustifyContent(this->getFlexNode(),static_cast<YGJustify>(value));
        this->_yJustifyContent = justifyContent;
        qDebug()<<"Value set justifyContent "<<justifyContent;
    }catch(std::exception &e){
        qDebug()<<"Error: justifyContent: "<<justifyContent<<" "<<e.what();
    }
}
void YogaWidget::setYDirection(QString direction){
    try {
        int value = NodeStyle::NodeDirection.at(direction.toStdString());
        YGNodeStyleSetDirection(this->getFlexNode(),static_cast<YGDirection>(value));
        this->_yDirection = direction;
        qDebug()<<"Value set direction "<<direction;
    }catch(std::exception &e){
        qDebug()<<"Error: direction: "<<direction<<" "<<e.what();
    }
}
void YogaWidget::setYFlexDirection(QString flexDirection){
    try {
        int value = NodeStyle::NodeFlexDirection.at(flexDirection.toStdString());
        YGNodeStyleSetFlexDirection(this->getFlexNode(),static_cast<YGFlexDirection>(value));
        this->_yFlexDirection = flexDirection;
        qDebug()<<"Value set flexDirection "<<flexDirection;
    }catch(std::exception &e){
        qDebug()<<"Error: flexDirection: "<<flexDirection<<" "<<e.what();
    }
}
void YogaWidget::setYOverflow(QString overflow){
    try {
        int value = NodeStyle::NodeOverflow.at(overflow.toStdString());
        YGNodeStyleSetOverflow(this->getFlexNode(),static_cast<YGOverflow>(value));
        this->_yOverflow = overflow;
        qDebug()<<"Value set overflow "<<overflow;
    }catch(std::exception &e){
        qDebug()<<"Error: overflow: "<<overflow<<" "<<e.what();
    }
}
void YogaWidget::setYPosition(QString position){
    try {
        int value = NodeStyle::NodePosition.at(position.toStdString());
        YGNodeStyleSetPositionType(this->getFlexNode(),static_cast<YGPositionType>(value));
        this->_yPosition = position;
        qDebug()<<"Value set positionType "<<position;
    }catch(std::exception &e){
        qDebug()<<"Error: positionType: "<<position<<" "<<e.what();
    }
}
void YogaWidget::setYFlexWrap(QString flexWrap){
    try {
        int value = NodeStyle::NodeWrap.at(flexWrap.toStdString());
        YGNodeStyleSetFlexWrap(this->getFlexNode(),static_cast<YGWrap>(value));
        this->_yFlexWrap = flexWrap;
        qDebug()<<"Value set flexWrap "<<flexWrap;
    }catch(std::exception &e){
        qDebug()<<"Error: flexWrap: "<<flexWrap<<" "<<e.what();
    }
}
void YogaWidget::setYFlex(float flex){
    try {
        YGNodeStyleSetFlex(this->getFlexNode(),flex);
        this->_yFlex = flex;
        qDebug()<<"Value set flex "<<flex;
    }catch(std::exception &e){
        qDebug()<<"Error: flex: "<<flex<<" "<<e.what();
    }
}
void YogaWidget::setYFlexGrow(float flexGrow){
    try {
        YGNodeStyleSetFlexGrow(this->getFlexNode(),flexGrow);
        this->_yFlexGrow = flexGrow;
        qDebug()<<"Value set flexGrow "<<flexGrow;
    }catch(std::exception &e){
        qDebug()<<"Error: flexGrow: "<<flexGrow<<" "<<e.what();
    }
}
void YogaWidget::setYFlexShrink(float flexShrink){
    try {
        YGNodeStyleSetFlexShrink(this->getFlexNode(),flexShrink);
        this->_yFlexShrink = flexShrink;
        qDebug()<<"Value set flexShrink "<<flexShrink;
    }catch(std::exception &e){
        qDebug()<<"Error: flexShrink: "<<flexShrink<<" "<<e.what();
    }
}
void YogaWidget::setYAspectRatio(float aspectRatio){
    try {
        YGNodeStyleSetAspectRatio(this->getFlexNode(),aspectRatio);
        this->_yAspectRatio = aspectRatio;
        qDebug()<<"Value set aspectRatio "<<aspectRatio;
    }catch(std::exception &e){
        qDebug()<<"Error: aspectRatio: "<<aspectRatio<<" "<<e.what();
    }
}
void YogaWidget::setYNodeTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeTop,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeTop,measurement.value);
        this->_yTop = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: top: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYNodeRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeRight,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeRight,measurement.value);
        this->_yRight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: right: "<<rawValue<<" "<<e.what();
    }
}

void YogaWidget::setYNodeBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeBottom,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeBottom,measurement.value);
        this->_yBottom = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: bottom: "<<rawValue<<" "<<e.what();
    }
}

void YogaWidget::setYNodeLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit == YGUnitPercent)
                ? YGNodeStyleSetPositionPercent(this->getFlexNode(), YGEdgeLeft,measurement.value)
                : YGNodeStyleSetPosition(this->getFlexNode(),YGEdgeLeft,measurement.value);
        this->_yLeft = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: left: "<<rawValue<<" "<<e.what();
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
    }catch(std::exception &e){
        qDebug()<<"Error: flexBasis: "<<rawValue<<" "<<e.what();
    }
}

void YogaWidget::setYMinWidth(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMinWidthPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMinWidth(this->getFlexNode(), measurement.value);
        this->_yMinWidth = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: minWidth: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMinHeight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMinHeightPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMinHeight(this->getFlexNode(), measurement.value);
        this->_yMinHeight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: minHeight: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMaxWidth(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMaxWidthPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMaxWidth(this->getFlexNode(), measurement.value);
        this->_yMaxWidth = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: maxWidth: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMaxHeight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMaxHeightPercent(this->getFlexNode(), measurement.value)
                : YGNodeStyleSetMaxHeight(this->getFlexNode(), measurement.value);
        this->_yMaxHeight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: maxHeight: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeTop, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeTop, measurement.value);
        this->_yPaddingTop = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingTop: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeRight, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeRight, measurement.value);
        this->_yPaddingRight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingRight: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeBottom, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeBottom, measurement.value);
        this->_yPaddingBottom = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingBottom: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeLeft, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(), YGEdgeLeft, measurement.value);
        this->_yPaddingLeft = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingLeft: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingHorizontal(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(), YGEdgeHorizontal, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeHorizontal, measurement.value);
        this->_yPaddingHorizontal = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingHorizontal: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPaddingVertical(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeVertical, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeVertical, measurement.value);
        this->_yPaddingVertical = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: paddingVertical: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYPadding(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetPaddingPercent(this->getFlexNode(),YGEdgeAll, measurement.value)
                : YGNodeStyleSetPadding(this->getFlexNode(),YGEdgeAll, measurement.value);
        this->_yPadding = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: padding: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginTop(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeTop, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeTop, measurement.value);
        this->_yMarginTop = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginTop: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginRight(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeRight, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeRight, measurement.value);
        this->_yMarginRight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginRight: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginBottom(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeBottom, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeBottom, measurement.value);
        this->_yMarginBottom = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginBottom: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginLeft(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeLeft, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(), YGEdgeLeft, measurement.value);
        this->_yMarginLeft = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginLeft: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginHorizontal(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(), YGEdgeHorizontal, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeHorizontal, measurement.value);
        this->_yMarginHorizontal = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginHorizontal: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginVertical(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeVertical, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeVertical, measurement.value);
        this->_yMarginVertical = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: marginVertical: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYMarginAll(QString rawValue){
    try {
        NodeValueUnit measurement = NodeStyle::parseMeasurement(rawValue);
        (measurement.unit==YGUnitPercent)
                ? YGNodeStyleSetMarginPercent(this->getFlexNode(),YGEdgeAll, measurement.value)
                : YGNodeStyleSetMargin(this->getFlexNode(),YGEdgeAll, measurement.value);
        this->_yMargin = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: margin: "<<rawValue<<" "<<e.what();
    }
}

void YogaWidget::setYBorderTop(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeTop, rawValue);
        this->_yBorderTop = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderTop: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYBorderRight(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeRight, rawValue);
        this->_yBorderRight = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderRight: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYBorderBottom(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeBottom, rawValue);
        this->_yBorderBottom = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderBottom: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYBorderLeft(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeLeft, rawValue);
        this->_yBorderLeft = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderLeft: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYBorderHorizontal(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeHorizontal, rawValue);
        this->_yBorderHorizontal = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderHorizontal: "<<rawValue<<" "<<e.what();
    }
}
void YogaWidget::setYBorderVertical(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeVertical, rawValue);
        this->_yBorderVertical = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: borderVertical: "<<rawValue<<" "<<e.what();
    }
}

void YogaWidget::setYBorder(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeAll, rawValue);
        this->_yBorder = rawValue;
    }catch(std::exception &e){
        qDebug()<<"Error: border: "<<rawValue<<" "<<e.what();
    }
}
