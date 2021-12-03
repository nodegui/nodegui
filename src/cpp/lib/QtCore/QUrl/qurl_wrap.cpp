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

       InstanceMethod("adjusted", &QUrlWrap::adjusted),
       InstanceMethod("authority", &QUrlWrap::authority),
       InstanceMethod("clear", &QUrlWrap::clear),
       InstanceMethod("errorString", &QUrlWrap::errorString),
       InstanceMethod("fileName", &QUrlWrap::fileName),
       InstanceMethod("fragment", &QUrlWrap::fragment),
       InstanceMethod("hasFragment", &QUrlWrap::hasFragment),
       InstanceMethod("hasQuery", &QUrlWrap::hasQuery),
       InstanceMethod("host", &QUrlWrap::host),
       InstanceMethod("isEmpty", &QUrlWrap::isEmpty),
       InstanceMethod("isLocalFile", &QUrlWrap::isLocalFile),
       InstanceMethod("isParentOf", &QUrlWrap::isParentOf),
       InstanceMethod("isRelative", &QUrlWrap::isRelative),
       InstanceMethod("isValid", &QUrlWrap::isValid),
       InstanceMethod("matches", &QUrlWrap::matches),
       InstanceMethod("password", &QUrlWrap::password),
       InstanceMethod("path", &QUrlWrap::path),
       InstanceMethod("port", &QUrlWrap::port),
       InstanceMethod("query", &QUrlWrap::query),
       InstanceMethod("resolved", &QUrlWrap::resolved),
       InstanceMethod("scheme", &QUrlWrap::scheme),
       InstanceMethod("setAuthority", &QUrlWrap::setAuthority),
       InstanceMethod("setFragment", &QUrlWrap::setFragment),
       InstanceMethod("setHost", &QUrlWrap::setHost),
       InstanceMethod("setPassword", &QUrlWrap::setPassword),
       InstanceMethod("setPath", &QUrlWrap::setPath),
       InstanceMethod("setPort", &QUrlWrap::setPort),
       InstanceMethod("setQuery", &QUrlWrap::setQuery),
       InstanceMethod("setScheme", &QUrlWrap::setScheme),
       //  InstanceMethod("setUrl",&QUrlWrap::setUrl),
       InstanceMethod("setUserInfo", &QUrlWrap::setUserInfo),
       InstanceMethod("setUserName", &QUrlWrap::setUserName),
       InstanceMethod("swap", &QUrlWrap::swap),
       InstanceMethod("toDisplayString", &QUrlWrap::toDisplayString),
       InstanceMethod("toLocalFile", &QUrlWrap::toLocalFile),
       InstanceMethod("toString_withOpts", &QUrlWrap::toString),
       InstanceMethod("url", &QUrlWrap::url),
       InstanceMethod("userInfo", &QUrlWrap::userInfo),
       InstanceMethod("userName", &QUrlWrap::userName),
       StaticMethod("fromLocalFile", &StaticQUrlWrapMethods::fromLocalFile),
       StaticMethod("fromUserInput", &StaticQUrlWrapMethods::fromUserInput),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QUrlWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QUrlWrap::QUrlWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QUrlWrap>(info) {
  Napi::Env env = info.Env();

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

Napi::Value QUrlWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString url = this->instance->toString();
  return Napi::Value::From(env, url.toStdString());
}

Napi::Value StaticQUrlWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QUrl url = variant->value<QUrl>();
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(url))});
  return instance;
}

// Additional methods

Napi::Value QUrlWrap::adjusted(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::FormattingOptions input0 =
      (QUrl::FormattingOptions)info[0].As<Napi::Number>().Int32Value();

  QUrl ret = this->instance->adjusted(input0);
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(ret))});
  return instance;
}

Napi::Value QUrlWrap::authority(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env,
                           this->instance->authority(input0).toStdString());
}

Napi::Value QUrlWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QUrlWrap::errorString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, this->instance->errorString().toStdString());
}

Napi::Value QUrlWrap::fileName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->fileName(input0).toStdString());
}

Napi::Value QUrlWrap::fragment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->fragment(input0).toStdString());
}

Napi::Value QUrlWrap::hasFragment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasFragment());
}

Napi::Value QUrlWrap::hasQuery(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasQuery());
}

Napi::Value QUrlWrap::host(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->host(input0).toStdString());
}

Napi::Value QUrlWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isEmpty());
}

Napi::Value QUrlWrap::isLocalFile(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isLocalFile());
}

Napi::Value QUrlWrap::isParentOf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QUrlWrap* wrap0_1 = Napi::ObjectWrap<QUrlWrap>::Unwrap(wrap0_0);
  QUrl* input0 = wrap0_1->getInternalInstance();
  return Napi::Boolean::New(env, this->instance->isParentOf(*input0));
}

Napi::Value QUrlWrap::isRelative(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isRelative());
}

Napi::Value QUrlWrap::isValid(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isValid());
}

Napi::Value QUrlWrap::matches(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QUrlWrap* wrap0_1 = Napi::ObjectWrap<QUrlWrap>::Unwrap(wrap0_0);
  QUrl* input0 = wrap0_1->getInternalInstance();
  QUrl::FormattingOptions input1 =
      (QUrl::FormattingOptions)info[1].As<Napi::Number>().Int32Value();
  return Napi::Boolean::New(env, this->instance->matches(*input0, input1));
}

Napi::Value QUrlWrap::password(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->password(input0).toStdString());
}

Napi::Value QUrlWrap::path(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->path(input0).toStdString());
}

Napi::Value QUrlWrap::port(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int input0 = info[0].As<Napi::Number>().Int32Value();
  return Napi::Number::New(env, this->instance->port(input0));
}

Napi::Value QUrlWrap::query(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->query(input0).toStdString());
}

Napi::Value QUrlWrap::resolved(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QUrlWrap* wrap0_1 = Napi::ObjectWrap<QUrlWrap>::Unwrap(wrap0_0);
  QUrl* input0 = wrap0_1->getInternalInstance();

  QUrl ret = this->instance->resolved(*input0);
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(ret))});
  return instance;
}

Napi::Value QUrlWrap::scheme(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, this->instance->scheme().toStdString());
}

Napi::Value QUrlWrap::setAuthority(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setAuthority(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setFragment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setFragment(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setHost(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setHost(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setPassword(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setPassword(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setPath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setPath(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setPort(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int input0 = info[0].As<Napi::Number>().Int32Value();
  this->instance->setPort(input0);
  return env.Null();
}

Napi::Value QUrlWrap::setQuery(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setQuery(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setScheme(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  this->instance->setScheme(input0);
  return env.Null();
}

Napi::Value QUrlWrap::setUrl(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setUrl(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setUserInfo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setUserInfo(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::setUserName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QUrl::ParsingMode input1 =
      static_cast<QUrl::ParsingMode>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setUserName(input0, input1);
  return env.Null();
}

Napi::Value QUrlWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QUrlWrap* wrap0_1 = Napi::ObjectWrap<QUrlWrap>::Unwrap(wrap0_0);
  QUrl* input0 = wrap0_1->getInternalInstance();
  this->instance->swap(*input0);
  return env.Null();
}

Napi::Value QUrlWrap::toDisplayString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::FormattingOptions input0 =
      (QUrl::FormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(
      env, this->instance->toDisplayString(input0).toStdString());
}

Napi::Value QUrlWrap::toLocalFile(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, this->instance->toLocalFile().toStdString());
}

Napi::Value QUrlWrap::toString_withOpts(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::FormattingOptions input0 =
      (QUrl::FormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->toString(input0).toStdString());
}

Napi::Value QUrlWrap::url(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::FormattingOptions input0 =
      (QUrl::FormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->url(input0).toStdString());
}

Napi::Value QUrlWrap::userInfo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->userInfo(input0).toStdString());
}

Napi::Value QUrlWrap::userName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QUrl::ComponentFormattingOptions input0 =
      (QUrl::ComponentFormattingOptions)info[0].As<Napi::Number>().Int32Value();
  return Napi::String::New(env, this->instance->userName(input0).toStdString());
}

// Static Methods here
Napi::Value StaticQUrlWrapMethods::fromLocalFile(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());

  QUrl ret = QUrl::fromLocalFile(input0);
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(ret))});
  return instance;
}

Napi::Value StaticQUrlWrapMethods::fromUserInput(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    QString input0 =
        QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
    QUrl ret = QUrl::fromUserInput(input0);
    auto instance = QUrlWrap::constructor.New(
        {Napi::External<QUrl>::New(env, new QUrl(ret))});
    return instance;
  }
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  QString input1 =
      QString::fromStdString(info[1].As<Napi::String>().Utf8Value());
  QUrl::UserInputResolutionOptions input2 =
      (QUrl::UserInputResolutionOptions)info[2].As<Napi::Number>().Int32Value();

  QUrl ret = QUrl::fromUserInput(input0, input1, input2);
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(ret))});
  return instance;
}
