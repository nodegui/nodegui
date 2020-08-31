#include "QtWidgets/QRawYUV/OpenGLDisplay.h"

#include <QCoreApplication>
#include <QOpenGLShader>
#include <QOpenGLTexture>
#include <QResizeEvent>

#define PROGRAM_VERTEX_ATTRIBUTE 0
#define PROGRAM_TEXCOORD_ATTRIBUTE 1

#define ATTRIB_VERTEX 0
#define ATTRIB_TEXTURE 1

struct OpenGLDisplay::OpenGLDisplayImpl {
  OpenGLDisplayImpl() : mBufYuv(nullptr), mFrameSize(0) {}

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

/*************************************************************************/

OpenGLDisplay::OpenGLDisplay(QWidget* parent)
    : QOpenGLWidget(parent), impl(new OpenGLDisplayImpl) {}

OpenGLDisplay::~OpenGLDisplay() {
  delete[] reinterpret_cast<unsigned char*>(impl->mBufYuv);
}

void OpenGLDisplay::InitDrawBuffer(unsigned bsize) {
  impl->mFrameSize = bsize;
  impl->mBufYuv = new unsigned char[bsize];
}

// void OpenGLDisplay::setFrameStyle(int style) {}
// int OpenGLDisplay::frameStyle() { return 0; }

void OpenGLDisplay::DisplayVideoFrame(unsigned char* data, int frameWidth,
                                      int frameHeight) {
  impl->mVideoW = frameWidth;
  impl->mVideoH = frameHeight;
  memcpy(impl->mBufYuv, data, impl->mFrameSize);
  update();
}

void OpenGLDisplay::initializeGL() {
  initializeOpenGLFunctions();

  glEnable(GL_DEPTH_TEST);

  /* Modern opengl rendering pipeline relies on shaders to handle incoming data.
   *  Shader: is a small function written in OpenGL Shading Language (GLSL).
   * GLSL is the language that makes up all OpenGL shaders.
   * The syntax of the specific GLSL language requires the reader to find
   * relevant information. */

  // Initialize the vertex shader object
  impl->mVShader = new QOpenGLShader(QOpenGLShader::Vertex, this);

  // Vertex shader source
  const char* vsrc =
      "attribute vec4 vertexIn; \
        attribute vec2 textureIn; \
        varying vec2 textureOut;  \
        void main(void)           \
        {                         \
            gl_Position = vertexIn; \
            textureOut = textureIn; \
        }";

  // Compile the vertex shader program
  bool bCompile = impl->mVShader->compileSourceCode(vsrc);
  if (!bCompile) {
    throw OpenGlException();
  }

  // Initialize the fragment shader function yuv converted to rgb
  impl->mFShader = new QOpenGLShader(QOpenGLShader::Fragment, this);

  // Fragment shader source code

#ifdef QT_OPENGL_ES_2
  const char* fsrc =
      "precision mediump float; \
    varying vec2 textureOut; \
        uniform sampler2D tex_y; \
        uniform sampler2D tex_u; \
        uniform sampler2D tex_v; \
        void main(void) \
        { \
            vec3 yuv; \
            vec3 rgb; \
            yuv.x = texture2D(tex_y, textureOut).r; \
            yuv.y = texture2D(tex_u, textureOut).r - 0.5; \
            yuv.z = texture2D(tex_v, textureOut).r - 0.5; \
            rgb = mat3( 1,       1,         1, \
                        0,       -0.39465,  2.03211, \
                        1.13983, -0.58060,  0) * yuv; \
            gl_FragColor = vec4(rgb, 1); \
        }";
#else
  const char* fsrc =
      "varying vec2 textureOut; \
    uniform sampler2D tex_y; \
    uniform sampler2D tex_u; \
    uniform sampler2D tex_v; \
    void main(void) \
    { \
        vec3 yuv; \
        vec3 rgb; \
        yuv.x = texture2D(tex_y, textureOut).r; \
        yuv.y = texture2D(tex_u, textureOut).r - 0.5; \
        yuv.z = texture2D(tex_v, textureOut).r - 0.5; \
        rgb = mat3( 1,       1,         1, \
                    0,       -0.39465,  2.03211, \
                    1.13983, -0.58060,  0) * yuv; \
        gl_FragColor = vec4(rgb, 1); \
    }";
#endif

  bCompile = impl->mFShader->compileSourceCode(fsrc);
  if (!bCompile) {
    throw OpenGlException();
  }

  // Create a shader program container
  impl->mShaderProgram = new QOpenGLShaderProgram(this);
  // Add the fragment shader to the program container
  impl->mShaderProgram->addShader(impl->mFShader);
  // Add a vertex shader to the program container
  impl->mShaderProgram->addShader(impl->mVShader);
  // Bind the property vertexIn to the specified location ATTRIB_VERTEX, this
  // property has a declaration in the vertex shader source
  impl->mShaderProgram->bindAttributeLocation("vertexIn", ATTRIB_VERTEX);
  // Bind the attribute textureIn to the specified location ATTRIB_TEXTURE, the
  // attribute has a declaration in the vertex shader source
  impl->mShaderProgram->bindAttributeLocation("textureIn", ATTRIB_TEXTURE);
  // Link all the shader programs added to
  impl->mShaderProgram->link();
  // activate all links
  impl->mShaderProgram->bind();
  // Read the position of the data variables tex_y, tex_u, tex_v in the shader,
  // the declaration of these variables can be seen in fragment shader source
  impl->textureUniformY = impl->mShaderProgram->uniformLocation("tex_y");
  impl->textureUniformU = impl->mShaderProgram->uniformLocation("tex_u");
  impl->textureUniformV = impl->mShaderProgram->uniformLocation("tex_v");

  // Vertex matrix
  static const GLfloat vertexVertices[] = {
      -1.0f, -1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f, 1.0f,
  };

  // Texture matrix
  static const GLfloat textureVertices[] = {
      0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
  };

  // Set the value of the vertex matrix of the attribute ATTRIB_VERTEX and
  // format
  glVertexAttribPointer(ATTRIB_VERTEX, 2, GL_FLOAT, 0, 0, vertexVertices);
  // Set the texture matrix value and format of the attribute ATTRIB_TEXTURE
  glVertexAttribPointer(ATTRIB_TEXTURE, 2, GL_FLOAT, 0, 0, textureVertices);
  // Enable the ATTRIB_VERTEX attribute data, the default is off
  glEnableVertexAttribArray(ATTRIB_VERTEX);
  // Enable the ATTRIB_TEXTURE attribute data, the default is off
  glEnableVertexAttribArray(ATTRIB_TEXTURE);

  // Create y, u, v texture objects respectively
  impl->mTextureY = new QOpenGLTexture(QOpenGLTexture::Target2D);
  impl->mTextureU = new QOpenGLTexture(QOpenGLTexture::Target2D);
  impl->mTextureV = new QOpenGLTexture(QOpenGLTexture::Target2D);
  impl->mTextureY->create();
  impl->mTextureU->create();
  impl->mTextureV->create();

  // Get the texture index value of the return y component
  impl->id_y = impl->mTextureY->textureId();
  // Get the texture index value of the returned u component
  impl->id_u = impl->mTextureU->textureId();
  // Get the texture index value of the returned v component
  impl->id_v = impl->mTextureV->textureId();

  glClearColor(0.3, 0.3, 0.3, 0.0);  // set the background color
  //    qDebug("addr=%x id_y = %d id_u=%d id_v=%d\n", this, impl->id_y,
  //    impl->id_u, impl->id_v);
}

void OpenGLDisplay::resizeGL(int w, int h) {
  if (h == 0)  // prevents being divided by zero
    h = 1;     // set the height to 1

  // Set the viewport
  glViewport(0, 0, w, h);
  update();
}

void OpenGLDisplay::paintGL() {
  // Load y data texture
  // Activate the texture unit GL_TEXTURE0
  glActiveTexture(GL_TEXTURE0);
  // Use the texture generated from y to generate texture
  glBindTexture(GL_TEXTURE_2D, impl->id_y);

  // Fixes abnormality with 174x100 yuv data
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
  glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
  glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
  glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);

  // Use the memory mBufYuv data to create a real y data texture
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, impl->mVideoW, impl->mVideoH, 0,
               GL_LUMINANCE, GL_UNSIGNED_BYTE, impl->mBufYuv);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Load u data texture
  glActiveTexture(GL_TEXTURE1);  // Activate texture unit GL_TEXTURE1
  glBindTexture(GL_TEXTURE_2D, impl->id_u);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, impl->mVideoW / 2,
               impl->mVideoH / 2, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE,
               (char*)impl->mBufYuv + impl->mVideoW * impl->mVideoH);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Load v data texture
  glActiveTexture(GL_TEXTURE2);  // Activate texture unit GL_TEXTURE2
  glBindTexture(GL_TEXTURE_2D, impl->id_v);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, impl->mVideoW / 2,
               impl->mVideoH / 2, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE,
               (char*)impl->mBufYuv + impl->mVideoW * impl->mVideoH * 5 / 4);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Specify y texture to use the new value can only use 0, 1, 2, etc. to
  // represent the index of the texture unit, this is the place where opengl is
  // not humanized
  // 0 corresponds to the texture unit GL_TEXTURE0 1 corresponds to the
  // texture unit GL_TEXTURE1 2 corresponds to the texture unit GL_TEXTURE2
  glUniform1i(impl->textureUniformY, 0);
  // Specify the u texture to use the new value
  glUniform1i(impl->textureUniformU, 1);
  // Specify v texture to use the new value
  glUniform1i(impl->textureUniformV, 2);
  // Use the vertex array way to draw graphics
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}
