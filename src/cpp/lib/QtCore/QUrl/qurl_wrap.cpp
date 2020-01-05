#include "QtCore/QUrl/qurl_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QUrlWrap::constructor;

Napi::Object QUrlWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QUrl";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setUrl", &QUrlWrap::setUrl),
       InstanceMethod("toString", &QUrlWrap::toString),
       StaticMethod("fromQVariant", &StaticQUrlWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QUrlWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QUrlWrap::QUrlWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QUrlWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 2) {
    std::string url = info[0].As<Napi::String>().Utf8Value();
    int parseMode = info[1].As<Napi::Number>().Int32Value();
    this->instance = std::make_unique<QUrl>(
        QString::fromStdString(url), static_cast<QUrl::ParsingMode>(parseMode));
  } else if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          std::unique_ptr<QUrl>(info[0].As<Napi::External<QUrl>>().Data());
    } else {
      std::string url = info[0].As<Napi::String>().Utf8Value();
      this->instance = std::make_unique<QUrl>(QString::fromStdString(url));
    }
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QUrl>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QUrlWrap::~QUrlWrap() { this->instance.reset(); }

QUrl* QUrlWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QUrlWrap::setUrl(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string url = info[0].As<Napi::String>().Utf8Value();
  this->instance->setUrl(QString::fromStdString(url));
  return env.Null();
}
Napi::Value QUrlWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString url = this->instance->toString();
  return Napi::Value::From(env, url.toStdString());
}

Napi::Value StaticQUrlWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QUrl url = variant->value<QUrl>();
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(url))});
  return instance;
}
