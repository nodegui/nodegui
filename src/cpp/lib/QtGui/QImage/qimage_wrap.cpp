#include "QtGui/QImage/qimage_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QSize/qsize_wrap.h"

Napi::FunctionReference QImageWrap::constructor;

Napi::Object QImageWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QImage";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("allGray", &QImageWrap::allGray),
                   InstanceMethod("bitPlaneCount", &QImageWrap::bitPlaneCount),
                   InstanceMethod("bytesPeerLine", &QImageWrap::bytesPeerLine),
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
  } else if (info.Length() == 1) {
    QString filename(info[0].As<Napi::String>().Utf8Value().c_str());
    this->instance = std::make_unique<QImage>(filename);
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

Napi::Value QImageWrap::bytesPeerLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Number::New(env, instance->bytesPerLine());
}