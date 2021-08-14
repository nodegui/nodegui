#include "QtCore/QVariant/qvariant_wrap.h"

#include "Extras/Utils/nutils.h"

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
                   InstanceMethod("toStringList", &QVariantWrap::toStringList),
                   StaticMethod("convertToQVariant",
                                &StaticQVariantWrapMethods::convertToQVariant),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QVariantWrap)});
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
    this->instance =
        QSharedPointer<QVariant>(info[0].As<Napi::External<QVariant>>().Data());
  } else {
    this->instance = QSharedPointer<QVariant>(new QVariant());
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
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
Napi::Value QVariantWrap::toStringList(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QStringList value = this->instance->toStringList();
  Napi::Array result = Napi::Array::New(env, value.size());
  for (int i = 0; i < value.size(); i++) {
    result[i] = Napi::String::New(env, value[i].toStdString());
  }
  return result;
}

Napi::Value StaticQVariantWrapMethods::convertToQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Value value = info[0];
  QVariant* variant = extrautils::convertToQVariant(env, value);
  // Use the variant from extrautils::convertToQVariant function as is and do
  // not create a copy to prevent memory leak
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, variant)});
  return instance;
}
