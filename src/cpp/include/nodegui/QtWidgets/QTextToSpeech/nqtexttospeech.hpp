#pragma once

#include <QApplication>
#include <QTextToSpeech>
#include <QVoice>

#include "Extras/Export/export.h"
#include "QtCore/QObject/qobject_macro.h"
#include "napi.h"

class DLL_EXPORT NQtexttospeech : public QTextToSpeech, public EventWidget {
  Q_OBJECT
  EVENTWIDGET_IMPLEMENTATIONS(QTextToSpeech)
 public:
  using QTextToSpeech::QTextToSpeech;  // inherit all constructors of QApplication
  void connectSignalsToEventEmitter() {
    // Qt Connects: Implement all signal connects here
    QOBJECT_SIGNALS
  }
};