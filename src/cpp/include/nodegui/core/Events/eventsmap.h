#pragma once
#include <QEvent>
#include <unordered_map>

class EventsMap {
 public:
  static std::unordered_map<std::string, int> eventTypes;
  // static std::unordered_map<std::string, int> keyEvents;
};