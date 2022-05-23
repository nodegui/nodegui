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
  QOBJECT_REGISTER_WRAPPER(QSvgWidget, QSvgWidgetWrap);
  return exports;
}

QSvgWidget* QSvgWidgetWrap::getInternalInstance() { return this->instance; }

QSvgWidgetWrap::~QSvgWidgetWrap() { extrautils::safeDelete(this->instance); }

QSvgWidgetWrap::QSvgWidgetWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QSvgWidgetWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NSvgWidget();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QSvgWidget>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NSvgWidget(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QSvgWidgetWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}

Napi::Value QSvgWidgetWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
