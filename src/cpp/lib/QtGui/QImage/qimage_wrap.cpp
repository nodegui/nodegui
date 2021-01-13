#include "QtGui/QImage/qimage_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"

Napi::FunctionReference QImageWrap::constructor;

Napi::Object QImageWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QImage";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("allGray", &QImageWrap::allGray),
       InstanceMethod("bitPlaneCount", &QImageWrap::bitPlaneCount),
       InstanceMethod("bytesPerLine", &QImageWrap::bytesPerLine),
       InstanceMethod("cacheKey", &QImageWrap::cacheKey),
       InstanceMethod("convertTo", &QImageWrap::convertTo),
       InstanceMethod("convertToFormat", &QImageWrap::convertToFormat),
       InstanceMethod("copy", &QImageWrap::copy),
       InstanceMethod("createAlphaMask", &QImageWrap::createAlphaMask),
       InstanceMethod("createHeuristicMask", &QImageWrap::createHeuristicMask),
       InstanceMethod("depth", &QImageWrap::depth),
       InstanceMethod("devicePixelRatio", &QImageWrap::devicePixelRatio),
       InstanceMethod("dotsPerMeterX", &QImageWrap::dotsPerMeterX),
       InstanceMethod("dotsPerMeterY", &QImageWrap::dotsPerMeterY),
       InstanceMethod("fill", &QImageWrap::fill),
       InstanceMethod("format", &QImageWrap::format),
       InstanceMethod("hasAlphaChannel", &QImageWrap::hasAlphaChannel),
       InstanceMethod("height", &QImageWrap::height),
       InstanceMethod("invertPixels", &QImageWrap::invertPixels),
       InstanceMethod("isGrayscale", &QImageWrap::isGrayscale),
       InstanceMethod("isNull", &QImageWrap::isNull),
       InstanceMethod("load", &QImageWrap::load),
       InstanceMethod("loadFromData", &QImageWrap::loadFromData),
       InstanceMethod("mirrored", &QImageWrap::mirrored),
       InstanceMethod("offset", &QImageWrap::offset),
       InstanceMethod("pixelColor", &QImageWrap::pixelColor),
       InstanceMethod("pixelIndex", &QImageWrap::pixelIndex),
       InstanceMethod("rect", &QImageWrap::rect),
       InstanceMethod("reinterpretAsFormat", &QImageWrap::reinterpretAsFormat),
       InstanceMethod("save", &QImageWrap::save),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QImageWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QImageWrap::QImageWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QImageWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = std::make_unique<QImage>();
  } else if (info.Length() == 1 && info[0].IsString()) {
    QString filename(info[0].As<Napi::String>().Utf8Value().c_str());
    this->instance = std::make_unique<QImage>(filename);
  } else if (info.Length() == 1 && info[0].IsExternal()) {
    this->instance =
        std::unique_ptr<QImage>(info[0].As<Napi::External<QImage>>().Data());
  } else if (info.Length() == 3) {
    int32_t width = info[0].As<Napi::Number>();
    int32_t height = info[1].As<Napi::Number>();
    QImage::Format format =
        static_cast<QImage::Format>(info[2].As<Napi::Number>().Int32Value());
    this->instance = std::make_unique<QImage>(width, height, format);
  } else if (info.Length() == 2) {
    QSizeWrap* size =
        Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>());
    QImage::Format format =
        static_cast<QImage::Format>(info[1].As<Napi::Number>().Int32Value());
    this->instance =
        std::make_unique<QImage>(*(size->getInternalInstance()), format);
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QImageWrap::~QImageWrap() { this->instance.reset(); }
QImage* QImageWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QImageWrap::allGray(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Boolean::New(env, instance->allGray());
}

Napi::Value QImageWrap::bitPlaneCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, instance->bitPlaneCount());
}

Napi::Value QImageWrap::bytesPerLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, instance->bytesPerLine());
}

Napi::Value QImageWrap::cacheKey(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, instance->cacheKey());
}

void QImageWrap::convertTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QImage::Format format =
      static_cast<QImage::Format>(info[0].As<Napi::Number>().Int32Value());
  Qt::ImageConversionFlag conversionFlags =
      static_cast<Qt::ImageConversionFlag>(
          info[1].As<Napi::Number>().Int32Value());
  this->instance->convertTo(format, conversionFlags);
}

Napi::Value QImageWrap::convertToFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QImage::Format format =
      static_cast<QImage::Format>(info[0].As<Napi::Number>().Int32Value());
  Qt::ImageConversionFlag conversionFlags =
      static_cast<Qt::ImageConversionFlag>(
          info[1].As<Napi::Number>().Int32Value());
  auto img = this->instance->convertToFormat(format, conversionFlags);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::copy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    QRect* rect =
        Napi::ObjectWrap<QRectWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    QImage img = this->instance->copy(*rect);
    auto instance = QImageWrap::constructor.New(
        {Napi::External<QImage>::New(env, new QImage(img))});
    return instance;
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();
  int64_t width = info[2].As<Napi::Number>();
  int64_t height = info[3].As<Napi::Number>();
  QImage img = this->instance->copy(x, y, width, height);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::createAlphaMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::ImageConversionFlags flags = static_cast<Qt::ImageConversionFlags>(
      info[0].As<Napi::Number>().Int32Value());
  QImage img = this->instance->createAlphaMask(flags);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::createHeuristicMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool clipTight = info[0].As<Napi::Boolean>();
  QImage img = this->instance->createHeuristicMask(clipTight);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  img.save(QString("test.png"));
  return instance;
}

Napi::Value QImageWrap::depth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, instance->depth());
  ;
}

Napi::Value QImageWrap::devicePixelRatio(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, instance->devicePixelRatio());
  ;
}

Napi::Value QImageWrap::dotsPerMeterX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, instance->dotsPerMeterX());
  ;
}

Napi::Value QImageWrap::dotsPerMeterY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, instance->dotsPerMeterY());
  ;
}

void QImageWrap::fill(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info[0].IsObject()) {
    QColor* color =
        Napi::ObjectWrap<QColorWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    this->instance->fill(*color);
    return;
  }

  int32_t color = info[0].As<Napi::Number>();
  this->instance->fill(static_cast<Qt::GlobalColor>(color));
}

Napi::Value QImageWrap::format(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->format());
}

Napi::Value QImageWrap::hasAlphaChannel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->hasAlphaChannel());
}

Napi::Value QImageWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->height());
}

void QImageWrap::invertPixels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QImage::InvertMode mode =
      static_cast<QImage::InvertMode>(info[0].As<Napi::Number>().Int32Value());
  this->instance->invertPixels(mode);
}

Napi::Value QImageWrap::isGrayscale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isGrayscale());
}

Napi::Value QImageWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QImageWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QString fileName = QString(info[0].As<Napi::String>().Utf8Value().c_str());
  if (info.Length() == 2 && !info[1].IsNull()) {
    std::string format = info[1].As<Napi::String>().Utf8Value();
    return Napi::Boolean::New(env,
                              this->instance->load(fileName, format.c_str()));
  }

  return Napi::Boolean::New(env, this->instance->load(fileName));
}

Napi::Value QImageWrap::loadFromData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Buffer<uchar> buffer = info[0].As<Napi::Buffer<uchar>>();
  if (info.Length() == 2 && !info[1].IsNull()) {
    std::string format = info[1].As<Napi::String>().Utf8Value();
    return Napi::Boolean::New(
        env, this->instance->loadFromData(buffer.Data(), buffer.Length(),
                                          format.c_str()));
  }

  return Napi::Boolean::New(
      env, this->instance->loadFromData(buffer.Data(), buffer.Length()));
}

Napi::Value QImageWrap::mirrored(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool horizontal = info[0].As<Napi::Boolean>();
  bool vertical = info[1].As<Napi::Boolean>();

  QImage img = this->instance->mirrored(horizontal, vertical);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::offset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPoint point = this->instance->offset();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(point))});
  return instance;
}

Napi::Value QImageWrap::pixelColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    QPoint* point =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();

    QColor color = this->instance->pixelColor(*point);
    auto instance = QColorWrap::constructor.New(
        {Napi::External<QColor>::New(env, new QColor(color))});
    return instance;
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();

  QColor color = this->instance->pixelColor(x, y);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QImageWrap::pixelIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    QPoint* point =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();

    return Napi::Number::New(env, this->instance->pixelIndex(*point));
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();
  return Napi::Number::New(env, this->instance->pixelIndex(x, y));
}

Napi::Value QImageWrap::rect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRect rect = this->instance->rect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QImageWrap::reinterpretAsFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QImage::Format format =
      static_cast<QImage::Format>(info[0].As<Napi::Number>().Int32Value());
  return Napi::Boolean::New(env, this->instance->reinterpretAsFormat(format));
}

Napi::Value QImageWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QString fileName(info[0].As<Napi::String>().Utf8Value().c_str());
  Napi::Value format = info[1];
  int32_t quality = info[2].As<Napi::Number>();

  return Napi::Boolean::New(
      env, this->instance->save(
               fileName,
               format.IsNull() ? nullptr
                               : format.As<Napi::String>().Utf8Value().c_str(),
               quality));
}
