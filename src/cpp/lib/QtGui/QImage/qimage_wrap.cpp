#include "QtGui/QImage/qimage_wrap.h"

#include "Extras/Utils/nutils.h"
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
