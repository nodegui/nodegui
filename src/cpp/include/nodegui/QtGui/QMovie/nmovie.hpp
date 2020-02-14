#pragma once
#include <QMovie>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "core/Events/eventwidget.h"
#include "core/Events/eventwidget_macro.h"

class DLL_EXPORT NMovie : public QMovie, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QMovie)
 public:
  using QMovie::QMovie;

  void connectSignalsToEventEmitter() {
    QOBJECT_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(this, &QMovie::error,
                     [=](QImageReader::ImageReaderError error) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "error"),
                            Napi::Number::New(env, static_cast<int>(error))});
                     });
    QObject::connect(this, &QMovie::finished, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "finished")});
    });
    QObject::connect(this, &QMovie::frameChanged, [=](int frameNumber) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "frameChanged"),
                             Napi::Number::New(env, frameNumber)});
    });
    QObject::connect(this, &QMovie::started, [=]() {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "started")});
    });
    QObject::connect(this, &QMovie::resized, [=](const QSize &size) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
          env, new QSize(size.width(), size.height()))});
      this->emitOnNode.Call({Napi::String::New(env, "resized"), instance});
    });
    QObject::connect(this, &QMovie::stateChanged,
                     [=](QMovie::MovieState state) {
                       Napi::Env env = this->emitOnNode.Env();
                       Napi::HandleScope scope(env);
                       this->emitOnNode.Call(
                           {Napi::String::New(env, "stateChanged"),
                            Napi::Number::New(env, static_cast<int>(state))});
                     });
    QObject::connect(this, &QMovie::updated, [=](const QRect &rect) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      auto instance = QRectWrap::constructor.New(
          {Napi::External<QRect>::New(env, new QRect(rect))});
      this->emitOnNode.Call({Napi::String::New(env, "updated"), instance});
    });
  }
};
