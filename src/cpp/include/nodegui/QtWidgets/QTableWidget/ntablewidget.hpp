#pragma once
#include <QTableWidget>

#include "Extras/Export/export.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NTableWidget : public QTableWidget, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTableWidget)
  using QTableWidget::QTableWidget;
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QABSTRACTSCROLLAREA_SIGNALS
    QObject::connect(
        this, &QTableWidget::cellActivated, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellActivated"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::cellChanged, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellChanged"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::cellClicked, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellClicked"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::cellDoubleClicked, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellDoubleClicked"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::cellEntered, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellEntered"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::cellPressed, [=](int row, int column) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "cellPressed"),
                                 Napi::Number::New(env, row),
                                 Napi::Number::New(env, column)});
        });
    QObject::connect(
        this, &QTableWidget::currentCellChanged,
        [=](int currentRow, int currentColumn, int previousRow,
            int previousColumn) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentCellChanged"),
                                 Napi::Number::New(env, currentRow),
                                 Napi::Number::New(env, currentColumn),
                                 Napi::Number::New(env, previousRow),
                                 Napi::Number::New(env, previousColumn)});
        });
  }
};