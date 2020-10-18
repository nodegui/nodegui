#include "QtWidgets/QSvgWidget/qsvgwidget_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QSvgWidgetWrap::constructor;

Napi::Object QSvgWidgetWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QSvgWidget";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("load", &QSvgWidgetWrap::load),
                   QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QSvgWidgetWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NSvgWidget* QSvgWidgetWrap::getInternalInstance() { return this->instance; }

QSvgWidgetWrap::~QSvgWidgetWrap() { extrautils::safeDelete(this->instance); }

QSvgWidgetWrap::QSvgWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSvgWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NSvgWidget(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NSvgWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QSvgWidgetWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Value value = info[0];
  std::string napis = value.As<Napi::String>().Utf8Value();
  QString s = QString::fromUtf8(napis.c_str());
  QString svgPrefix = "data:image/svg+xml;base64,";
  if (s.startsWith(svgPrefix)) {
    QString base64 = s.replace(svgPrefix, QString(""));
    QByteArray svg =
        QByteArray::fromBase64(s.toUtf8(), QByteArray::Base64Encoding);
    this->instance->load(svg);
  } else {
    this->instance->load(s);
  }
  return env.Null();
}
