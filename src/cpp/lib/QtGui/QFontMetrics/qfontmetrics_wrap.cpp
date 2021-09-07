#include "QtGui/QFontMetrics/qfontmetrics_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"

Napi::FunctionReference QFontMetricsWrap::constructor;

Napi::Object QFontMetricsWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFontMetrics";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("ascent", &QFontMetricsWrap::ascent),
       InstanceMethod("averageCharWidth", &QFontMetricsWrap::averageCharWidth),
       InstanceMethod("capHeight", &QFontMetricsWrap::capHeight),
       InstanceMethod("descent", &QFontMetricsWrap::descent),
       InstanceMethod("fontDpi", &QFontMetricsWrap::fontDpi),
       InstanceMethod("height", &QFontMetricsWrap::height),
       InstanceMethod("horizontalAdvance",
                      &QFontMetricsWrap::horizontalAdvance),
       InstanceMethod("inFont", &QFontMetricsWrap::inFont),
       InstanceMethod("leading", &QFontMetricsWrap::leading),
       InstanceMethod("leftBearing", &QFontMetricsWrap::leftBearing),
       InstanceMethod("lineSpacing", &QFontMetricsWrap::lineSpacing),
       InstanceMethod("lineWidth", &QFontMetricsWrap::lineWidth),
       InstanceMethod("overlinePos", &QFontMetricsWrap::overlinePos),
       InstanceMethod("rightBearing", &QFontMetricsWrap::rightBearing),
       InstanceMethod("size", &QFontMetricsWrap::size),
       InstanceMethod("strikeOutPos", &QFontMetricsWrap::strikeOutPos),
       InstanceMethod("swap", &QFontMetricsWrap::swap),
       InstanceMethod("underlinePos", &QFontMetricsWrap::underlinePos),
       InstanceMethod("xHeight", &QFontMetricsWrap::xHeight),
       InstanceMethod("maxWidth", &QFontMetricsWrap::maxWidth),
       InstanceMethod("minLeftBearing", &QFontMetricsWrap::minLeftBearing),
       InstanceMethod("minRightBearing", &QFontMetricsWrap::minRightBearing),
       InstanceMethod("inFontUcs4", &QFontMetricsWrap::inFontUcs4),
       InstanceMethod("boundingRect", &QFontMetricsWrap::boundingRect),
       InstanceMethod("tightBoundingRect",
                      &QFontMetricsWrap::tightBoundingRect),
       InstanceMethod("elidedText", &QFontMetricsWrap::elidedText),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QFontMetricsWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QFontMetricsWrap::QFontMetricsWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFontMetricsWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = std::unique_ptr<QFontMetrics>(
          info[0].As<Napi::External<QFontMetrics>>().Data());
    } else {
      Napi::Object wrap0_0 = info[0].As<Napi::Object>();
      QFontWrap* wrap0_1 = Napi::ObjectWrap<QFontWrap>::Unwrap(wrap0_0);
      this->instance =
          std::make_unique<QFontMetrics>(*wrap0_1->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QFontMetrics* QFontMetricsWrap::getInternalInstance() {
  return this->instance.get();
}

Napi::Value QFontMetricsWrap::ascent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->ascent());
}

Napi::Value QFontMetricsWrap::averageCharWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->averageCharWidth());
}

Napi::Value QFontMetricsWrap::capHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->capHeight());
}

Napi::Value QFontMetricsWrap::descent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->descent());
}

Napi::Value QFontMetricsWrap::fontDpi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->fontDpi());
}

Napi::Value QFontMetricsWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->height());
}

Napi::Value QFontMetricsWrap::horizontalAdvance(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

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

Napi::Value QFontMetricsWrap::inFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->inFont(ch));
}

Napi::Value QFontMetricsWrap::leading(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->leading());
}

Napi::Value QFontMetricsWrap::leftBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->leftBearing(ch));
}

Napi::Value QFontMetricsWrap::lineSpacing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->lineSpacing());
}

Napi::Value QFontMetricsWrap::lineWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->lineWidth());
}

Napi::Value QFontMetricsWrap::overlinePos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->overlinePos());
}

Napi::Value QFontMetricsWrap::rightBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  char ch = info[0].As<Napi::String>().Utf8Value()[0];
  return Napi::Boolean::New(env, this->instance->rightBearing(ch));
}

Napi::Value QFontMetricsWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() != 2 && info.Length() != 3) {
    Napi::TypeError::New(env, "Invalid number of arguments to size")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  int flags = info[0].As<Napi::Number>().Int32Value();
  std::string format = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(format.c_str());
  int tabStops = info[2].As<Napi::Number>().Int32Value();
  QSize size = this->instance->size(flags, text, tabStops);
  auto instance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(size))});
  return instance;
}

Napi::Value QFontMetricsWrap::strikeOutPos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->strikeOutPos());
}

Napi::Value QFontMetricsWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QFontMetricsWrap* wrap0_1 =
      Napi::ObjectWrap<QFontMetricsWrap>::Unwrap(wrap0_0);
  this->instance->swap(*wrap0_1->getInternalInstance());
  return env.Null();
}

Napi::Value QFontMetricsWrap::underlinePos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->underlinePos());
}

Napi::Value QFontMetricsWrap::xHeight(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->xHeight());
}

Napi::Value QFontMetricsWrap::maxWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->maxWidth();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsWrap::minLeftBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->minLeftBearing();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsWrap::minRightBearing(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->minRightBearing();
  return Napi::Number::New(env, result);
}

Napi::Value QFontMetricsWrap::inFontUcs4(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  uint ucs4 = info[0].As<Napi::Number>().Uint32Value();
  bool result = this->instance->inFontUcs4(ucs4);
  return Napi::Boolean::New(env, result);
}

Napi::Value QFontMetricsWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRect result = this->instance->boundingRect(text);
  auto resultInstance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(result))});
  return resultInstance;
}

Napi::Value QFontMetricsWrap::tightBoundingRect(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRect result = this->instance->tightBoundingRect(text);
  auto resultInstance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(result))});
  return resultInstance;
}

Napi::Value QFontMetricsWrap::elidedText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  std::string textNapiText = info[0].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  Qt::TextElideMode mode =
      static_cast<Qt::TextElideMode>(info[1].As<Napi::Number>().Int32Value());
  int width = info[2].As<Napi::Number>().Int32Value();
  int flags = info[3].As<Napi::Number>().Int32Value();
  QString result = this->instance->elidedText(text, mode, width, flags);
  return Napi::String::New(env, result.toStdString());
}
