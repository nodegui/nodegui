#pragma once

#include <QFontDialog>

#include "Extras/Export/export.h"
#include "QtGui/QFont/qfont_wrap.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NFontDialog : public QFontDialog, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QFontDialog)
 public:
  using QFontDialog::QFontDialog;

  void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, &QFontDialog::currentFontChanged, [=](const QFont& font) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          auto instance = QFontWrap::constructor.New(
              {Napi::External<QFont>::New(env, new QFont(font))});
          this->emitOnNode.Call(
              {Napi::String::New(env, "currentFontChanged"), instance});
        });
    QObject::connect(this, &QFontDialog::fontSelected, [=](const QFont& font) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = QFontWrap::constructor.New(
          {Napi::External<QFont>::New(env, new QFont(font))});
      this->emitOnNode.Call({Napi::String::New(env, "fontSelected"), instance});
    });
  }
};
