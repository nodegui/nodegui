#include "QtCore/QSettings/qsettings_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSettingsWrap::constructor;

Napi::Object QSettingsWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSettings";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("sync", &QSettingsWrap::sync),
       InstanceMethod("setValue", &QSettingsWrap::setValue),
       InstanceMethod("value", &QSettingsWrap::value),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QSettingsWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QSettingsWrap::QSettingsWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSettingsWrap>(info) {
  Napi::Env env = info.Env();

  QString organization = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
  QString application = QString::fromUtf8(info[1].As<Napi::String>().Utf8Value().c_str());

  this->instance = std::make_unique<QSettings>(organization, application);
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QSettingsWrap::setValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QString key = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
  Napi::Value value = info[1];
  QVariant* valueVariant = extrautils::convertToQVariant(env, value);

  this->instance.get()->setValue(key, *valueVariant);
  delete valueVariant;
  return env.Null();
}

Napi::Value QSettingsWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QString key = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
  QVariant value = this->instance.get()->value(key);

  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(value))});
  return instance;
}

Napi::Value QSettingsWrap::sync(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance.get()->sync();
  return env.Null();
}

QSettings* QSettingsWrap::getInternalInstance() { return this->instance.get(); }

QSettingsWrap::~QSettingsWrap() { this->instance.reset(); }
