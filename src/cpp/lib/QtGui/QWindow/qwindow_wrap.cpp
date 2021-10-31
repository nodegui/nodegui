#include "QtGui/QWindow/qwindow_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QScreen/qscreen_wrap.h"
#include "core/WrapperCache/wrappercache.h"

Napi::FunctionReference QWindowWrap::constructor;

Napi::Object QWindowWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWindow";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("screen", &QWindowWrap::screen),
                   QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QWindowWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QWindow* QWindowWrap::getInternalInstance() { return this->instance; }

QWindowWrap::QWindowWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QWindowWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1 && info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QWindow>>().Data();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments to QWindow.")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

void QWindowWrap::connectSignalsToEventEmitter() {
  QOBJECT_SIGNALS_ON_TARGET(this->instance.data());

  QObject::connect(
      this->instance.data(), &QWindow::screenChanged, [=](QScreen* screen) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call({Napi::String::New(env, "screenChanged")});
      });
}

Napi::Value QWindowWrap::screen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QScreen* screen = this->instance->screen();
  if (screen) {
    return WrapperCache::instance.get<QScreen, QScreenWrap>(info, screen);
  } else {
    return env.Null();
  }
}
