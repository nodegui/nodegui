#include "eventwidget.h"
#include "deps/spdlog/spdlog.h"

void EventWidget::subscribeToQtEvent(std::string evtString){
    try {
        int evtType = EventsMap::events.at(evtString);
        this->subscribedEvents.insert({static_cast<QEvent::Type>(evtType), evtString});
    } catch (...) {
        spdlog::info("EventWidget: Couldn't subscribe to qt event {}. If this is a signal you can safely ignore this warning", evtString.c_str());
    }
}

void EventWidget::event(QEvent* event){
    if(this->emitOnNode){
        try {
            QEvent::Type evtType = event->type();
            std::string eventTypeString = subscribedEvents.at(evtType);
            this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
                args = {  Napi::String::New(env, eventTypeString) };
            });
        } catch (...) {
            // Do nothing
        }    
    }
}

void EventWidget::connectWidgetSignalsToEventEmitter(){
    // Do nothing
    // This method should be overriden in sub classes to connect all signals to event emiiter of node. See Push button
}

EventWidget::~EventWidget(){
    if(this->emitOnNode){
        this->emitOnNode.release();
    }
}