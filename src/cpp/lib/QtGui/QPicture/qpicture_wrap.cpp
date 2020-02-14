#include "QtGui/QPicture/qpicture_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QPictureWrap::constructor;

Napi::Object QPictureWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPicture";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setBoundingRect", &QPictureWrap::setBoundingRect),
       InstanceMethod("boundingRect", &QPictureWrap::boundingRect),
       InstanceMethod("isNull", &QPictureWrap::isNull),
       InstanceMethod("load", &QPictureWrap::load),
       InstanceMethod("save", &QPictureWrap::save),
       InstanceMethod("size", &QPictureWrap::size),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPictureWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPictureWrap::QPictureWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPictureWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = std::unique_ptr<QPicture>(
        info[0].As<Napi::External<QPicture>>().Data());
  } else {
    // --- regular cases ---
    if (info.Length() == 1) {
      int formatVersion = info[0].As<Napi::Number>().Int32Value();
      this->instance = std::make_unique<QPicture>(formatVersion);
    } else if (info.Length() == 0) {
      this->instance = std::make_unique<QPicture>();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPicture* QPictureWrap::getInternalInstance() { return this->instance.get(); }

QPictureWrap::~QPictureWrap() { this->instance.reset(); }

Napi::Value QPictureWrap::setBoundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object boundingRectObject = info[0].As<Napi::Object>();
  QRectWrap* boundingRectWrap =
      Napi::ObjectWrap<QRectWrap>::Unwrap(boundingRectObject);
  this->instance->setBoundingRect(*boundingRectWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QPictureWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QRect rect = this->instance->boundingRect();
  auto instance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QPictureWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isNull());
}

Napi::Value QPictureWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string fileName = info[0].As<Napi::String>().Utf8Value();
  bool success = this->instance->load(QString::fromUtf8(fileName.c_str()));
  return Napi::Boolean::New(env, success);
}

Napi::Value QPictureWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string fileName = info[0].As<Napi::String>().Utf8Value();
  bool success = this->instance->save(QString::fromUtf8(fileName.c_str()));
  return Napi::Boolean::New(env, success);
}

Napi::Value QPictureWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->size());
}
