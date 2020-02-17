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

Napi::Value QSettingsWrap::sync(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance.get()->sync();
  return env.Null();
}

QSettings* QSettingsWrap::getInternalInstance() { return this->instance.get(); }

QSettingsWrap::~QSettingsWrap() { this->instance.reset(); }
