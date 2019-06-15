#pragma once

#include <QWidget>
#include <QPushButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "napi.h"
#include <napi-thread-safe-callback.hpp>
#include <QEvent>
#include "src/cpp/core/Events/eventsmap.h"
#include <QDebug>

class NPushButton: public QPushButton, public YogaWidget
{
public:
    std::unique_ptr<ThreadSafeCallback> emitOnNode;
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QPushButton::QPushButton; //inherit all constructors of QPushButton
    Q_OBJECT
public:       
    std::unordered_map<QEvent::Type, std::string> subscribedEvents;

    void subscribeToEvent(std::string evtString){
        try {
            int evtType = EventsMap::events.at(evtString);
            this->subscribedEvents.insert({static_cast<QEvent::Type>(evtType), evtString});
        } catch (...) {
            qDebug()<< "Coudn't subscribe to event "<< evtString.c_str();
        }
    }
    bool event(QEvent* event){
        try {
           QEvent::Type e = event->type();
           std::string eventTypeString = subscribedEvents.at(e);
           this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
               args = {  Napi::String::New(env, eventTypeString) };
           });
        } catch (...) {}    
        return QWidget::event(event);    
     }
    ~NPushButton(){
        this->emitOnNode.release(); //cleanup instance->emitOnNode
    }
};


