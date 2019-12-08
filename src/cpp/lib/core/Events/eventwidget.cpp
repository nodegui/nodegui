#include "core/Events/eventwidget.h"

#include <napi.h>

#include <QDebug>

void EventWidget::subscribeToQtEvent(std::string evtString) {
  try {
    int evtType = EventsMap::eventTypes.at(evtString);
    this->subscribedEvents.insert(
        {static_cast<QEvent::Type>(evtType), evtString});
  } catch (...) {
    // qDebug() << "EventWidget: Couldn't subscribe to qt event"
    //          << evtString.c_str()
    //          << ". If this is a signal you can safely ignore this warning";
  }
}

void EventWidget::unSubscribeToQtEvent(std::string evtString) {
  try {
    int evtType = EventsMap::eventTypes.at(evtString);
    this->subscribedEvents.erase(
        static_cast<QEvent::Type>(evtType));  // erasing by key
  } catch (...) {
    // qDebug() << "EventWidget: Couldn't unsubscribe to qt event "
    //          << evtString.c_str()
    //          << ". If this is a signal you can safely ignore this warning ";
  }
}

void EventWidget::event(QEvent* event) {
  if (this->emitOnNode) {
    try {
      QEvent::Type evtType = event->type();
      std::string eventTypeString = subscribedEvents.at(evtType);
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);

      Napi::Value nativeEvent = Napi::External<QEvent>::New(env, event);
      std::vector<napi_value> args = {Napi::String::New(env, eventTypeString),
                                      nativeEvent};

      this->emitOnNode.Call(args);
    } catch (...) {
      // Do nothing
    }
  }
}

void EventWidget::connectWidgetSignalsToEventEmitter() {
  // Do nothing
  // This method should be overriden in sub classes to connect all signals to
  // event emiiter of node. See Push button
}

EventWidget::~EventWidget() {
  if (this->emitOnNode) {
    this->emitOnNode.Reset();
  }
}