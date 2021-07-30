#include "QtGui/QPalette/qpalette_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QBrush/qbrush_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QPaletteWrap::constructor;

Napi::Object QPaletteWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPen";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("color", &QPaletteWrap::color),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPaletteWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPaletteWrap::QPaletteWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPaletteWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = std::make_unique<QPalette>();
  } else if (info.Length() == 1) {
    this->instance = std::unique_ptr<QPalette>(
        info[0].As<Napi::External<QPalette>>().Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QPaletteWrap::~QPaletteWrap() { this->instance.reset(); }

QPalette* QPaletteWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QPaletteWrap::color(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QPalette::ColorGroup colorGroup = static_cast<QPalette::ColorGroup>(
      info[0].As<Napi::Number>().Int32Value());
  QPalette::ColorRole colorRole =
      static_cast<QPalette::ColorRole>(info[1].As<Napi::Number>().Int32Value());

  QColor color = this->instance->color(colorGroup, colorRole);

  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}
