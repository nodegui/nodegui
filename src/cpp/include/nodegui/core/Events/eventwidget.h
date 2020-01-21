#pragma once

#include <napi.h>

#include <QEvent>
#include "core/Events/eventsmap.h"
#include "deps/yoga/YGMacros.h"

class WIN_EXPORT EventWidget {
 public:
  Napi::FunctionReference emitOnNode;
  std::unordered_map<QEvent::Type, std::string> subscribedEvents;

  void subscribeToQtEvent(std::string evtString);
  void unSubscribeToQtEvent(std::string evtString);

  void event(QEvent* event);

  void connectSignalsToEventEmitter();

  ~EventWidget();
};