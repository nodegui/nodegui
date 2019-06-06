#include "yogawidget.h"

void YogaWidget::setYDisplay(QString display){

    try {
        int value = NodeStyle::NodeDisplay.at(display.toStdString());
        YGNodeStyleSetDisplay(this->getFlexNode(),static_cast<YGDisplay>(value));
        this->_yDisplay = display;
        qDebug()<<"Value set display "<<display;
    }catch(...){
        qDebug()<<"Error: display "<<display<<" ";
    }
}
void YogaWidget::setYAlignItems(QString alignItems){
    try {
        int value = NodeStyle::NodeAlign.at(alignItems.toStdString());
        YGNodeStyleSetAlignItems(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignItems = alignItems;
        qDebug()<<"Value set alignItems "<<alignItems;
    }catch(...){
        qDebug()<<"Error: alignItems: "<<alignItems<<" ";
    }
}
void YogaWidget::setYAlignContent(QString alignContent){
    try {
        int value = NodeStyle::NodeAlign.at(alignContent.toStdString());
        YGNodeStyleSetAlignContent(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignContent = alignContent;
        qDebug()<<"Value set alignContent "<<alignContent;
    }catch(...){
        qDebug()<<"Error: alignContent: "<<alignContent<<" ";
    }
}
void YogaWidget::setYAlignSelf(QString alignSelf){
    try {
        int value = NodeStyle::NodeAlign.at(alignSelf.toStdString());
        YGNodeStyleSetAlignSelf(this->getFlexNode(),static_cast<YGAlign>(value));
        this->_yAlignSelf = alignSelf;
        qDebug()<<"Value set alignSelf "<<alignSelf;
    }catch(...){
        qDebug()<<"Error: alignSelf: "<<alignSelf<<" ";
    }
}
void YogaWidget::setYJustifyContent(QString justifyContent){
    try {
        int value = NodeStyle::NodeJustifyContent.at(justifyContent.toStdString());
        YGNodeStyleSetJustifyContent(this->getFlexNode(),static_cast<YGJustify>(value));
        this->_yJustifyContent = justifyContent;
        qDebug()<<"Value set justifyContent "<<justifyContent;
    }catch(...){
        qDebug()<<"Error: justifyContent: "<<justifyContent<<" ";
    }
}
void YogaWidget::setYDirection(QString direction){
    try {
        int value = NodeStyle::NodeDirection.at(direction.toStdString());
        YGNodeStyleSetDirection(this->getFlexNode(),static_cast<YGDirection>(value));
        this->_yDirection = direction;
        qDebug()<<"Value set direction "<<direction;
    }catch(...){
        qDebug()<<"Error: direction: "<<direction<<" ";
    }
}
void YogaWidget::setYFlexDirection(QString flexDirection){
    try {
        int value = NodeStyle::NodeFlexDirection.at(flexDirection.toStdString());
        YGNodeStyleSetFlexDirection(this->getFlexNode(),static_cast<YGFlexDirection>(value));
        this->_yFlexDirection = flexDirection;
        qDebug()<<"Value set flexDirection "<<flexDirection;
    }catch(...){
        qDebug()<<"Error: flexDirection: "<<flexDirection<<" ";
    }
}
void YogaWidget::setYOverflow(QString overflow){
    try {
        int value = NodeStyle::NodeOverflow.at(overflow.toStdString());
        YGNodeStyleSetOverflow(this->getFlexNode(),static_cast<YGOverflow>(value));
        this->_yOverflow = overflow;
        qDebug()<<"Value set overflow "<<overflow;
    }catch(...){
        qDebug()<<"Error: overflow: "<<overflow<<" ";
    }
}
void YogaWidget::setYPosition(QString position){
    try {
        int value = NodeStyle::NodePosition.at(position.toStdString());
        YGNodeStyleSetPositionType(this->getFlexNode(),static_cast<YGPositionType>(value));
        this->_yPosition = position;
        qDebug()<<"Value set positionType "<<position;
    }catch(...){
        qDebug()<<"Error: positionType: "<<position<<" ";
    }
}
void YogaWidget::setYFlexWrap(QString flexWrap){
    try {
        int value = NodeStyle::NodeWrap.at(flexWrap.toStdString());
        YGNodeStyleSetFlexWrap(this->getFlexNode(),static_cast<YGWrap>(value));
        this->_yFlexWrap = flexWrap;
        qDebug()<<"Value set flexWrap "<<flexWrap;
    }catch(...){
        qDebug()<<"Error: flexWrap: "<<flexWrap<<" ";
    }
}
void YogaWidget::setYFlex(float flex){
    try {
        YGNodeStyleSetFlex(this->getFlexNode(),flex);
        this->_yFlex = flex;
        qDebug()<<"Value set flex "<<flex;
    }catch(...){
        qDebug()<<"Error: flex: "<<flex<<" ";
    }
}
void YogaWidget::setYFlexGrow(float flexGrow){
    try {
        YGNodeStyleSetFlexGrow(this->getFlexNode(),flexGrow);
        this->_yFlexGrow = flexGrow;
        qDebug()<<"Value set flexGrow "<<flexGrow;
    }catch(...){
        qDebug()<<"Error: flexGrow: "<<flexGrow<<" ";
    }
}
void YogaWidget::setYFlexShrink(float flexShrink){
    try {
        YGNodeStyleSetFlexShrink(this->getFlexNode(),flexShrink);
        this->_yFlexShrink = flexShrink;
        qDebug()<<"Value set flexShrink "<<flexShrink;
    }catch(...){
        qDebug()<<"Error: flexShrink: "<<flexShrink<<" ";
    }
}
void YogaWidget::setYAspectRatio(float aspectRatio){
    try {
        YGNodeStyleSetAspectRatio(this->getFlexNode(),aspectRatio);
        this->_yAspectRatio = aspectRatio;
        qDebug()<<"Value set aspectRatio "<<aspectRatio;
    }catch(...){
        qDebug()<<"Error: aspectRatio: "<<aspectRatio<<" ";
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
        qDebug()<<"Error: top: "<<rawValue<<" ";
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
        qDebug()<<"Error: right: "<<rawValue<<" ";
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
        qDebug()<<"Error: bottom: "<<rawValue<<" ";
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
        qDebug()<<"Error: left: "<<rawValue<<" ";
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
        qDebug()<<"Error: flexBasis: "<<rawValue<<" ";
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
        qDebug()<<"Error: minWidth: "<<rawValue<<" ";
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
        qDebug()<<"Error: minHeight: "<<rawValue<<" ";
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
        qDebug()<<"Error: maxWidth: "<<rawValue<<" ";
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
        qDebug()<<"Error: maxHeight: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingTop: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingRight: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingBottom: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingLeft: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingHorizontal: "<<rawValue<<" ";
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
        qDebug()<<"Error: paddingVertical: "<<rawValue<<" ";
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
        qDebug()<<"Error: padding: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginTop: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginRight: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginBottom: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginLeft: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginHorizontal: "<<rawValue<<" ";
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
        qDebug()<<"Error: marginVertical: "<<rawValue<<" ";
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
        qDebug()<<"Error: margin: "<<rawValue<<" ";
    }
}

void YogaWidget::setYBorderTop(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeTop, rawValue);
        this->_yBorderTop = rawValue;
    }catch(...){
        qDebug()<<"Error: borderTop: "<<rawValue<<" ";
    }
}
void YogaWidget::setYBorderRight(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeRight, rawValue);
        this->_yBorderRight = rawValue;
    }catch(...){
        qDebug()<<"Error: borderRight: "<<rawValue<<" ";
    }
}
void YogaWidget::setYBorderBottom(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeBottom, rawValue);
        this->_yBorderBottom = rawValue;
    }catch(...){
        qDebug()<<"Error: borderBottom: "<<rawValue<<" ";
    }
}
void YogaWidget::setYBorderLeft(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeLeft, rawValue);
        this->_yBorderLeft = rawValue;
    }catch(...){
        qDebug()<<"Error: borderLeft: "<<rawValue<<" ";
    }
}
void YogaWidget::setYBorderHorizontal(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeHorizontal, rawValue);
        this->_yBorderHorizontal = rawValue;
    }catch(...){
        qDebug()<<"Error: borderHorizontal: "<<rawValue<<" ";
    }
}
void YogaWidget::setYBorderVertical(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(),YGEdgeVertical, rawValue);
        this->_yBorderVertical = rawValue;
    }catch(...){
        qDebug()<<"Error: borderVertical: "<<rawValue<<" ";
    }
}

void YogaWidget::setYBorder(float rawValue){
    try {
        YGNodeStyleSetBorder(this->getFlexNode(), YGEdgeAll, rawValue);
        this->_yBorder = rawValue;
    }catch(...){
        qDebug()<<"Error: border: "<<rawValue<<" ";
    }
}
