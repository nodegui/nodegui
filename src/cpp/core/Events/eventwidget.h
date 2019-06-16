#pragma once

#include <QEvent>
#include <napi-thread-safe-callback.hpp>
#include "src/cpp/core/Events/eventsmap.h"

class EventWidget {
public:
    std::unique_ptr<ThreadSafeCallback> emitOnNode = nullptr;
    std::unordered_map<QEvent::Type, std::string> subscribedEvents;

    void subscribeToEvent(std::string evtString);

    void event(QEvent* event);

    void connectWidgetSignalsToEventEmitter();
    
    ~EventWidget();
};