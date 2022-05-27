#pragma once

#include <napi.h>

#include <QEvent>

#include "Extras/Export/export.h"
#include "core/Events/eventsmap.h"

class DLL_EXPORT EventWidget {
 public:
  Napi::FunctionReference emitOnNode;
  std::unordered_map<QEvent::Type, std::string> subscribedEvents;

  void subscribeToQtEvent(std::string evtString);
  void unSubscribeToQtEvent(std::string evtString);

  bool event(QEvent* event);
  bool eventAfterDefault(QEvent* event, bool baseWidgetResult);

  virtual void connectSignalsToEventEmitter();

  ~EventWidget();

 private:
  bool sendEventToNode(QEvent* event, bool afterBaseWidget,
                       bool baseWidgetResult);
};
