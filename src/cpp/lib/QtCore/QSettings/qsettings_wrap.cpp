#include "QtCore/QSettings/qsettings_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QSettingsWrap::constructor;

Napi::Object QSettingsWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSettings";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QSettingsWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QSettingsWrap::QSettingsWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSettingsWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object parentObject = info[0].As<Napi::Object>();
  QSettingsWrap* parentObjectWrap = Napi::ObjectWrap<QSettingsWrap>::Unwrap(parentObject);
  this->instance = std::make_unique<QSettings>(parentObjectWrap->getInternalInstance());
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QSettings* QSettingsWrap::getInternalInstance() { return this->instance.get(); }

QSettingsWrap::~QSettingsWrap() { this->instance.reset(); }
