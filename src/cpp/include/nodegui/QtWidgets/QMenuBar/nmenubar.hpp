#pragma once
#include <nodegui/core/NodeWidget/nodewidget.h>

#include <QMenuBar>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT NMenuBar : public QMenuBar, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMenuBar)
 public:
  using QMenuBar::QMenuBar;  // inherit all constructors of QMenuBar
  virtual void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS

    QObject::connect(this, &QMenuBar::hovered, [=](QAction* action) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = WrapperCache::instance.getWrapper(env, action);
      // For some reason "instance" becomes a nullptr sometimes, 
      // Passing in a nullptr CRASHES this
      // since we don't know which item "hovered" we don't continue with the event.
      if (instance != nullptr) {
         this->emitOnNode.Call({Napi::String::New(env, "hovered"), instance});
      }
    }); 

    QObject::connect(this, &QMenuBar::triggered, [=](QAction* action) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = WrapperCache::instance.getWrapper(env, action);
      if (instance != nullptr) {
        this->emitOnNode.Call({Napi::String::New(env, "triggered"), instance});
      }
    }); 
  }
};
