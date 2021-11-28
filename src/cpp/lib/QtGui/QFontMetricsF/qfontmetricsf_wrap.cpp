#include "QtGui/QFontMetricsF/qfontmetricsf_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRectF/qrectf_wrap.h"
#include "QtCore/QSizeF/qsizef_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"

Napi::FunctionReference QFontMetricsFWrap::constructor;

Napi::Object QFontMetricsFWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFontMetricsF";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("ascent", &QFontMetricsFWrap::ascent),
       InstanceMethod("averageCharWidth", &QFontMetricsFWrap::averageCharWidth),
       InstanceMethod("capHeight", &QFontMetricsFWrap::capHeight),
       InstanceMethod("descent", &QFontMetricsFWrap::descent),
       InstanceMethod("fontDpi", &QFontMetricsFWrap::fontDpi),
       InstanceMethod("height", &QFontMetricsFWrap::height),
       InstanceMethod("horizontalAdvance",
                      &QFontMetricsFWrap::horizontalAdvance),
       InstanceMethod("inFont", &QFontMetricsFWrap::inFont),
       InstanceMethod("leading", &QFontMetricsFWrap::leading),
       InstanceMethod("leftBearing", &QFontMetricsFWrap::leftBearing),
       InstanceMethod("lineSpacing", &QFontMetricsFWrap::lineSpacing),
       InstanceMethod("lineWidth", &QFontMetricsFWrap::lineWidth),
       InstanceMethod("overlinePos", &QFontMetricsFWrap::overlinePos),
       InstanceMethod("rightBearing", &QFontMetricsFWrap::rightBearing),
       InstanceMethod("size", &QFontMetricsFWrap::size),
       InstanceMethod("strikeOutPos", &QFontMetricsFWrap::strikeOutPos),
       InstanceMethod("swap", &QFontMetricsFWrap::swap),
       InstanceMethod("underlinePos", &QFontMetricsFWrap::underlinePos),
       InstanceMethod("xHeight", &QFontMetricsFWrap::xHeight),
       InstanceMethod("maxWidth", &QFontMetricsFWrap::maxWidth),
       InstanceMethod("minLeftBearing", &QFontMetricsFWrap::minLeftBearing),
       InstanceMethod("minRightBearing", &QFontMetricsFWrap::minRightBearing),
       InstanceMethod("inFontUcs4", &QFontMetricsFWrap::inFontUcs4),
       InstanceMethod("boundingRect", &QFontMetricsFWrap::boundingRect),
       InstanceMethod("tightBoundingRect",
                      &QFontMetricsFWrap::tightBoundingRect),
       InstanceMethod("elidedText", &QFontMetricsFWrap::elidedText),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QFontMetricsFWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QFontMetricsFWrap::QFontMetricsFWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFontMetricsFWrap>(info) {
  Napi::Env env = info.Env();

  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = std::unique_ptr<QFontMetricsF>(
          info[0].As<Napi::External<QFontMetricsF>>().Data());
    } else {
      Napi::Object wrap0_0 = info[0].As<Napi::Object>();
      QFontWrap* wrap0_1 = Napi::ObjectWrap<QFontWrap>::Unwrap(wrap0_0);
      this->instance =
          std::make_unique<QFontMetricsF>(*wrap0_1->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QFontMetricsF* QFontMetricsFWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QFontMetricsFWrap::ascent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->ascent());
}

Napi::Value QFontMetricsFWrap::averageCharWidth(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->averageCharWidth());
}

Napi::Value QFontMetricsFWrap::capHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->capHeight());
}

Napi::Value QFontMetricsFWrap::descent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->descent());
}

Napi::Value QFontMetricsFWrap::fontDpi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->fontDpi());
}

Napi::Value QFontMetricsFWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->height());
}

Napi::Value QFontMetricsFWrap::horizontalAdvance(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  std::string format = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(format.c_str());
  if (info.Length() <= 2 && text.length() == 1) {
    return Napi::Value::From(env, this->instance->horizontalAdvance(text[0]));
  } else if (info.Length() == 2) {
    int len = info[1].As<Napi::Number>().Int32Value();
    return Napi::Value::From(env, this->instance->horizontalAdvance(text, len));
  } else {
    Napi::TypeError::New(env,
                         "Invalid number of arguments to horizontalAdvance")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
}

Napi::Value QFontMetricsFWrap::inFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->inFont(ch));
}

Napi::Value QFontMetricsFWrap::leading(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->leading());
}

Napi::Value QFontMetricsFWrap::leftBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->leftBearing(ch));
}

Napi::Value QFontMetricsFWrap::lineSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->lineSpacing());
}

Napi::Value QFontMetricsFWrap::lineWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->lineWidth());
}

Napi::Value QFontMetricsFWrap::overlinePos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->overlinePos());
}

Napi::Value QFontMetricsFWrap::rightBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->rightBearing(ch));
}

Napi::Value QFontMetricsFWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  if (info.Length() != 2 && info.Length() != 3) {
    Napi::TypeError::New(env, "Invalid number of arguments to size")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  int flags = info[0].As<Napi::Number>().Int32Value();
  std::string format = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(format.c_str());
  int tabStops = info[2].As<Napi::Number>().Int32Value();
  QSizeF size = this->instance->size(flags, text, tabStops);
  auto instance = QSizeFWrap::constructor.New(
      {Napi::External<QSizeF>::New(env, new QSizeF(size))});
  return instance;
}

Napi::Value QFontMetricsFWrap::strikeOutPos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->strikeOutPos());
}

Napi::Value QFontMetricsFWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QFontMetricsFWrap* wrap0_1 =
      Napi::ObjectWrap<QFontMetricsFWrap>::Unwrap(wrap0_0);
  this->instance->swap(*wrap0_1->getInternalInstance());
  return env.Null();
}

Napi::Value QFontMetricsFWrap::underlinePos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->underlinePos());
}

Napi::Value QFontMetricsFWrap::xHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::Value::From(env, this->instance->xHeight());
}

Napi::Value QFontMetricsFWrap::maxWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->maxWidth();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsFWrap::minLeftBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->minLeftBearing();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsFWrap::minRightBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->minRightBearing();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsFWrap::inFontUcs4(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  uint ucs4 = info[0].As<Napi::Number>().Uint32Value();
  bool result = this->instance->inFontUcs4(ucs4);
  return Napi::Boolean::New(env, result);
}

Napi::Value QFontMetricsFWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRectF result = this->instance->boundingRect(text);
  auto resultInstance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(result))});
  return resultInstance;
}

Napi::Value QFontMetricsFWrap::tightBoundingRect(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRectF result = this->instance->tightBoundingRect(text);
  auto resultInstance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(result))});
  return resultInstance;
}

Napi::Value QFontMetricsFWrap::elidedText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  Qt::TextElideMode mode =
      static_cast<Qt::TextElideMode>(info[1].As<Napi::Number>().Int32Value());
  int width = info[2].As<Napi::Number>().Int32Value();
  int flags = info[3].As<Napi::Number>().Int32Value();
  QString result = this->instance->elidedText(text, mode, width, flags);
  return Napi::String::New(env, result.toStdString());
}
