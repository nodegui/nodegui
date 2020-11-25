#pragma once

#include <QApplication>
#include <QTextToSpeech>
#include <QVoice>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT NQtexttospeech : public QTextToSpeech, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QTextToSpeech)
 public:
  using QTextToSpeech::QTextToSpeech;  // inherit all constructors of
                                       // QApplication
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS
    QObject::connect(this, &QTextToSpeech::pitchChanged, [=](double pitch) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "pitchChanged"),
                             Napi::Value::From(env, pitch)});
    });
    QObject::connect(this, &QTextToSpeech::rateChanged, [=](double rate) {
      Napi::Env env = this->emitOnNode.Env();
      Napi::HandleScope scope(env);
      this->emitOnNode.Call({Napi::String::New(env, "rateChanged"),
                             Napi::Value::From(env, rate)});
    });
    // QObject::connect(this, &QTextToSpeech::volumeChanged, [=](double volume) { //error to cast
    //   Napi::Env env = this->emitOnNode.Env();
    //   Napi::HandleScope scope(env);
    //   this->emitOnNode.Call({Napi::String::New(env, "volumeChanged"),
    //                          Napi::Value::From(env, volume)});
    // });
  }
};