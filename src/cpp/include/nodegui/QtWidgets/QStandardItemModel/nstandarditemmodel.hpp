#pragma once
#include <QStandardItemModel>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "QtWidgets/QStandardItem/qstandarditem_wrap.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NStandardItemModel : public QStandardItemModel,
                                      public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QStandardItemModel)
 public:
  using QStandardItemModel::QStandardItemModel;  // inherit all constructors of
                                                 // QStandardItemModel
  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS

    QObject::connect(
        this, &QStandardItemModel::itemChanged, [=](QStandardItem* item) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto value = QStandardItemWrap::constructor.New(
              {Napi::External<QStandardItem>::New(env, item),
               Napi::Boolean::New(env, true)});
          this->emitOnNode.Call({Napi::String::New(env, "itemChanged"), value});
        });
  }
  // Qt Connects: Implement all signal connects here
};
