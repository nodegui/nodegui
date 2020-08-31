#include "QtWidgets/QRawYUV/OpenGLDisplay.h"



#define PROGRAM_VERTEX_ATTRIBUTE 0
#define PROGRAM_TEXCOORD_ATTRIBUTE 1

#define ATTRIB_VERTEX 0
#define ATTRIB_TEXTURE 1

/*************************************************************************/

OpenGLDisplay::OpenGLDisplay(QWidget* parent): QOpenGLWidget(parent) {}

OpenGLDisplay::~OpenGLDisplay() {
  delete[] reinterpret_cast<unsigned char*>(this->mBufYuv);
}

void OpenGLDisplay::InitDrawBuffer(const unsigned width, const unsigned height) {
  this->mVideoW = width;
  this->mVideoH = height;
  const unsigned yuv_size = width * height * 3 / 2;
  this->mFrameSize = yuv_size;
  this->mBufYuv = new unsigned char[yuv_size];
}

// void OpenGLDisplay::setFrameStyle(int style) {}
// int OpenGLDisplay::frameStyle() { return 0; }

void OpenGLDisplay::DisplayVideoFrame(unsigned char* data) {
  memcpy(this->mBufYuv, data, this->mFrameSize);
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
  this->mVShader = new QOpenGLShader(QOpenGLShader::Vertex, this);

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
  bool bCompile = this->mVShader->compileSourceCode(vsrc);
  if (!bCompile) {
    throw OpenGlException();
  }

  // Initialize the fragment shader function yuv converted to rgb
  this->mFShader = new QOpenGLShader(QOpenGLShader::Fragment, this);

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

  bCompile = this->mFShader->compileSourceCode(fsrc);
  if (!bCompile) {
    throw OpenGlException();
  }

  // Create a shader program container
  this->mShaderProgram = new QOpenGLShaderProgram(this);
  // Add the fragment shader to the program container
  this->mShaderProgram->addShader(this->mFShader);
  // Add a vertex shader to the program container
  this->mShaderProgram->addShader(this->mVShader);
  // Bind the property vertexIn to the specified location ATTRIB_VERTEX, this
  // property has a declaration in the vertex shader source
  this->mShaderProgram->bindAttributeLocation("vertexIn", ATTRIB_VERTEX);
  // Bind the attribute textureIn to the specified location ATTRIB_TEXTURE, the
  // attribute has a declaration in the vertex shader source
  this->mShaderProgram->bindAttributeLocation("textureIn", ATTRIB_TEXTURE);
  // Link all the shader programs added to
  this->mShaderProgram->link();
  // activate all links
  this->mShaderProgram->bind();
  // Read the position of the data variables tex_y, tex_u, tex_v in the shader,
  // the declaration of these variables can be seen in fragment shader source
  this->textureUniformY = this->mShaderProgram->uniformLocation("tex_y");
  this->textureUniformU = this->mShaderProgram->uniformLocation("tex_u");
  this->textureUniformV = this->mShaderProgram->uniformLocation("tex_v");

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
  this->mTextureY = new QOpenGLTexture(QOpenGLTexture::Target2D);
  this->mTextureU = new QOpenGLTexture(QOpenGLTexture::Target2D);
  this->mTextureV = new QOpenGLTexture(QOpenGLTexture::Target2D);
  this->mTextureY->create();
  this->mTextureU->create();
  this->mTextureV->create();

  // Get the texture index value of the return y component
  this->id_y = this->mTextureY->textureId();
  // Get the texture index value of the returned u component
  this->id_u = this->mTextureU->textureId();
  // Get the texture index value of the returned v component
  this->id_v = this->mTextureV->textureId();

  glClearColor(0.3, 0.3, 0.3, 0.0);  // set the background color
  //    qDebug("addr=%x id_y = %d id_u=%d id_v=%d\n", this, this->id_y,
  //    this->id_u, this->id_v);
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
  glBindTexture(GL_TEXTURE_2D, this->id_y);

  // Fixes abnormality with 174x100 yuv data
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
  glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
  glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
  glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);

  // Use the memory mBufYuv data to create a real y data texture
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, this->mVideoW, this->mVideoH, 0,
               GL_LUMINANCE, GL_UNSIGNED_BYTE, this->mBufYuv);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Load u data texture
  glActiveTexture(GL_TEXTURE1);  // Activate texture unit GL_TEXTURE1
  glBindTexture(GL_TEXTURE_2D, this->id_u);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, this->mVideoW / 2,
               this->mVideoH / 2, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE,
               (char*)this->mBufYuv + this->mVideoW * this->mVideoH);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Load v data texture
  glActiveTexture(GL_TEXTURE2);  // Activate texture unit GL_TEXTURE2
  glBindTexture(GL_TEXTURE_2D, this->id_v);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, this->mVideoW / 2,
               this->mVideoH / 2, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE,
               (char*)this->mBufYuv + this->mVideoW * this->mVideoH * 5 / 4);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  // Specify y texture to use the new value can only use 0, 1, 2, etc. to
  // represent the index of the texture unit, this is the place where opengl is
  // not humanized
  // 0 corresponds to the texture unit GL_TEXTURE0 1 corresponds to the
  // texture unit GL_TEXTURE1 2 corresponds to the texture unit GL_TEXTURE2
  glUniform1i(this->textureUniformY, 0);
  // Specify the u texture to use the new value
  glUniform1i(this->textureUniformU, 1);
  // Specify v texture to use the new value
  glUniform1i(this->textureUniformV, 2);
  // Use the vertex array way to draw graphics
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}
