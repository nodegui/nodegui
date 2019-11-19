#include "QtGui/QIcon/qicon_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QIconWrap::constructor;

Napi::Object QIconWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QIcon";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("pixmap", &QIconWrap::pixmap),
       InstanceMethod("isMask", &QIconWrap::isMask),
       InstanceMethod("setIsMask", &QIconWrap::setIsMask),
       InstanceMethod("cacheKey", &QIconWrap::cacheKey),
       StaticMethod("fromQVariant", &StaticQIconWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QIconWrap::QIconWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QIconWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          std::unique_ptr<QIcon>(info[0].As<Napi::External<QIcon>>().Data());
    } else {
      Napi::String url = info[0].As<Napi::String>();
      QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
      this->instance = std::make_unique<QIcon>(imageUrl);
    }
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QIcon>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QIconWrap::~QIconWrap() { this->instance.reset(); }

QIcon* QIconWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QIconWrap::pixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Number widthValue = info[0].As<Napi::Number>();
  Napi::Number heightValue = info[1].As<Napi::Number>();
  int width = widthValue.Int32Value();
  int height = heightValue.Int32Value();

  QIcon::Mode mode = QIcon::Normal;
  if (info.Length() > 2) {
    int modeInt = info[2].As<Napi::Number>().Int32Value();
    mode = static_cast<QIcon::Mode>(modeInt);
  }

  QIcon::State state = QIcon::Off;
  if (info.Length() > 3) {
    int stateInt = info[3].As<Napi::Number>().Int32Value();
    state = static_cast<QIcon::State>(stateInt);
  }

  QPixmap* pixmap =
      new QPixmap(this->instance->pixmap(width, height, mode, state));
  auto instance =
      QPixmapWrap::constructor.New({Napi::External<QPixmap>::New(env, pixmap)});
  return instance;
}

Napi::Value QIconWrap::isMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isMask());
}

Napi::Value QIconWrap::setIsMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Boolean isMask = info[0].As<Napi::Boolean>();
    this->instance->setIsMask(isMask.Value());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }

  return env.Null();
}
Napi::Value QIconWrap::cacheKey(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->cacheKey());
}

Napi::Value StaticQIconWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QIcon icon = variant->value<QIcon>();
  auto instance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(icon))});
  return instance;
}
