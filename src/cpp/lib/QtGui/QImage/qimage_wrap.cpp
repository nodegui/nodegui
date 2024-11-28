#include "QtGui/QImage/qimage_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"
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
       InstanceMethod("color", &QImageWrap::color),
       InstanceMethod("colorCount", &QImageWrap::colorCount),
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
       InstanceMethod("scaled", &QImageWrap::scaled),
       InstanceMethod("scaledToHeight", &QImageWrap::scaledToHeight),
       InstanceMethod("scaledToWidth", &QImageWrap::scaledToWidth),
       InstanceMethod("setAlphaChannel", &QImageWrap::setAlphaChannel),
       InstanceMethod("setColor", &QImageWrap::setColor),
       InstanceMethod("setColorCount", &QImageWrap::setColorCount),
       InstanceMethod("setDevicePixelRatio", &QImageWrap::setDevicePixelRatio),
       InstanceMethod("setDotsPerMeterX", &QImageWrap::setDotsPerMeterX),
       InstanceMethod("setDotsPerMeterY", &QImageWrap::setDotsPerMeterY),
       InstanceMethod("setOffset", &QImageWrap::setOffset),
       InstanceMethod("setPixel", &QImageWrap::setPixel),
       InstanceMethod("setPixelColor", &QImageWrap::setPixelColor),
       InstanceMethod("setText", &QImageWrap::setText),
       InstanceMethod("size", &QImageWrap::size),
       InstanceMethod("sizeInBytes", &QImageWrap::sizeInBytes),
       InstanceMethod("swap", &QImageWrap::swap),
       InstanceMethod("text", &QImageWrap::text),
       InstanceMethod("textKeys", &QImageWrap::textKeys),
       InstanceMethod("valid", &QImageWrap::valid),
       InstanceMethod("width", &QImageWrap::width),
       StaticMethod("fromQVariant", &StaticQImageWrapMethods::fromQVariant),
       StaticMethod("fromBuffer", &StaticQImageWrapMethods::fromBuffer),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QImageWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QImageWrap::QImageWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QImageWrap>(info) {
  Napi::Env env = info.Env();
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
  return Napi::Boolean::New(env, instance->allGray());
}

Napi::Value QImageWrap::bitPlaneCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->bitPlaneCount());
}

Napi::Value QImageWrap::bytesPerLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->bytesPerLine());
}

Napi::Value QImageWrap::cacheKey(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->cacheKey());
}

Napi::Value QImageWrap::color(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t i = info[0].As<Napi::Number>();
  return Napi::Number::New(env, instance->color(i));
}

Napi::Value QImageWrap::colorCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->colorCount());
}

void QImageWrap::convertTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QImage::Format format =
      static_cast<QImage::Format>(info[0].As<Napi::Number>().Int32Value());
  Qt::ImageConversionFlag conversionFlags =
      static_cast<Qt::ImageConversionFlag>(
          info[1].As<Napi::Number>().Int32Value());
  this->instance->convertTo(format, conversionFlags);
}

Napi::Value QImageWrap::convertToFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  Qt::ImageConversionFlags flags = static_cast<Qt::ImageConversionFlags>(
      info[0].As<Napi::Number>().Int32Value());
  QImage img = this->instance->createAlphaMask(flags);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::createHeuristicMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool clipTight = info[0].As<Napi::Boolean>();
  QImage img = this->instance->createHeuristicMask(clipTight);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  img.save(QString("test.png"));
  return instance;
}

Napi::Value QImageWrap::depth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->depth());
}

Napi::Value QImageWrap::devicePixelRatio(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->devicePixelRatio());
}

Napi::Value QImageWrap::dotsPerMeterX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->dotsPerMeterX());
  ;
}

Napi::Value QImageWrap::dotsPerMeterY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, instance->dotsPerMeterY());
}

void QImageWrap::fill(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  return Napi::Number::New(env, this->instance->format());
}

Napi::Value QImageWrap::hasAlphaChannel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasAlphaChannel());
}

Napi::Value QImageWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->height());
}

void QImageWrap::invertPixels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QImage::InvertMode mode =
      static_cast<QImage::InvertMode>(info[0].As<Napi::Number>().Int32Value());
  this->instance->invertPixels(mode);
}

Napi::Value QImageWrap::isGrayscale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isGrayscale());
}

Napi::Value QImageWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QImageWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  bool horizontal = info[0].As<Napi::Boolean>();
  bool vertical = info[1].As<Napi::Boolean>();

  QImage img = this->instance->mirrored(horizontal, vertical);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(img))});
  return instance;
}

Napi::Value QImageWrap::offset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPoint point = this->instance->offset();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(point))});
  return instance;
}

Napi::Value QImageWrap::pixelColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  QRect rect = this->instance->rect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QImageWrap::reinterpretAsFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QImage::Format format =
      static_cast<QImage::Format>(info[0].As<Napi::Number>().Int32Value());
  return Napi::Boolean::New(env, this->instance->reinterpretAsFormat(format));
}

Napi::Value QImageWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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

Napi::Value QImageWrap::scaled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 3) {
    QSize* size =
        Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    Qt::AspectRatioMode aspectRatioMode = static_cast<Qt::AspectRatioMode>(
        info[1].As<Napi::Number>().Int32Value());
    Qt::TransformationMode transformMode = static_cast<Qt::TransformationMode>(
        info[2].As<Napi::Number>().Int32Value());
    QImage image =
        this->instance->scaled(*size, aspectRatioMode, transformMode);
    auto instance = QImageWrap::constructor.New(
        {Napi::External<QImage>::New(env, new QImage(image))});
    return instance;
  }

  int64_t width = info[0].As<Napi::Number>();
  int64_t height = info[1].As<Napi::Number>();
  Qt::AspectRatioMode aspectRatioMode =
      static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  Qt::TransformationMode transformMode = static_cast<Qt::TransformationMode>(
      info[3].As<Napi::Number>().Int32Value());
  QImage image =
      this->instance->scaled(width, height, aspectRatioMode, transformMode);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(image))});
  return instance;
}

Napi::Value QImageWrap::scaledToHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t height = info[0].As<Napi::Number>();
  Qt::TransformationMode mode = static_cast<Qt::TransformationMode>(
      info[1].As<Napi::Number>().Int32Value());
  QImage image = this->instance->scaledToHeight(height, mode);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(image))});
  return instance;
}

Napi::Value QImageWrap::scaledToWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t width = info[0].As<Napi::Number>();
  Qt::TransformationMode mode = static_cast<Qt::TransformationMode>(
      info[1].As<Napi::Number>().Int32Value());
  QImage image = this->instance->scaledToWidth(width, mode);
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(image))});
  return instance;
}

void QImageWrap::setAlphaChannel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QImage* image =
      Napi::ObjectWrap<QImageWrap>::Unwrap(info[0].As<Napi::Object>())
          ->getInternalInstance();
  this->instance->setAlphaChannel(*image);
}

void QImageWrap::setColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t index = info[0].As<Napi::Number>();
  int64_t colorValue = info[1].As<Napi::Number>();
  this->instance->setColor(index, colorValue);
}

void QImageWrap::setColorCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t colorCount = info[0].As<Napi::Number>();
  this->instance->setColorCount(colorCount);
}

void QImageWrap::setDevicePixelRatio(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal scaleFactor = info[0].As<Napi::Number>();
  this->instance->setDevicePixelRatio(scaleFactor);
}

void QImageWrap::setDotsPerMeterX(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t x = info[0].As<Napi::Number>();
  this->instance->setDotsPerMeterX(x);
}

void QImageWrap::setDotsPerMeterY(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int64_t y = info[0].As<Napi::Number>();
  this->instance->setDotsPerMeterY(y);
}

void QImageWrap::setOffset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPoint* offset =
      Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
          ->getInternalInstance();
  this->instance->setOffset(*offset);
}

void QImageWrap::setPixel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 2) {
    QPoint* position =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    int64_t index_or_rgb = info[1].As<Napi::Number>();
    this->instance->setPixel(*position, index_or_rgb);
    return;
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();
  int64_t index_or_rgb = info[2].As<Napi::Number>();
  this->instance->setPixel(x, y, index_or_rgb);
}

void QImageWrap::setPixelColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 2) {
    QPoint* position =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    QColor* color =
        Napi::ObjectWrap<QColorWrap>::Unwrap(info[1].As<Napi::Object>())
            ->getInternalInstance();
    this->instance->setPixelColor(*position, *color);
    return;
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();
  QColor* color =
      Napi::ObjectWrap<QColorWrap>::Unwrap(info[2].As<Napi::Object>())
          ->getInternalInstance();
  this->instance->setPixelColor(x, y, *color);
}

void QImageWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString key(info[0].As<Napi::String>().Utf8Value().c_str());
  QString value(info[1].As<Napi::String>().Utf8Value().c_str());
  this->instance->setText(key, value);
}

Napi::Value QImageWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSize size = this->instance->size();
  auto instance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(size))});
  return instance;
}

Napi::Value QImageWrap::sizeInBytes(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->sizeInBytes());
}

void QImageWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QImage* image =
      Napi::ObjectWrap<QImageWrap>::Unwrap(info[0].As<Napi::Object>())
          ->getInternalInstance();
  this->instance->swap(*image);
}

Napi::Value QImageWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString key =
      this->instance->text(info[0].As<Napi::String>().Utf8Value().c_str());
  return Napi::String::New(env, key.toUtf8().constData());
}

Napi::Value QImageWrap::textKeys(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QStringList keys = this->instance->textKeys();
  Napi::Array js_array = Napi::Array::New(env, keys.size());

  for (int i = 0; i < keys.size(); i++) {
    Napi::Value value = Napi::String::New(env, keys.at(i).toUtf8().constData());
    js_array[i] = value;
  }

  return js_array;
}

Napi::Value QImageWrap::valid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    QPoint* point =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>())
            ->getInternalInstance();
    return Napi::Boolean::New(env, this->instance->valid(*point));
  }

  int64_t x = info[0].As<Napi::Number>();
  int64_t y = info[1].As<Napi::Number>();

  return Napi::Boolean::New(env, this->instance->valid(x, y));
}

Napi::Value QImageWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->width());
}

Napi::Value StaticQImageWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QImage image = variant->value<QImage>();
  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(image))});
  return instance;
}

Napi::Value StaticQImageWrapMethods::fromBuffer(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Buffer<uchar> buffer = info[0].As<Napi::Buffer<uchar>>();
  int32_t width = info[1].As<Napi::Number>();
  int32_t height = info[2].As<Napi::Number>();
  QImage::Format format = static_cast<QImage::Format>(info[3].As<Napi::Number>().Uint32Value());

  auto instance = QImageWrap::constructor.New(
      {Napi::External<QImage>::New(env, new QImage(QImage(buffer.Data(), width, height, format).copy()))});
  return instance;
}
