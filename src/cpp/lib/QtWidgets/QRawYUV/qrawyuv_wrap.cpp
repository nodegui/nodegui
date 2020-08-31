#include "QtWidgets/QRawYUV/qrawyuv_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QRawYUVWrap::constructor;

Napi::Object QRawYUVWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QRawYUV";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {
                      InstanceMethod("render", &QRawYUVWrap::render),
                      QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QRawYUVWrap)
                      // QFRAME_WRAPPED_METHODS_EXPORT_DEFINE(QRawYUVWrap)
                  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

OpenGLDisplay* QRawYUVWrap::getInternalInstance() { return this->instance; }

QRawYUVWrap::QRawYUVWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QRawYUVWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 3) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new OpenGLDisplay(parentWidgetWrap->getInternalInstance());
    const unsigned FRAME_WIDTH = info[1].As<Napi::Number>().Int32Value();
    const unsigned FRAME_HEIGHT = info[2].As<Napi::Number>().Int32Value();
    this->instance->InitDrawBuffer(FRAME_WIDTH, FRAME_HEIGHT);
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(this->getInternalInstance(), this->getInternalInstance()->getFlexNode(), true);
}

QRawYUVWrap::~QRawYUVWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QRawYUVWrap::render(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Buffer<unsigned char> buffer = info[0].As<Napi::Buffer<unsigned char>>();
  this->instance->DisplayVideoFrame(buffer.Data());
  return env.Null();
}