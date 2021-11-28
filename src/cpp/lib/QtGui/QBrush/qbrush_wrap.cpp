#include "QtGui/QBrush/qbrush_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QBrushWrap::constructor;

Napi::Object QBrushWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QBrush";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("isOpaque", &QBrushWrap::isOpaque),
       InstanceMethod("setColor", &QBrushWrap::setColor),
       InstanceMethod("color", &QBrushWrap::color),
       InstanceMethod("setStyle", &QBrushWrap::setStyle),
       InstanceMethod("style", &QBrushWrap::style),
       InstanceMethod("setTexture", &QBrushWrap::setTexture),
       InstanceMethod("texture", &QBrushWrap::texture),
       StaticMethod("fromQVariant", &StaticQBrushWrapMethods::fromQVariant),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QBrushWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QBrushWrap::QBrushWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QBrushWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 2) {
    if (info[0].IsNumber()) {
      Qt::GlobalColor color =
          (Qt::GlobalColor)info[0].As<Napi::Number>().Int32Value();
      Qt::BrushStyle style =
          (Qt::BrushStyle)info[1].As<Napi::Number>().Int32Value();
      this->instance = std::make_unique<QBrush>(color, style);
    } else {
      Napi::Object colorObject = info[0].As<Napi::Object>();
      QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
      Qt::BrushStyle style =
          (Qt::BrushStyle)info[1].As<Napi::Number>().Int32Value();
      this->instance =
          std::make_unique<QBrush>(*colorWrap->getInternalInstance(), style);
    }
  } else if (info.Length() == 1) {
    this->instance =
        std::unique_ptr<QBrush>(info[0].As<Napi::External<QBrush>>().Data());
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QBrush>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QBrushWrap::~QBrushWrap() { this->instance.reset(); }

QBrush* QBrushWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QBrushWrap::isOpaque(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->isOpaque());
}

Napi::Value QBrushWrap::setColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info[0].IsNumber()) {
    Qt::GlobalColor color =
        (Qt::GlobalColor)info[0].As<Napi::Number>().Int32Value();
    this->instance->setColor(color);
  } else {
    Napi::Object colorObject = info[0].As<Napi::Object>();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
    this->instance->setColor(*colorWrap->getInternalInstance());
  }
  return env.Null();
}

Napi::Value QBrushWrap::color(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QColor color = this->instance->color();
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QBrushWrap::setStyle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::BrushStyle style =
      (Qt::BrushStyle)info[0].As<Napi::Number>().Int32Value();
  this->instance->setStyle(style);
  return env.Null();
}

Napi::Value QBrushWrap::style(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::BrushStyle style = this->instance->style();
  return Napi::Number::New(env, static_cast<int>(style));
}

Napi::Value QBrushWrap::setTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pixmapObject = info[0].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  this->instance->setTexture(*pixmapWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QBrushWrap::texture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPixmap pixmap = this->instance->texture();
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(pixmap))});
  return instance;
}

Napi::Value StaticQBrushWrapMethods::fromQVariant(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object variantObject = info[0].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant* variant = variantWrap->getInternalInstance();
  QBrush brush = variant->value<QBrush>();
  auto instance = QBrushWrap::constructor.New(
      {Napi::External<QBrush>::New(env, new QBrush(brush))});
  return instance;
}
