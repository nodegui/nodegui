#include "QtGui/QApplication/qapplication_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QClipboard/qclipboard_wrap.h"
#include "QtGui/QPalette/qpalette_wrap.h"
#include "QtGui/QStyle/qstyle_wrap.h"
#include "core/Integration/qode-api.h"
#include "core/WrapperCache/wrappercache.h"

Napi::FunctionReference QApplicationWrap::constructor;

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
       InstanceMethod("palette", &QApplicationWrap::palette),
       InstanceMethod("setStyleSheet", &QApplicationWrap::setStyleSheet),
       InstanceMethod("devicePixelRatio", &QApplicationWrap::devicePixelRatio),
       StaticMethod("instance", &StaticQApplicationWrapMethods::instance),
       StaticMethod("clipboard", &StaticQApplicationWrapMethods::clipboard),
       StaticMethod("setStyle", &StaticQApplicationWrapMethods::setStyle),
       StaticMethod("style", &StaticQApplicationWrapMethods::style),
       StaticMethod("primaryScreen",
                    &StaticQApplicationWrapMethods::primaryScreen),
       StaticMethod("screens", &StaticQApplicationWrapMethods::screens),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QApplicationWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QApplicationWrap::QApplicationWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QApplicationWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 1) {
    this->instance = info[0].As<Napi::External<NApplication>>().Data();
  } else if (argCount == 0) {
    this->instance = new NApplication(qode::qode_argc, qode::qode_argv);
    this->_wasManuallyCreated = true;
  } else {
    Napi::TypeError::New(env,
                         "NodeGui: QApplicationWrap: Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
QApplicationWrap::~QApplicationWrap() {
  if (this->_wasManuallyCreated) {
    extrautils::safeDelete(this->instance);
  }
}

NApplication* QApplicationWrap::getInternalInstance() { return this->instance; }

Napi::Value QApplicationWrap::processEvents(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->processEvents();
  return env.Null();
}

Napi::Value QApplicationWrap::exec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int exitCode = this->instance->exec();
  return Napi::Number::New(env, exitCode);
}

Napi::Value QApplicationWrap::quit(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->quit();
  return env.Null();
}

Napi::Value QApplicationWrap::exit(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number exitCode = info[0].As<Napi::Number>();
  this->instance->exit(exitCode.Int32Value());
  return env.Null();
}

Napi::Value QApplicationWrap::palette(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPalette* palette = new QPalette(this->instance->palette());
  return QPaletteWrap::constructor.New(
      {Napi::External<QPalette>::New(env, palette)});
}

Napi::Value QApplicationWrap::setStyleSheet(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String text = info[0].As<Napi::String>();
  std::string style = text.Utf8Value();
  QString newStyle = QString::fromStdString(style);
  QString currentStyleSheet = this->instance->styleSheet();
  if (newStyle != currentStyleSheet) {
    this->instance->setStyleSheet(newStyle);
  }
  return env.Null();
}

Napi::Value StaticQApplicationWrapMethods::instance(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  NApplication* app = static_cast<NApplication*>(QCoreApplication::instance());
  Napi::Object instance = QApplicationWrap::constructor.New(
      {Napi::External<NApplication>::New(env, app)});
  return instance;
}

Napi::Value StaticQApplicationWrapMethods::clipboard(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QClipboard* clipboard = QApplication::clipboard();
  if (clipboard) {
    return WrapperCache::instance.getWrapper(env, clipboard, true);
  } else {
    return env.Null();
  }
}

Napi::Value StaticQApplicationWrapMethods::setStyle(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QStyleWrap* styleWrap =
      Napi::ObjectWrap<QStyleWrap>::Unwrap(info[0].As<Napi::Object>());
  QStyle* style = styleWrap->getInternalInstance();
  QApplication::setStyle(style);

  return env.Null();
}

Napi::Value StaticQApplicationWrapMethods::style(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QStyle* style = QApplication::style();
  return QStyleWrap::constructor.New({Napi::External<QStyle>::New(env, style)});
}

Napi::Value QApplicationWrap::setQuitOnLastWindowClosed(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Boolean quit = info[0].As<Napi::Boolean>();
  this->instance->setQuitOnLastWindowClosed(quit.Value());
  return env.Null();
}

Napi::Value QApplicationWrap::quitOnLastWindowClosed(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool quit = this->instance->quitOnLastWindowClosed();
  return Napi::Value::From(env, quit);
}

Napi::Value StaticQApplicationWrapMethods::primaryScreen(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  auto screen = QApplication::primaryScreen();
  if (screen) {
    return WrapperCache::instance.getWrapper(env, screen, true);
  } else {
    return env.Null();
  }
}

Napi::Value StaticQApplicationWrapMethods::screens(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  auto screens = QApplication::screens();
  Napi::Array jsArray = Napi::Array::New(env, screens.size());
  for (int i = 0; i < screens.size(); i++) {
    QScreen* screen = screens[i];
    auto instance = WrapperCache::instance.getWrapper(env, screen, true);
    jsArray[i] = instance;
  }
  return jsArray;
}

Napi::Value QApplicationWrap::devicePixelRatio(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal result = this->instance->devicePixelRatio();
  return Napi::Value::From(env, result);
}
