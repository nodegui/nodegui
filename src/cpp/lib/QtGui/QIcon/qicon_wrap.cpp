#include "QtGui/QIcon/qicon_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "QtWidgets/QPainter/qpainter_wrap.h"

Napi::FunctionReference QIconWrap::constructor;

Napi::Object QIconWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QIcon";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {
       InstanceMethod("actualSize", &QIconWrap::actualSize),
       InstanceMethod("addFile", &QIconWrap::addFile),
       InstanceMethod("addPixmap", &QIconWrap::addPixmap),
       InstanceMethod("availableSizes", &QIconWrap::availableSizes),
       InstanceMethod("pixmap", &QIconWrap::pixmap),
       InstanceMethod("isMask", &QIconWrap::isMask),
       InstanceMethod("isNull", &QIconWrap::isNull),
       InstanceMethod("name", &QIconWrap::name),
       InstanceMethod("paint", &QIconWrap::paint),
       InstanceMethod("setIsMask", &QIconWrap::setIsMask),
       InstanceMethod("swap", &QIconWrap::swap),
       InstanceMethod("cacheKey", &QIconWrap::cacheKey),
       StaticMethod("fromQVariant", &StaticQIconWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QIconWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QIconWrap::QIconWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QIconWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance =
          std::unique_ptr<QIcon>(info[0].As<Napi::External<QIcon>>().Data());
    } else {
      if (info[0].IsString()) {
        Napi::String url = info[0].As<Napi::String>();
        QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
        this->instance = std::make_unique<QIcon>(imageUrl);
      } else {
        QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(info[0].As<Napi::Object>());
          QPixmap* pixmap = pixmapWrap->getInternalInstance();
        this->instance = std::make_unique<QIcon>(*pixmap);
      }
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

Napi::Value QIconWrap::actualSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>());
  QSize* size = sizeWrap->getInternalInstance();
  QIcon::Mode mode = static_cast<QIcon::Mode>(info[1].As<Napi::Number>().Int32Value());
  QIcon::State state = static_cast<QIcon::State>(info[2].As<Napi::Number>().Int32Value());
  QSize result = this->instance->actualSize(*size, mode, state);
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
    return resultInstance;
}

Napi::Value QIconWrap::addFile(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string fileNameNapiText = info[0].As<Napi::String>().Utf8Value();
  QString fileName = QString::fromUtf8(fileNameNapiText.c_str());
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(info[1].As<Napi::Object>());
  QSize* size = sizeWrap->getInternalInstance();
  QIcon::Mode mode = static_cast<QIcon::Mode>(info[2].As<Napi::Number>().Int32Value());
  QIcon::State state = static_cast<QIcon::State>(info[3].As<Napi::Number>().Int32Value());
  this->instance->addFile(fileName, *size, mode, state);
  return env.Null();
}

Napi::Value QIconWrap::addPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(info[0].As<Napi::Object>());
    QPixmap* pixmap = pixmapWrap->getInternalInstance();
  QIcon::Mode mode = static_cast<QIcon::Mode>(info[1].As<Napi::Number>().Int32Value());
  QIcon::State state = static_cast<QIcon::State>(info[2].As<Napi::Number>().Int32Value());
  this->instance->addPixmap(*pixmap, mode, state);
  return env.Null();
}

Napi::Value QIconWrap::availableSizes(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIcon::Mode mode = static_cast<QIcon::Mode>(info[0].As<Napi::Number>().Int32Value());
  QIcon::State state = static_cast<QIcon::State>(info[1].As<Napi::Number>().Int32Value());
  QList<QSize> result = this->instance->availableSizes(mode, state);
  Napi::Array resultArrayNapi = Napi::Array::New(env, result.size());
  for (int i = 0; i < result.size(); i++) {
    resultArrayNapi[i] = QSizeWrap::constructor.New(
        {Napi::External<QSize>::New(env, new QSize(result[i]))});
  }
  return resultArrayNapi;
}

Napi::Value QIconWrap::pixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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

Napi::Value QIconWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isNull();
  return Napi::Boolean::New(env, result);
}

Napi::Value QIconWrap::name(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString result = this->instance->name();
  return Napi::String::New(env, result.toStdString());
}

Napi::Value QIconWrap::paint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPainterWrap* painterWrap = Napi::ObjectWrap<QPainterWrap>::Unwrap(info[0].As<Napi::Object>());
    QPainter* painter = painterWrap->getInternalInstance();
  int x = info[1].As<Napi::Number>().Int32Value();
  int y = info[2].As<Napi::Number>().Int32Value();
  int w = info[3].As<Napi::Number>().Int32Value();
  int h = info[4].As<Napi::Number>().Int32Value();
  Qt::Alignment alignment = static_cast<Qt::Alignment>(info[5].As<Napi::Number>().Int32Value());
  QIcon::Mode mode = static_cast<QIcon::Mode>(info[6].As<Napi::Number>().Int32Value());
  QIcon::State state = static_cast<QIcon::State>(info[7].As<Napi::Number>().Int32Value());
  this->instance->paint(painter, x, y, w, h, alignment, mode, state);
  return env.Null();
}

Napi::Value QIconWrap::isMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isMask());
}

Napi::Value QIconWrap::setIsMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  return Napi::Value::From(env, this->instance->cacheKey());
}

Napi::Value QIconWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QIconWrap* qiconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(info[0].As<Napi::Object>());
    QIcon* other = qiconWrap->getInternalInstance();
  this->instance->swap(*other);
  return env.Null();
}

Napi::Value StaticQIconWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QIcon icon = variant->value<QIcon>();
  auto instance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(icon))});
  return instance;
}

