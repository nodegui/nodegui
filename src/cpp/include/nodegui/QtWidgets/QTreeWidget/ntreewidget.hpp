#pragma once
#include <QTreeWidget>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NTreeWidget : public QTreeWidget, public NodeWidget {
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

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemClicked"), itemWrap, columnWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemChanged,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemChanged"), itemWrap, columnWrap});
        });

    QObject::connect(
        this, &QTreeWidget::currentItemChanged,
        [=](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto currentItemWrap =
              QTreeWidgetItemWrap::fromQTreeWidgetItem(env, current);
          auto previousItemWrap =
              QTreeWidgetItemWrap::fromQTreeWidgetItem(env, previous);

          this->emitOnNode.Call({Napi::String::New(env, "currentItemChanged"),
                                 currentItemWrap, previousItemWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemActivated,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemActivated"), itemWrap, columnWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemCollapsed, [=](QTreeWidgetItem* item) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemCollapsed"), itemWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemDoubleClicked,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call({Napi::String::New(env, "itemDoubleClicked"),
                                 itemWrap, columnWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemEntered,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemEntered"), itemWrap, columnWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemExpanded, [=](QTreeWidgetItem* item) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemExpanded"), itemWrap});
        });

    QObject::connect(
        this, &QTreeWidget::itemPressed,
        [=](QTreeWidgetItem* item, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);

          auto itemWrap = QTreeWidgetItemWrap::fromQTreeWidgetItem(env, item);
          auto columnWrap = Napi::Value::From(env, column);

          this->emitOnNode.Call(
              {Napi::String::New(env, "itemPressed"), itemWrap, columnWrap});
        });
  }
};