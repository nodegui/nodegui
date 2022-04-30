#include "QtGui/QWindow/qwindow_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QScreen/qscreen_wrap.h"
#include "core/WrapperCache/wrappercache.h"

Napi::FunctionReference QWindowWrap::constructor;

Napi::Object QWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWindow";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("screen", &QWindowWrap::screen),
       InstanceMethod("showFullScreen", &QWindowWrap::showFullScreen),
       InstanceMethod("showMaximized", &QWindowWrap::showMaximized),
       InstanceMethod("showMinimized", &QWindowWrap::showMinimized),
       InstanceMethod("showNormal", &QWindowWrap::showNormal),
       InstanceMethod("startSystemMove", &QWindowWrap::startSystemMove),
       InstanceMethod("startSystemResize", &QWindowWrap::startSystemResize),
       InstanceMethod("setWindowState", &QWindowWrap::setWindowState),
       InstanceMethod("windowState", &QWindowWrap::windowState),
       InstanceMethod("visibility", &QWindowWrap::visibility),
       InstanceMethod("setVisibility", &QWindowWrap::setVisibility),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QWindowWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QWindow* QWindowWrap::getInternalInstance() { return this->instance; }

QWindowWrap::QWindowWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QWindowWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1 && info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QWindow>>().Data();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments to QWindow.")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QWindowWrap::~QWindowWrap() {
  if (!this->instance.isNull()) {
    this->instance->removeEventFilter(this);
  }
}

void QWindowWrap::connectSignalsToEventEmitter() {
  QOBJECT_SIGNALS_ON_TARGET(this->instance.data());

  QObject::connect(
      this->instance.data(), &QWindow::screenChanged, [=](QScreen* screen) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        auto instance =
            WrapperCache::instance.get<QScreen, QScreenWrap>(env, screen, false);
        this->emitOnNode.Call(
            {Napi::String::New(env, "screenChanged"), instance});
      });

  QObject::connect(
      this->instance.data(), &QWindow::visibilityChanged,
      [=](QWindow::Visibility visibility) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call({Napi::String::New(env, "visibilityChanged"),
                               Napi::Number::New(env, visibility)});
      });

  this->instance->installEventFilter(this);
}

bool QWindowWrap::eventFilter(QObject* watched, QEvent* event) {
  return this->EventWidget::event(event);
}

Napi::Value QWindowWrap::screen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QScreen* screen = this->instance->screen();
  if (screen) {
    return WrapperCache::instance.get<QScreen, QScreenWrap>(env, screen, false);
  } else {
    return env.Null();
  }
}

Napi::Value QWindowWrap::showFullScreen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showFullScreen();
  return env.Null();
}

Napi::Value QWindowWrap::showMaximized(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMaximized();
  return env.Null();
}

Napi::Value QWindowWrap::showMinimized(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMinimized();
  return env.Null();
}

Napi::Value QWindowWrap::showNormal(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showNormal();
  return env.Null();
}

Napi::Value QWindowWrap::startSystemMove(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->startSystemMove();
  return Napi::Boolean::New(env, result);
}

Napi::Value QWindowWrap::startSystemResize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  uint edge = info[0].As<Napi::Number>().Uint32Value();
  bool result = this->instance->startSystemResize(static_cast<Qt::Edges>(edge));
  return Napi::Boolean::New(env, result);
}

Napi::Value QWindowWrap::setWindowState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number state = info[0].As<Napi::Number>();
  this->instance->setWindowState(
      static_cast<Qt::WindowState>(state.Uint32Value()));
  return env.Null();
}

Napi::Value QWindowWrap::windowState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  uint state = static_cast<uint>(this->instance->windowState());
  return Napi::Value::From(env, state);
}

Napi::Value QWindowWrap::visibility(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  uint state = static_cast<uint>(this->instance->visibility());
  return Napi::Value::From(env, state);
}

Napi::Value QWindowWrap::setVisibility(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number state = info[0].As<Napi::Number>();
  this->instance->setVisibility(
      static_cast<QWindow::Visibility>(state.Uint32Value()));
  return env.Null();
}
