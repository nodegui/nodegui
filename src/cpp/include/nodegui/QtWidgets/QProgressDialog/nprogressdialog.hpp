#pragma once

#include <QProgressDialog>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NProgressDialog : public QProgressDialog, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QProgressDialog)
 public:
  using QProgressDialog::QProgressDialog;

  void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QProgressDialog::canceled, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "canceled")});
    });
  }
};
