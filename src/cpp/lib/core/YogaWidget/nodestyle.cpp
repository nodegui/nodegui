#include "core/YogaWidget/nodestyle.h"

std::unordered_map<std::string, int> NodeStyle::NodeAlign{
    {"auto", YGAlignAuto},
    {"flex-start", YGAlignFlexStart},
    {"center", YGAlignCenter},
    {"flex-end", YGAlignFlexEnd},
    {"stretch", YGAlignStretch},
    {"baseline", YGAlignBaseline},
    {"space-between", YGAlignSpaceBetween},
    {"space-around", YGAlignSpaceAround},
};

std::unordered_map<std::string, int> NodeStyle::NodeJustifyContent{
    {"flex-start", YGJustifyFlexStart},
    {"center", YGJustifyCenter},
    {"flex-end", YGJustifyFlexEnd},
    {"space-between", YGJustifySpaceBetween},
    {"space-around", YGJustifySpaceAround},
    {"space-evenly", YGJustifySpaceEvenly}};

std::unordered_map<std::string, int> NodeStyle::NodeDirection{
    {"inherit", YGDirectionInherit},
    {"ltr", YGDirectionLTR},
    {"rtl", YGDirectionRTL}};

std::unordered_map<std::string, int> NodeStyle::NodeDisplay{
    {"flex", YGDisplayFlex}, {"none", YGDisplayNone}};

std::unordered_map<std::string, int> NodeStyle::NodeFlexDirection{
    {"column", YGFlexDirectionColumn},
    {"column-reverse", YGFlexDirectionColumnReverse},
    {"row", YGFlexDirectionRow},
    {"row-reverse", YGFlexDirectionRowReverse}};

std::unordered_map<std::string, int> NodeStyle::NodeOverflow{
    {"visible", YGOverflowVisible},
    {"hidden", YGOverflowHidden},
    {"scroll", YGOverflowScroll}};

std::unordered_map<std::string, int> NodeStyle::NodePosition{
    {"relative", YGPositionTypeRelative},
    {"absolute", YGPositionTypeAbsolute},
};

std::unordered_map<std::string, int> NodeStyle::NodeWrap{
    {"no-wrap", YGWrapNoWrap},
    {"wrap", YGWrapWrap},
    {"wrap-reverse", YGWrapWrapReverse}};

NodeValueUnit NodeStyle::parseMeasurement(QString rawValue) {
  float value = std::stof(rawValue.toStdString());
  if (rawValue.back() == "%") {
    return NodeValueUnit(value, YGUnitPercent);
  }
  return NodeValueUnit(value, YGUnitPoint);
}
