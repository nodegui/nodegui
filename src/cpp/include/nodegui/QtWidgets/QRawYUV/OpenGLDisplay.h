#ifndef OPENGLDISPLAY_H
#define OPENGLDISPLAY_H

#include <QException>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QScopedPointer>

#include "Extras/Export/export.h"
#include "core/NodeWidget/nodewidget.h"

class DLL_EXPORT OpenGLDisplay : public QOpenGLWidget,
                                 public QOpenGLFunctions,
                                 public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(OpenGLDisplay)
 public:
  explicit OpenGLDisplay(QWidget *parent = nullptr);
  ~OpenGLDisplay();

  void InitDrawBuffer(unsigned bsize);
  void DisplayVideoFrame(unsigned char *data, int frameWidth, int frameHeight);
  // void setFrameStyle(int style);
  // int OpenGLDisplay::frameStyle();

 protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

 private:
  struct OpenGLDisplayImpl;
  QScopedPointer<OpenGLDisplayImpl> impl;
};

/***********************************************************************/

class DLL_EXPORT OpenGlException : public QException {
 public:
  void raise() const { throw *this; }
  OpenGlException *clone() const { return new OpenGlException(*this); }
};

#endif  // OPENGLDISPLAY_H
