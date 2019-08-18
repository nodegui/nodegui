#pragma once

#include <QPlainTextEdit>
#include "src/cpp/core/NodeWidget/nodewidget.h"

class NPlainTextEdit : public QPlainTextEdit, public NodeWidget
{
  NODEWIDGET_IMPLEMENTATIONS
public:
  using QPlainTextEdit::QPlainTextEdit; //inherit all constructors of QPlainTextEdit
};
