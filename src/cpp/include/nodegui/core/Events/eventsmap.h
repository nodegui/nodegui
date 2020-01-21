#pragma once
#include <QEvent>
#include <unordered_map>
#include "deps/yoga/YGMacros.h"

class WIN_EXPORT EventsMap {
 public:
  static std::unordered_map<std::string, int> eventTypes;
  // static std::unordered_map<std::string, int> keyEvents;
};