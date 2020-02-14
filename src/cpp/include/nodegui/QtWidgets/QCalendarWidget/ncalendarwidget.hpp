#pragma once
#include <QCalendarWidget>

#include "Extras/Export/export.h"
#include "QtCore/QDate/qdate_wrap.h"
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NCalendarWidget : public QCalendarWidget, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QCalendarWidget)
 public:
  // inherit all constructors of QCalendarWidget
  using QCalendarWidget::QCalendarWidget;

  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QWIDGET_SIGNALS
    QObject::connect(this, &QCalendarWidget::activated, [=](const QDate &date) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);

      auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
          env, new QDate(date.year(), date.month(), date.day()))});
      this->emitOnNode.Call({Napi::String::New(env, "activated"), instance});
    });
    QObject::connect(this, &QCalendarWidget::clicked, [=](const QDate &date) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);

      auto instance = QDateWrap::constructor.New({Napi::External<QDate>::New(
          env, new QDate(date.year(), date.month(), date.day()))});
      this->emitOnNode.Call({Napi::String::New(env, "clicked"), instance});
    });
    QObject::connect(
        this, &QCalendarWidget::currentPageChanged, [=](int year, int month) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentPageChanged"),
                                 Napi::Value::From(env, year),
                                 Napi::Value::From(env, month)});
        });
    QObject::connect(this, &QCalendarWidget::selectionChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "selectionChanged")});
    });
  }
};
