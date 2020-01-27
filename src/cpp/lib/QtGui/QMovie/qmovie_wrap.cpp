#include "QtGui/QMovie/qmovie_wrap.h"

#include <QBuffer>
#include <QByteArray>
#include <QDebug>

#include "Extras/Utils/nutils.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QMovieWrap::constructor;

Napi::Object QMovieWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMovie";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setFileName", &QMovieWrap::setFileName),
       InstanceMethod("fileName", &QMovieWrap::fileName),
       InstanceMethod("setFormat", &QMovieWrap::setFormat),
       InstanceMethod("format", &QMovieWrap::format),
       InstanceMethod("setScaledSize", &QMovieWrap::setScaledSize),
       InstanceMethod("start", &QMovieWrap::start),
       InstanceMethod("stop", &QMovieWrap::stop),
       InstanceMethod("setPaused", &QMovieWrap::setPaused),
       InstanceMethod("jumpToNextFrame", &QMovieWrap::jumpToNextFrame),
       InstanceMethod("jumpToFrame", &QMovieWrap::jumpToFrame),
       InstanceMethod("state", &QMovieWrap::state),
       InstanceMethod("currentFrameNumber", &QMovieWrap::currentFrameNumber),
       InstanceMethod("currentPixmap", &QMovieWrap::currentPixmap),
       InstanceMethod("loadFromData", &QMovieWrap::loadFromData),
       InstanceMethod("frameCount", &QMovieWrap::frameCount),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QMovieWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMovie* QMovieWrap::getInternalInstance() { return this->instance; }

QMovieWrap::~QMovieWrap() { extrautils::safeDelete(this->instance); }

QMovieWrap::QMovieWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMovieWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = new NMovie(info[0].As<Napi::External<NMovie>>().Data());
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QMovieWrap* parentWidgetWrap =
          Napi::ObjectWrap<QMovieWrap>::Unwrap(parentObject);
      this->instance = new NMovie(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NMovie();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->bufferDevice = QSharedPointer<QBuffer>(new QBuffer);
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QMovieWrap::setFileName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String fileName = info[0].As<Napi::String>();
  this->instance->setFileName(QString::fromStdString(fileName.Utf8Value()));
  return env.Null();
}

Napi::Value QMovieWrap::fileName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString fileName = this->instance->fileName();
  return Napi::Value::From(env, fileName.toStdString());
}

Napi::Value QMovieWrap::setFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String formatName = info[0].As<Napi::String>();
  std::string format = formatName.Utf8Value();
  QByteArray byteArray(format.c_str(), format.length());
  this->instance->setFormat(byteArray);
  return env.Null();
}

Napi::Value QMovieWrap::format(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QByteArray format = this->instance->format();
  return Napi::Value::From(env, format.toStdString());
}

Napi::Value QMovieWrap::setScaledSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object sizeObject = info[0].As<Napi::Object>();
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(sizeObject);
  this->instance->setScaledSize(*sizeWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QMovieWrap::start(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->start();
  return env.Null();
}

Napi::Value QMovieWrap::stop(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->stop();
  return env.Null();
}

Napi::Value QMovieWrap::setPaused(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean paused = info[0].As<Napi::Boolean>();
  this->instance->setPaused(paused.Value());
  return env.Null();
}

Napi::Value QMovieWrap::jumpToNextFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool jumped = this->instance->jumpToNextFrame();
  return Napi::Value::From(env, jumped);
}

Napi::Value QMovieWrap::jumpToFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number frameNo = info[0].As<Napi::Number>();
  bool jumped = this->instance->jumpToFrame(frameNo.Int32Value());
  return Napi::Value::From(env, jumped);
}

Napi::Value QMovieWrap::state(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QMovie::MovieState state = this->instance->state();
  return Napi::Value::From(env, static_cast<int>(state));
}

Napi::Value QMovieWrap::currentFrameNumber(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int currentFrameNumber = this->instance->currentFrameNumber();
  return Napi::Value::From(env, currentFrameNumber);
}

Napi::Value QMovieWrap::currentPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPixmap pixmap = this->instance->currentPixmap();
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(pixmap))});
  return instance;
}

Napi::Value QMovieWrap::loadFromData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Buffer<const char> buffer = info[0].As<Napi::Buffer<const char>>();
  QByteArray byteArray = QByteArray(buffer.Data(), buffer.Length());
  this->bufferDevice->setData(byteArray);
  this->instance->setDevice(bufferDevice.data());
  return env.Null();
}
Napi::Value QMovieWrap::frameCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int frameCount = this->instance->frameCount();
  return Napi::Value::From(env, frameCount);
}
