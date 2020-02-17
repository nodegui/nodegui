#include "QtGui/QFontDatabase/qfontdatabase_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QFontDatabaseWrap::constructor;

Napi::Object QFontDatabaseWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFontDatabase";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("bold", &QFontDatabaseWrap::bold),
       InstanceMethod("italic", &QFontDatabaseWrap::italic),
       InstanceMethod("weight", &QFontDatabaseWrap::weight),
       InstanceMethod("families", &QFontDatabaseWrap::families),
       StaticMethod("addApplicationFont",
                    &StaticQFontDatabaseWrapMethods::addApplicationFont),
       StaticMethod("removeApplicationFont",
                    &StaticQFontDatabaseWrapMethods::removeApplicationFont),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QFontDatabaseWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QFontDatabaseWrap::QFontDatabaseWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFontDatabaseWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance = std::make_unique<QFontDatabase>();
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QFontDatabase* QFontDatabaseWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QFontDatabaseWrap::families(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int writingSystem = 0;
  if (info.Length() == 1) {
    writingSystem = info[0].As<Napi::Number>().Int32Value();
  }
  QStringList families = this->instance->families(
      static_cast<QFontDatabase::WritingSystem>(writingSystem));
  Napi::Array familiesNapi = Napi::Array::New(env, families.size());
  for (int i = 0; i < families.size(); i++) {
    familiesNapi[i] = Napi::String::New(env, families[i].toStdString());
  }

  return familiesNapi;
}

Napi::Value QFontDatabaseWrap::bold(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string family = info[0].As<Napi::String>().Utf8Value();
  std::string style = info[1].As<Napi::String>().Utf8Value();
  bool result = this->instance->bold(QString::fromUtf8(family.c_str()),
                                     QString::fromUtf8(style.c_str()));
  return Napi::Value::From(env, result);
}

Napi::Value QFontDatabaseWrap::italic(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string family = info[0].As<Napi::String>().Utf8Value();
  std::string style = info[1].As<Napi::String>().Utf8Value();
  bool result = this->instance->italic(QString::fromUtf8(family.c_str()),
                                       QString::fromUtf8(style.c_str()));
  return Napi::Value::From(env, result);
}

Napi::Value QFontDatabaseWrap::weight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string family = info[0].As<Napi::String>().Utf8Value();
  std::string style = info[1].As<Napi::String>().Utf8Value();
  int result = this->instance->weight(QString::fromUtf8(family.c_str()),
                                      QString::fromUtf8(style.c_str()));
  return Napi::Value::From(env, result);
}

Napi::Value StaticQFontDatabaseWrapMethods::addApplicationFont(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string fileName = info[0].As<Napi::String>().Utf8Value();
  int id =
      QFontDatabase::addApplicationFont(QString::fromUtf8(fileName.c_str()));
  return Napi::Value::From(env, id);
}

Napi::Value StaticQFontDatabaseWrapMethods::removeApplicationFont(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int id = info[0].As<Napi::Number>().Int32Value();
  bool result = QFontDatabase::removeApplicationFont(id);
  return Napi::Value::From(env, result);
}
