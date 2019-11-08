#pragma once

#include <napi.h>

#include <QEvent>

#include "core/Events/eventsmap.h"

class EventWidget {
 public:
  Napi::FunctionReference emitOnNode;
  std::unordered_map<QEvent::Type, std::string> subscribedEvents;

  void subscribeToQtEvent(std::string evtString);
  void unSubscribeToQtEvent(std::string evtString);

  void event(QEvent* event);

  void connectWidgetSignalsToEventEmitter();

  ~EventWidget();
};