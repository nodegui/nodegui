#pragma once
#include <QAbstractButton>
#include <QMessageBox>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "QtWidgets/QPushButton/qpushbutton_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NMessageBox : public QMessageBox, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QMessageBox)
  using QMessageBox::QMessageBox;

  void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    QObject::connect(
        this, &QMessageBox::buttonClicked, [=](QAbstractButton* button) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto value = Napi::External<QAbstractButton>::New(env, button);
          this->emitOnNode.Call(
              {Napi::String::New(env, "buttonClicked"), value});
        });
  }
};
