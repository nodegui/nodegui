#pragma once
#include <nodegui/core/NodeWidget/nodewidget.h>

#include <QMenu>

#include "Extras/Export/export.h"
#include "QtWidgets/QWidget/qwidget_macro.h"

class DLL_EXPORT NMenu : public QMenu, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMenu)
 public:
  using QMenu::QMenu;  // inherit all constructors of QMenu
  void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS

    QObject::connect(
        this, &QMenu::triggered,
        [=](QAction* action) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto actionInstance = QActionWrap::constructor.New(
              {Napi::External<QAction>::New(env, action)});
          this->emitOnNode.Call({Napi::String::New(env, "triggered"),
                                 actionInstance});
        });
  }
};
