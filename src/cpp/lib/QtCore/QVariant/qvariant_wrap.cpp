#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"

Napi::FunctionReference QVariantWrap::constructor;

Napi::Object QVariantWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QVariant";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("toString", &QVariantWrap::toString),
                   InstanceMethod("toInt", &QVariantWrap::toInt),
                   InstanceMethod("toDouble", &QVariantWrap::toDouble),
                   InstanceMethod("toBool", &QVariantWrap::toBool),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QVariant* QVariantWrap::getInternalInstance() { return this->instance.data(); }

QVariantWrap::QVariantWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QVariantWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Value value = info[0].As<Napi::Value>();
    this->instance =
        QSharedPointer<QVariant>(extrautils::convertToQVariant(env, value));
  } else {
    this->instance = QSharedPointer<QVariant>(new QVariant());
  }
  this->rawData = this->getInternalInstance();
}

Napi::Value QVariantWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString value = this->instance->value<QString>();
  return Napi::Value::From(env, value.toStdString());
}
Napi::Value QVariantWrap::toInt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = this->instance->value<int>();
  return Napi::Value::From(env, value);
}
Napi::Value QVariantWrap::toDouble(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  double value = this->instance->value<double>();
  return Napi::Value::From(env, value);
}
Napi::Value QVariantWrap::toBool(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool value = this->instance->value<bool>();
  return Napi::Value::From(env, value);
}
