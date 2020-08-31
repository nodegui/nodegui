#ifndef OPENGLDISPLAY_H
#define OPENGLDISPLAY_H

#include <QException>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QScopedPointer>

#include <QCoreApplication>
#include <QOpenGLShader>
#include <QOpenGLTexture>
#include <QResizeEvent>

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

  void InitDrawBuffer(unsigned width, unsigned height);
  void DisplayVideoFrame(unsigned char *data);

 protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

 private:
  GLvoid* mBufYuv;
  int mFrameSize;

  QOpenGLShader* mVShader;
  QOpenGLShader* mFShader;
  QOpenGLShaderProgram* mShaderProgram;

  QOpenGLTexture* mTextureY;
  QOpenGLTexture* mTextureU;
  QOpenGLTexture* mTextureV;

  GLuint id_y, id_u, id_v;
  int textureUniformY, textureUniformU, textureUniformV;
  GLsizei mVideoW, mVideoH;
};

/***********************************************************************/

class DLL_EXPORT OpenGlException : public QException {
 public:
  void raise() const { throw *this; }
  OpenGlException *clone() const { return new OpenGlException(*this); }
};

#endif  // OPENGLDISPLAY_H
