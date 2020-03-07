#pragma once
#include <QFileDialog>

#include "Extras/Export/export.h"
#include "QtWidgets/QDialog/qdialog_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NFileDialog : public QFileDialog, public NodeWidget {
 public:
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QFileDialog)
  using QFileDialog::QFileDialog;

  void connectSignalsToEventEmitter() {
    QDIALOG_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, &QFileDialog::currentChanged, [=](const QString &path) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "currentChanged"),
                                 Napi::String::New(env, path.toStdString())});
        });

    QObject::connect(
        this, &QFileDialog::currentUrlChanged, [=](const QUrl &url) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call(
              {Napi::String::New(env, "currentUrlChanged"),
               Napi::String::New(env, url.toString().toStdString())});
        });

    QObject::connect(this, &QFileDialog::directoryEntered,
                     [=](const QString &directory) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "directoryEntered"),
                            Napi::String::New(env, directory.toStdString())});
                     });

    QObject::connect(
        this, &QFileDialog::directoryUrlEntered, [=](const QUrl &directory) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call(
              {Napi::String::New(env, "directoryUrlEntered"),
               Napi::String::New(env, directory.toString().toStdString())});
        });
    QObject::connect(
        this, &QFileDialog::fileSelected, [=](const QString &file) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "fileSelected"),
                                 Napi::String::New(env, file.toStdString())});
        });
    QObject::connect(
        this, &QFileDialog::filesSelected, [=](const QStringList &selected) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          Napi::Array selectedNapi = Napi::Array::New(env, selected.size());
          for (int i = 0; i < selected.size(); i++) {
            selectedNapi[i] = Napi::String::New(env, selected[i].toStdString());
          }
          this->emitOnNode.Call(
              {Napi::String::New(env, "filesSelected"), selectedNapi});
        });

    QObject::connect(
        this, &QFileDialog::filterSelected, [=](const QString &filter) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "filterSelected"),
                                 Napi::String::New(env, filter.toStdString())});
        });

    QObject::connect(this, &QFileDialog::urlSelected, [=](const QUrl &url) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call(
          {Napi::String::New(env, "urlSelected"),
           Napi::String::New(env, url.toString().toStdString())});
    });

    QObject::connect(
        this, &QFileDialog::urlsSelected, [=](const QList<QUrl> &urls) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          Napi::Array urlsNapi = Napi::Array::New(env, urls.size());
          for (int i = 0; i < urls.size(); i++) {
            urlsNapi[i] =
                Napi::String::New(env, urls[i].toString().toStdString());
          }
          this->emitOnNode.Call(
              {Napi::String::New(env, "urlsSelected"), urlsNapi});
        });
  }
};
