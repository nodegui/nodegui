#pragma once

#include <QTextBrowser>

#include "Extras/Export/export.h"
#include "QtCore/QUrl/qurl_wrap.h"
#include "QtWidgets/QTextEdit/qtextedit_macro.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT NTextBrowser : public QTextBrowser, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTextBrowser)
 public:
  using QTextBrowser::QTextBrowser;  // inherit all constructors of QTextBrowser

  void connectSignalsToEventEmitter() {
    QTEXTEDIT_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QTextBrowser::anchorClicked, [=](const QUrl& link) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = QUrlWrap::constructor.New(
          {Napi::External<QUrl>::New(env, new QUrl(link))});
      this->emitOnNode.Call(
          {Napi::String::New(env, "anchorClicked"), instance});
    });
    QObject::connect(
        this, &QTextBrowser::backwardAvailable, [=](bool available) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "backwardAvailable"),
                                 Napi::Boolean::New(env, available)});
        });
    QObject::connect(
        this, &QTextBrowser::forwardAvailable, [=](bool available) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "forwardAvailable"),
                                 Napi::Boolean::New(env, available)});
        });
    QObject::connect(
        this, QOverload<const QString&>::of(&QTextBrowser::highlighted),
        [=](const QString& link) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "highlighted"),
                                 Napi::String::New(env, link.toStdString())});
        });
    QObject::connect(this, &QTextBrowser::historyChanged, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "historyChanged")});
    });
    QObject::connect(this, &QTextBrowser::sourceChanged, [=](const QUrl& src) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = QUrlWrap::constructor.New(
          {Napi::External<QUrl>::New(env, new QUrl(src))});
      this->emitOnNode.Call(
          {Napi::String::New(env, "sourceChanged"), instance});
    });
  }
};
