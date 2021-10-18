#include "QtGui/QFont/qfont_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QFontWrap::constructor;

Napi::Object QFontWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFont";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setBold", &QFontWrap::setBold),
       InstanceMethod("bold", &QFontWrap::bold),
       InstanceMethod("setCapitalization", &QFontWrap::setCapitalization),
       InstanceMethod("capitalization", &QFontWrap::capitalization),
       InstanceMethod("setFamily", &QFontWrap::setFamily),
       InstanceMethod("family", &QFontWrap::family),
       InstanceMethod("setPixelSize", &QFontWrap::setPixelSize),
       InstanceMethod("setPointSize", &QFontWrap::setPointSize),
       InstanceMethod("pixelSize", &QFontWrap::pixelSize),
       InstanceMethod("pointSize", &QFontWrap::pointSize),
       InstanceMethod("setStretch", &QFontWrap::setStretch),
       InstanceMethod("stretch", &QFontWrap::stretch),
       InstanceMethod("setWeight", &QFontWrap::setWeight),
       InstanceMethod("weight", &QFontWrap::weight),
       InstanceMethod("setItalic", &QFontWrap::setItalic),
       InstanceMethod("italic", &QFontWrap::italic),
       InstanceMethod("setStyleName", &QFontWrap::setStyleName),
       InstanceMethod("toString", &QFontWrap::toString),
       StaticMethod("fromQVariant", &StaticQFontWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QFontWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QFontWrap::QFontWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFontWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 4) {
    std::string family = info[0].As<Napi::String>().Utf8Value();
    int pointSize = info[1].As<Napi::Number>().Int32Value();
    int weight = info[2].As<Napi::Number>().Int32Value();
    bool italic = info[3].As<Napi::Boolean>().Value();
    this->instance = std::make_unique<QFont>(
        QString::fromStdString(family.c_str()), pointSize, weight, italic);
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QFont>(info[0].As<Napi::External<QFont>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QFont>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QFontWrap::~QFontWrap() { this->instance.reset(); }

QFont* QFontWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QFontWrap::setBold(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int enable = info[0].As<Napi::Boolean>().Value();
  this->instance->setBold(enable);
  return env.Null();
}

Napi::Value QFontWrap::bold(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->bold());
}

Napi::Value QFontWrap::setCapitalization(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QFont::Capitalization caps = static_cast<QFont::Capitalization>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setCapitalization(caps);
  return env.Null();
}

Napi::Value QFontWrap::capitalization(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env,
                           static_cast<int>(this->instance->capitalization()));
}

Napi::Value QFontWrap::setFamily(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string family = info[0].As<Napi::String>().Utf8Value();
  this->instance->setFamily(QString::fromStdString(family.c_str()));
  return env.Null();
}

Napi::Value QFontWrap::family(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString family = this->instance->family();
  return Napi::String::New(env, family.toStdString());
}

Napi::Value QFontWrap::setPixelSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int pointSize = info[0].As<Napi::Number>().Int32Value();
  this->instance->setPixelSize(pointSize);
  return env.Null();
}

Napi::Value QFontWrap::setPointSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int pointSize = info[0].As<Napi::Number>().Int32Value();
  this->instance->setPointSize(pointSize);
  return env.Null();
}

Napi::Value QFontWrap::pixelSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->pixelSize());
}

Napi::Value QFontWrap::pointSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->pointSize());
}

Napi::Value QFontWrap::setStretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int factor = info[0].As<Napi::Number>().Int32Value();
  this->instance->setStretch(factor);
  return env.Null();
}

Napi::Value QFontWrap::stretch(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->stretch());
}

Napi::Value QFontWrap::setWeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int weight = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWeight(weight);
  return env.Null();
}

Napi::Value QFontWrap::weight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->weight());
}

Napi::Value QFontWrap::setItalic(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int enable = info[0].As<Napi::Boolean>().Value();
  this->instance->setItalic(enable);
  return env.Null();
}

Napi::Value QFontWrap::italic(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Value::From(env, this->instance->italic());
}

Napi::Value QFontWrap::setStyleName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string styleName = info[0].As<Napi::String>().Utf8Value();
  this->instance->setStyleName(QString::fromStdString(styleName.c_str()));
  return env.Null();
}

Napi::Value QFontWrap::toString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QString value = this->instance->toString();
  return Napi::String::New(env, value.toStdString());
}

Napi::Value StaticQFontWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QFont font = variant->value<QFont>();
  auto instance = QFontWrap::constructor.New(
      {Napi::External<QFont>::New(env, new QFont(font))});
  return instance;
}