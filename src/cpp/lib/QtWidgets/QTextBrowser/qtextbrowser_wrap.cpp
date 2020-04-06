#include "QtWidgets/QTextBrowser/qtextbrowser_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTextBrowserWrap::constructor;

Napi::Object QTextBrowserWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTextBrowser";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("backwardHistoryCount",
                      &QTextBrowserWrap::backwardHistoryCount),
       InstanceMethod("clearHistory", &QTextBrowserWrap::clearHistory),
       InstanceMethod("forwardHistoryCount",
                      &QTextBrowserWrap::forwardHistoryCount),
       InstanceMethod("historyTitle", &QTextBrowserWrap::historyTitle),
       InstanceMethod("historyUrl", &QTextBrowserWrap::historyUrl),
       InstanceMethod("isBackwardAvailable",
                      &QTextBrowserWrap::isBackwardAvailable),
       InstanceMethod("isForwardAvailable",
                      &QTextBrowserWrap::isForwardAvailable),
       InstanceMethod("backward", &QTextBrowserWrap::backward),
       InstanceMethod("forward", &QTextBrowserWrap::forward),
       InstanceMethod("home", &QTextBrowserWrap::home),
       InstanceMethod("reload", &QTextBrowserWrap::reload),
       QTEXTEDIT_WRAPPED_METHODS_EXPORT_DEFINE(QTextBrowserWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTextBrowser* QTextBrowserWrap::getInternalInstance() { return this->instance; }

QTextBrowserWrap::QTextBrowserWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTextBrowserWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NTextBrowser(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NTextBrowser();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QTextBrowserWrap::~QTextBrowserWrap() {
  extrautils::safeDelete(this->instance);
}

Napi::Value QTextBrowserWrap::backwardHistoryCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->backwardHistoryCount());
}

Napi::Value QTextBrowserWrap::clearHistory(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->clearHistory();
  return env.Null();
}

Napi::Value QTextBrowserWrap::forwardHistoryCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->forwardHistoryCount());
}

Napi::Value QTextBrowserWrap::historyTitle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int i = info[0].As<Napi::Number>().Int32Value();
  QString title = this->instance->historyTitle(i);
  return Napi::String::New(env, title.toStdString());
}

Napi::Value QTextBrowserWrap::historyUrl(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int i = info[0].As<Napi::Number>().Int32Value();
  QUrl url = this->instance->historyUrl(i);
  auto instance = QUrlWrap::constructor.New(
      {Napi::External<QUrl>::New(env, new QUrl(url))});
  return instance;
}

Napi::Value QTextBrowserWrap::isBackwardAvailable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isBackwardAvailable());
}

Napi::Value QTextBrowserWrap::isForwardAvailable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isForwardAvailable());
}

Napi::Value QTextBrowserWrap::backward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->backward();
  return env.Null();
}

Napi::Value QTextBrowserWrap::forward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->forward();
  return env.Null();
}

Napi::Value QTextBrowserWrap::home(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->home();
  return env.Null();
}

Napi::Value QTextBrowserWrap::reload(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->reload();
  return env.Null();
}
