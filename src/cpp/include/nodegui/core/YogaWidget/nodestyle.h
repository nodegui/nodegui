#pragma once

#include <QString>
#include <unordered_map>

#include "Extras/Export/export.h"
#include "deps/yoga/YGStyle.h"

/*

    NodeStyle is a mapper class.
    Its job is to provide maps between string values received via qt stylesheet
   and convert them to Yoga/Flex Node properties.

 */

struct NodeValueUnit {
  YGUnit unit;
  float value;
  NodeValueUnit(float v, YGUnit u) {
    unit = u;
    value = v;
  }
};

class DLL_EXPORT NodeStyle {
 public:
  static std::unordered_map<std::string, int> NodeAlign;

  static std::unordered_map<std::string, int> NodeJustifyContent;

  static std::unordered_map<std::string, int> NodeDirection;

  static std::unordered_map<std::string, int> NodeDisplay;

  static std::unordered_map<std::string, int> NodeFlexDirection;

  static std::unordered_map<std::string, int> NodeOverflow;

  static std::unordered_map<std::string, int> NodePosition;

  static std::unordered_map<std::string, int> NodeWrap;

  static NodeValueUnit parseMeasurement(QString rawValue);
};
