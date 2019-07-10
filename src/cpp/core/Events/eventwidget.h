#pragma once

#include <QEvent>
#include "src/cpp/core/Events/eventsmap.h"
#include <napi.h>

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