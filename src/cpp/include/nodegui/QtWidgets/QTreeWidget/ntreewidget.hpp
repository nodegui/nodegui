#pragma once

#include <QTreeWidget>

#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NTreeWidget : public QTreeWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTreeWidget)

 public:
  using QTreeWidget::QTreeWidget;  // inherit all constructors of QTreeWidget

  void connectSignalsToEventEmitter() {
    QABSTRACTSCROLLAREA_SIGNALS
    QObject::connect(this, &QTreeWidget::itemSelectionChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "itemSelectionChanged")});
    });

    QObject::connect(
        this, &QTreeWidget::itemClicked,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          Napi::Object itemWrap = QTreeWidgetItemWrap::constructor.New(
              {Napi::External<QTreeWidgetItem>::New(
                  env, new QTreeWidgetItem(*item))});

          this->emitOnNode.Call({Napi::String::New(env, "itemClicked"),
                                 itemWrap, Napi::Value::From(env, column)});
        });

    QObject::connect(
        this, &QTreeWidget::itemChanged,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          Napi::Object itemWrap = QTreeWidgetItemWrap::constructor.New(
              {Napi::External<QTreeWidgetItem>::New(
                  env, new QTreeWidgetItem(*item))});

          this->emitOnNode.Call({Napi::String::New(env, "itemChanged"),
                                 itemWrap, Napi::Value::From(env, column)});
        });
  }
};
