#pragma once
#include <napi.h>

#include <QListWidget>

#include "Extras/Export/export.h"
#include "QtWidgets/QListView/qlistview_macro.h"
#include "QtWidgets/QListWidgetItem/qlistwidgetitem_wrap.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NListWidget : public QListWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QListWidget)
 public:
  using QListWidget::QListWidget;
  void connectSignalsToEventEmitter() {
    QObject::connect(
        this, &QListWidget::currentRowChanged, [=](int currentRow) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentRowChanged"),
                                 Napi::Number::New(env, currentRow)});
        });
    QObject::connect(this, &QListWidget::currentTextChanged,
                     [=](const QString &currentText) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "currentTextChanged"),
                            Napi::String::New(env, currentText.toStdString())});
                     });
    QObject::connect(this, &QListWidget::itemSelectionChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "itemSelectionChanged")});
    });

    QListView_SIGNALS
  }
};
