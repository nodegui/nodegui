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

  virtual void connectSignalsToEventEmitter() {
    QLISTVIEW_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, &QListWidget::currentItemChanged,
        [=](QListWidgetItem* current, QListWidgetItem* previous) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto curInstance = QListWidgetItemWrap::constructor.New(
              {Napi::External<QListWidgetItem>::New(env, current),
               Napi::Boolean::New(env, true)});
          auto preInstance = QListWidgetItemWrap::constructor.New(
              {Napi::External<QListWidgetItem>::New(env, previous),
               Napi::Boolean::New(env, true)});
          this->emitOnNode.Call({Napi::String::New(env, "currentItemChanged"),
                                 curInstance, preInstance});
        });
    QObject::connect(
        this, &QListWidget::currentRowChanged, [=](int currentRow) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentRowChanged"),
                                 Napi::Number::New(env, currentRow)});
        });
    QObject::connect(this, &QListWidget::currentTextChanged,
                     [=](const QString& currentText) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "currentTextChanged"),
                            Napi::String::New(env, currentText.toStdString())});
                     });
    QObject::connect(this, &QListWidget::itemActivated,
                     [=](QListWidgetItem* item) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       auto instance = QListWidgetItemWrap::constructor.New(
                           {Napi::External<QListWidgetItem>::New(env, item),
                            Napi::Boolean::New(env, true)});
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "itemActivated"), instance});
                     });
    QObject::connect(this, &QListWidget::itemChanged,
                     [=](QListWidgetItem* item) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       auto instance = QListWidgetItemWrap::constructor.New(
                           {Napi::External<QListWidgetItem>::New(env, item),
                            Napi::Boolean::New(env, true)});
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "itemChanged"), instance});
                     });
    QObject::connect(this, &QListWidget::itemClicked,
                     [=](QListWidgetItem* item) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       auto instance = QListWidgetItemWrap::constructor.New(
                           {Napi::External<QListWidgetItem>::New(env, item),
                            Napi::Boolean::New(env, true)});
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "itemClicked"), instance});
                     });
    QObject::connect(
        this, &QListWidget::itemDoubleClicked, [=](QListWidgetItem* item) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance = QListWidgetItemWrap::constructor.New(
              {Napi::External<QListWidgetItem>::New(env, item),
               Napi::Boolean::New(env, true)});
          this->emitOnNode.Call(
              {Napi::String::New(env, "itemDoubleClicked"), instance});
        });
    QObject::connect(this, &QListWidget::itemEntered,
                     [=](QListWidgetItem* item) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       auto instance = QListWidgetItemWrap::constructor.New(
                           {Napi::External<QListWidgetItem>::New(env, item),
                            Napi::Boolean::New(env, true)});
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "itemEntered"), instance});
                     });
    QObject::connect(this, &QListWidget::itemPressed,
                     [=](QListWidgetItem* item) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       auto instance = QListWidgetItemWrap::constructor.New(
                           {Napi::External<QListWidgetItem>::New(env, item),
                            Napi::Boolean::New(env, true)});
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "itemPressed"), instance});
                     });
    QObject::connect(this, &QListWidget::itemSelectionChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "itemSelectionChanged")});
    });
  }
};
