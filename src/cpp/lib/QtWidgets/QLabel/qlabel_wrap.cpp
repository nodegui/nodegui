#include "QtWidgets/QLabel/qlabel_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QMovie/qmovie_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
Napi::FunctionReference QLabelWrap::constructor;

Napi::Object QLabelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLabel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setAlignment", &QLabelWrap::setAlignment),
       InstanceMethod("alignment", &QLabelWrap::alignment),
       InstanceMethod("setIndent", &QLabelWrap::setIndent),
       InstanceMethod("indent", &QLabelWrap::indent),
       InstanceMethod("setMargin", &QLabelWrap::setMargin),
       InstanceMethod("margin", &QLabelWrap::margin),
       InstanceMethod("setTextFormat", &QLabelWrap::setTextFormat),
       InstanceMethod("textFormat", &QLabelWrap::textFormat),
       InstanceMethod("setWordWrap", &QLabelWrap::setWordWrap),
       InstanceMethod("wordWrap", &QLabelWrap::wordWrap),
       InstanceMethod("setText", &QLabelWrap::setText),
       InstanceMethod("text", &QLabelWrap::text),
       InstanceMethod("setPixmap", &QLabelWrap::setPixmap),
       InstanceMethod("setMovie", &QLabelWrap::setMovie),
       InstanceMethod("setOpenExternalLinks",
                      &QLabelWrap::setOpenExternalLinks),
       InstanceMethod("openExternalLinks", &QLabelWrap::openExternalLinks),
       InstanceMethod("clear", &QLabelWrap::clear),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLabelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLabel* QLabelWrap::getInternalInstance() { return this->instance; }

QLabelWrap::~QLabelWrap() { extrautils::safeDelete(this->instance); }

QLabelWrap::QLabelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLabelWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NLabel(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NLabel();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  auto flexNode = this->getInternalInstance()->getFlexNode();
  YGNodeSetNodeType(flexNode, YGNodeType::YGNodeTypeText);
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), flexNode, true);
}

Napi::Value QLabelWrap::setAlignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = info[0].As<Napi::Number>().Int32Value();
  this->instance->setAlignment(static_cast<Qt::Alignment>(alignment));
  return env.Null();
}

Napi::Value QLabelWrap::alignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = static_cast<int>(this->instance->alignment());
  return Napi::Value::From(env, alignment);
}

Napi::Value QLabelWrap::setIndent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int indent = info[0].As<Napi::Number>().Int32Value();
  this->instance->setIndent(indent);
  return env.Null();
}

Napi::Value QLabelWrap::indent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->indent());
}

Napi::Value QLabelWrap::setMargin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int margin = info[0].As<Napi::Number>().Int32Value();
  this->instance->setMargin(margin);
  return env.Null();
}

Napi::Value QLabelWrap::margin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->margin());
}

Napi::Value QLabelWrap::setTextFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int format = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTextFormat(static_cast<Qt::TextFormat>(format));
  return env.Null();
}

Napi::Value QLabelWrap::textFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int format = static_cast<int>(this->instance->textFormat());
  return Napi::Value::From(env, format);
}

Napi::Value QLabelWrap::setWordWrap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Boolean On = info[0].As<Napi::Boolean>();
  this->instance->setWordWrap(On);

  return env.Null();
}

Napi::Value QLabelWrap::wordWrap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool isWordWrap = this->instance->wordWrap();
  return Napi::Value::From(env, isWordWrap);
}

Napi::Value QLabelWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String text = info[0].As<Napi::String>();
  std::string label = text.Utf8Value();
  this->instance->setText(QString::fromUtf8(label.c_str()));

  return env.Null();
}

Napi::Value QLabelWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string labelText = this->instance->text().toStdString();
  return Napi::String::New(env, labelText);
}

Napi::Value QLabelWrap::setPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object pixmapObject = info[0].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  this->instance->setPixmap(*pixmapWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::setMovie(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object movieObject = info[0].As<Napi::Object>();
  QMovieWrap* movieWrap = Napi::ObjectWrap<QMovieWrap>::Unwrap(movieObject);
  this->instance->setMovie(movieWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QLabelWrap::setOpenExternalLinks(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean open = info[0].As<Napi::Boolean>();
  this->instance->setOpenExternalLinks(open.Value());
  return env.Null();
}

Napi::Value QLabelWrap::openExternalLinks(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->openExternalLinks());
}

Napi::Value QLabelWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->clear();
  return env.Null();
}