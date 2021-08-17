#pragma once

#include <QColorDialog>

#include "Extras/Export/export.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NColorDialog : public QColorDialog, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QColorDialog)
 public:
  using QColorDialog::QColorDialog;

  virtual void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, &QColorDialog::colorSelected, [=](const QColor& color) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance = QColorWrap::constructor.New(
              {Napi::External<QColor>::New(env, new QColor(color))});
          this->emitOnNode.Call(
              {Napi::String::New(env, "colorSelected"), instance});
        });

    QObject::connect(
        this, &QColorDialog::currentColorChanged, [=](const QColor& color) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance = QColorWrap::constructor.New(
              {Napi::External<QColor>::New(env, new QColor(color))});
          this->emitOnNode.Call(
              {Napi::String::New(env, "currentColorChanged"), instance});
        });
  }
};
