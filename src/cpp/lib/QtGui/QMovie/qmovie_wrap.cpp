#include "QtGui/QMovie/qmovie_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QMovieWrap::constructor;

Napi::Object QMovieWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMovie";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QMovieWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NMovie* QMovieWrap::getInternalInstance() { return this->instance; }

QMovieWrap::~QMovieWrap() { extrautils::safeDelete(this->instance); }

QMovieWrap::QMovieWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMovieWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    if (info[0].IsExternal()) {
      this->instance = new NMovie(info[0].As<Napi::External<NMovie>>().Data());
    } else {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QMovieWrap* parentWidgetWrap =
          Napi::ObjectWrap<QMovieWrap>::Unwrap(parentObject);
      this->instance = new NMovie(parentWidgetWrap->getInternalInstance());
    }
  } else if (info.Length() == 0) {
    this->instance = new NMovie();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}
