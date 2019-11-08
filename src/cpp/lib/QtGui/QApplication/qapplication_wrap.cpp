#include "QtGui/QApplication/qapplication_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QClipboard/qclipboard_wrap.h"
#include "core/Component/component_macro.h"

Napi::FunctionReference QApplicationWrap::constructor;
int QApplicationWrap::argc = 0;
char** QApplicationWrap::argv = NULL;

Napi::Object QApplicationWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QApplication";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("processEvents", &QApplicationWrap::processEvents),
       InstanceMethod("exec", &QApplicationWrap::exec),
       InstanceMethod("quit", &QApplicationWrap::quit),
       InstanceMethod("exit", &QApplicationWrap::exit),
       InstanceMethod("setQuitOnLastWindowClosed",
                      &QApplicationWrap::setQuitOnLastWindowClosed),
       InstanceMethod("quitOnLastWindowClosed",
                      &QApplicationWrap::quitOnLastWindowClosed),
       StaticMethod("instance", &StaticQApplicationWrapMethods::instance),
       StaticMethod("clipboard", &StaticQApplicationWrapMethods::clipboard),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QApplicationWrap::QApplicationWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QApplicationWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    this->instance = info[0].As<Napi::External<QApplication>>().Data();
  } else if (info.Length() == 0) {
    this->instance = new QApplication(this->argc, this->argv);
    this->_wasManuallyCreated = true;
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}
QApplicationWrap::~QApplicationWrap() {
  if (this->_wasManuallyCreated) {
    extrautils::safeDelete(this->instance);
  }
}

QApplication* QApplicationWrap::getInternalInstance() { return this->instance; }

Napi::Value QApplicationWrap::processEvents(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->processEvents();
  return env.Null();
}

Napi::Value QApplicationWrap::exec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int exitCode = this->instance->exec();
  return Napi::Number::New(env, exitCode);
}

Napi::Value QApplicationWrap::quit(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->quit();
  return env.Null();
}

Napi::Value QApplicationWrap::exit(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number exitCode = info[0].As<Napi::Number>();
  this->instance->exit(exitCode.Int32Value());
  return env.Null();
}

Napi::Value StaticQApplicationWrapMethods::instance(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QApplication* app = static_cast<QApplication*>(QCoreApplication::instance());
  Napi::Object instance = QApplicationWrap::constructor.New(
      {Napi::External<QApplication>::New(env, app)});
  return instance;
}

Napi::Value StaticQApplicationWrapMethods::clipboard(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QClipboard* clipboard = QApplication::clipboard();
  return QClipboardWrap::constructor.New(
      {Napi::External<QClipboard>::New(env, clipboard)});
}

Napi::Value QApplicationWrap::setQuitOnLastWindowClosed(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Boolean quit = info[0].As<Napi::Boolean>();
  this->instance->setQuitOnLastWindowClosed(quit.Value());
  return env.Null();
}

Napi::Value QApplicationWrap::quitOnLastWindowClosed(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool quit = this->instance->quitOnLastWindowClosed();
  return Napi::Value::From(env, quit);
}