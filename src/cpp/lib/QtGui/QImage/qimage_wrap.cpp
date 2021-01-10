#include "QtGui/QImage/qimage_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QImageWrap::constructor;

Napi::Object QImageWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QImage";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QImageWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}