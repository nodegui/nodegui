#pragma once
#include <QEvent>
#include <unordered_map>

#include "Extras/Export/export.h"

class DLL_EXPORT EventsMap {
 public:
  static std::unordered_map<std::string, int> eventTypes;
  // static std::unordered_map<std::string, int> keyEvents;
};