#pragma once
#include <QTextToSpeech>
#include <QVoice>

#include "Extras/Export/export.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class DLL_EXPORT Nqtexttospeech : public QTextToSpeech, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QTextToSpeech)
 public:
  // inherit all constructors of QTextToSpeech
  using QTextToSpeech::QTextToSpeech;
};
