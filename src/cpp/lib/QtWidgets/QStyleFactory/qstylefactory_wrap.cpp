#include <nodegui/Extras/Utils/nutils.h>

#include <QStyleFactory>

#include "QtGui/QStyle/qstyle_wrap.h"

namespace QStyleFactoryWrap {

Napi::Value create(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String key = info[0].As<Napi::String>();

  QStyle* style =
      QStyleFactory::create(QString::fromStdString(key.Utf8Value()));
  if (!style) {
    return env.Null();
  }
  return QStyleWrap::constructor.New({Napi::External<QStyle>::New(env, style)});
}

Napi::Value keys(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QStringList keys = QStyleFactory::keys();
  Napi::Array keysNapi = Napi::Array::New(env, keys.size());
  for (int i = 0; i < keys.size(); i++) {
    keysNapi[i] = Napi::String::New(env, keys[i].toStdString());
  }
  return keysNapi;
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
  exports.Set("QStyleFactory_create", Napi::Function::New<create>(env));
  exports.Set("QStyleFactory_keys", Napi::Function::New<keys>(env));
  return exports;
}
}  // namespace QStyleFactoryWrap