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
  Napi::HandleScope scope(env);

  // FIXME: use actual org name and app name
  this->instance = std::make_unique<QSettings>("test1", "test2");
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

Napi::Value QSettingsWrap::setValue(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QString key = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
  int value = info[1].As<Napi::Number>().Int32Value();

  this->instance.get()->setValue(key, value);
  return env.Null();
}

Napi::Value QSettingsWrap::value(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QString key = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());

  int result = this->instance.get()->value(key).toInt();
  return Napi::Number::From(env, result);
}

Napi::Value QSettingsWrap::sync(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance.get()->sync();
  return env.Null();
}

QSettings* QSettingsWrap::getInternalInstance() { return this->instance.get(); }

QSettingsWrap::~QSettingsWrap() { this->instance.reset(); }
