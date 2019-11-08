#include "QtGui/QCursor/qcursor_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QCursorWrap::constructor;

Napi::Object QCursorWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCursor";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("pos", &QCursorWrap::pos),
                   InstanceMethod("setPos", &QCursorWrap::setPos),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QCursorWrap::QCursorWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QCursorWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Number cursor = info[0].As<Napi::Number>();
    this->instance = std::make_unique<QCursor>(
        static_cast<Qt::CursorShape>(cursor.Int32Value()));
  } else if (info.Length() == 0) {
    this->instance = std::make_unique<QCursor>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QCursorWrap::~QCursorWrap() { this->instance.reset(); }

QCursor* QCursorWrap::getInternalInstance() { return this->instance.get(); }

Napi::Value QCursorWrap::pos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPoint pos = this->instance->pos();
  Napi::Object posObj = Napi::Object::New(env);
  posObj.Set("x", pos.x());
  posObj.Set("y", pos.y());
  return posObj;
}

Napi::Value QCursorWrap::setPos(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number x = info[0].As<Napi::Number>();
  Napi::Number y = info[1].As<Napi::Number>();
  this->instance->setPos(x.Int32Value(), y.Int32Value());
  return env.Null();
}