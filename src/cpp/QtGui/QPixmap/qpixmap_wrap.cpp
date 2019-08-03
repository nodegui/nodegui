#include "qpixmap_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"

Napi::FunctionReference QPixmapWrap::constructor;

Napi::Object QPixmapWrap::init(Napi::Env env, Napi::Object exports)
{
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPixmap";
    Napi::Function func = DefineClass(env, CLASSNAME,{
        InstanceMethod("load", &QPixmapWrap::load),
    });
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
    return exports;
}

QPixmapWrap::QPixmapWrap(const Napi::CallbackInfo& info) : Napi::ObjectWrap<QPixmapWrap>(info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    if(info.Length() == 1) {
      Napi::String url = info[0].As<Napi::String>();
      QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
      this->instance = new QPixmap(imageUrl);
    }else if (info.Length() == 0){
        this->instance = new QPixmap();
    }else {
        extrautils::throwTypeError(env, "Wrong number of arguments");
    }
}

QPixmapWrap::~QPixmapWrap()
{
    delete this->instance;
}

QPixmap* QPixmapWrap::getInternalInstance()
{
    return this->instance;
}

Napi::Value QPixmapWrap::load(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    bool loadSuccess = false;
    if(info.Length() == 1) {
      Napi::String url = info[0].As<Napi::String>();
      QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
      loadSuccess = this->instance->load(imageUrl);
    }else {
        extrautils::throwTypeError(env, "Wrong number of arguments");
    }
    return Napi::Boolean::New(env, loadSuccess);
}

