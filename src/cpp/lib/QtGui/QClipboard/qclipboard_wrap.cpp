#include "QtGui/QClipboard/qclipboard_wrap.h"

#include <QtGui/QPixmap/qpixmap_wrap.h>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QClipboardWrap::constructor;

Napi::Object QClipboardWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QClipboard";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("clear", &QClipboardWrap::clear),
                   InstanceMethod("setPixmap", &QClipboardWrap::setPixmap),
                   InstanceMethod("pixmap", &QClipboardWrap::pixmap),
                   InstanceMethod("setText", &QClipboardWrap::setText),
                   InstanceMethod("text", &QClipboardWrap::text),
                   QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QClipboardWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QClipboardWrap::QClipboardWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QClipboardWrap>(info) {
  Napi::Env env = info.Env();
  if (info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QClipboard>>().Data();
  } else {
    Napi::TypeError::New(env, "Incorrect initialization of QClipboardWrap")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QClipboard* QClipboardWrap::getInternalInstance() { return this->instance; }

void QClipboardWrap::connectSignalsToEventEmitter() {
  QOBJECT_SIGNALS_ON_TARGET(this->instance.data());

  QObject::connect(this->instance.data(), &QClipboard::changed,
                   [=](const QClipboard::Mode mode) {
                     Napi::Env env = this->emitOnNode.Env();
                     Napi::HandleScope scope(env);
                     this->emitOnNode.Call(
                         {Napi::String::New(env, "changed"),
                          Napi::Value::From(env, static_cast<uint>(mode))});
                   });

  QObject::connect(this->instance.data(), &QClipboard::dataChanged, [=]() {
    Napi::Env env = this->emitOnNode.Env();
    Napi::HandleScope scope(env);
    this->emitOnNode.Call({Napi::String::New(env, "dataChanged")});
  });

  QObject::connect(
      this->instance.data(), &QClipboard::findBufferChanged, [=]() {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call({Napi::String::New(env, "findBufferChanged")});
      });

  QObject::connect(this->instance.data(), &QClipboard::selectionChanged, [=]() {
    Napi::Env env = this->emitOnNode.Env();
    Napi::HandleScope scope(env);
    this->emitOnNode.Call({Napi::String::New(env, "selectionChanged")});
  });
}

Napi::Value QClipboardWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number mode = info[0].As<Napi::Number>();
  this->instance->clear(static_cast<QClipboard::Mode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QClipboardWrap::setPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  Napi::Object pixmapObject = info[0].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  Napi::Number mode = info[1].As<Napi::Number>();
  this->instance->setPixmap(*pixmapWrap->getInternalInstance(),
                            static_cast<QClipboard::Mode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QClipboardWrap::pixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number mode = info[0].As<Napi::Number>();
  QPixmap pixmap =
      this->instance->pixmap(static_cast<QClipboard::Mode>(mode.Int32Value()));
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(pixmap))});
  return instance;
}

Napi::Value QClipboardWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String text = info[0].As<Napi::String>();
  Napi::Number mode = info[1].As<Napi::Number>();
  QString clipboardText = text.Utf8Value().c_str();
  this->instance->setText(clipboardText,
                          static_cast<QClipboard::Mode>(mode.Int32Value()));
  return env.Null();
}

Napi::Value QClipboardWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number mode = info[0].As<Napi::Number>();
  QString text =
      this->instance->text(static_cast<QClipboard::Mode>(mode.Int32Value()));
  return Napi::Value::From(env, text.toStdString());
}