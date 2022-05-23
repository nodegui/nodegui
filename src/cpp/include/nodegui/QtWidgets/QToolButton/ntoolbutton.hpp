#pragma once

#include <QAction>
#include <QToolButton>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractButton/qabstractbutton_macro.h"
#include "QtWidgets/QAction/qaction_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NToolButton : public QToolButton, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QToolButton)
 public:
  using QToolButton::QToolButton;  // inherit all constructors of QToolButton

  virtual void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACT_BUTTON_SIGNALS
    QObject::connect(this, &QToolButton::triggered, [=](QAction* action) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = WrapperCache::instance.getWrapper(env, action);
      this->emitOnNode.Call({Napi::String::New(env, "triggered"), instance});
    });
  }
};
